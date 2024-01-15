#include <stdio.h>
#include <REGX52.H>
void niXie(unsigned char location, number)
{
    switch (location)
    {
    case 1:
        P2_4 = 1;
        P2_3 = 1;
        P2_1 = 1;
        break;
    case 2:
        P2_4 = 1;
        P2_3 = 1;
        P2_1 = 1;
        break;
    case 3:
        P2_4 = 1;
        P2_3 = 1;
        P2_1 = 1;
        break;
    case 4:
        P2_4 = 1;
        P2_3 = 1;
        P2_1 = 1;
        break;
    case 5:
        P2_4 = 1;
        P2_3 = 1;
        P2_1 = 1;
        break;
    case 6:
        P2_4 = 1;
        P2_3 = 1;
        P2_1 = 1;
        break;
    case 7:
        P2_4 = 1;
        P2_3 = 1;
        P2_1 = 1;
        break;
        case 8:
        P2_4 = 1;
        P2_3 = 1;
        P2_1 = 1;
        break;    
    default:
        break;
    }
}
int main()
{
    P2_4 = 1;
    P2_3 = 0;
    P2_1 = 1;
    P0 = 0x7D;
    while (1)
        ;
    return 0;
}

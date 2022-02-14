
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(int VAR_4, bool VAR_5)
{
    if (VAR_5)
    {
        switch (VAR_4)
        {
        case 0:
            VAR_2 |= (1 << 6);
            break;
        case 1:
            VAR_0 |= (1 << 6);
            break;
        case 2:
            VAR_3 |= (1 << 5);
            break;
        case 3:
            VAR_0 |= (1 << 4);
            break;
        case 4:
            VAR_1 |= (1 << 7);
            break;
        case 5:
            VAR_3 |= (1 << 7);
            break;
        }
    }
    else
    {
        switch (VAR_4)
        {
        case 0:
            VAR_2 &= ~(1 << 6);
            break;
        case 1:
            VAR_0 &= ~(1 << 6);
            break;
        case 2:
            VAR_3 &= ~(1 << 5);
            break;
        case 3:
            VAR_0 &= ~(1 << 4);
            break;
        case 4:
            VAR_1 &= ~(1 << 7);
            break;
        case 5:
            VAR_3 &= ~(1 << 7);
            break;
        }
    }
}

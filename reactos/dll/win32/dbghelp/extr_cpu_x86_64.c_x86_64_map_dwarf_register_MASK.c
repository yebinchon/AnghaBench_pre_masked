
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 unsigned int VAR_29 ;
 unsigned int VAR_30 ;
 unsigned int VAR_31 ;
 int FUNC_0 (char*,unsigned int) ;

__attribute__((used)) static unsigned FUNC_1(unsigned VAR_32, BOOL VAR_33)
{
    unsigned VAR_34;

    if (VAR_32 >= 17 && VAR_32 <= 24)
        VAR_34 = VAR_30 + VAR_32 - 17;
    else if (VAR_32 >= 25 && VAR_32 <= 32)
        VAR_34 = VAR_31 + VAR_32 - 25;
    else if (VAR_32 >= 33 && VAR_32 <= 40)
        VAR_34 = VAR_27 + VAR_32 - 33;
    else switch (VAR_32)
    {
    case 0: VAR_34 = VAR_17; break;
    case 1: VAR_34 = VAR_22; break;
    case 2: VAR_34 = VAR_20; break;
    case 3: VAR_34 = VAR_19; break;
    case 4: VAR_34 = VAR_24; break;
    case 5: VAR_34 = VAR_21; break;
    case 6: VAR_34 = VAR_18; break;
    case 7: VAR_34 = VAR_25; break;
    case 8: VAR_34 = VAR_15; break;
    case 9: VAR_34 = VAR_16; break;
    case 10: VAR_34 = VAR_9; break;
    case 11: VAR_34 = VAR_10; break;
    case 12: VAR_34 = VAR_11; break;
    case 13: VAR_34 = VAR_12; break;
    case 14: VAR_34 = VAR_13; break;
    case 15: VAR_34 = VAR_14; break;
    case 16: VAR_34 = VAR_23; break;
    case 49: VAR_34 = VAR_3; break;
    case 50: VAR_34 = VAR_4; break;
    case 51: VAR_34 = VAR_0; break;
    case 52: VAR_34 = VAR_26; break;
    case 53: VAR_34 = VAR_2; break;
    case 54: VAR_34 = VAR_5; break;
    case 55: VAR_34 = VAR_6; break;
    case 62: VAR_34 = VAR_29; break;
    case 63: VAR_34 = VAR_7; break;
    case 64: VAR_34 = VAR_8; break;
    case 65: VAR_34 = VAR_1; break;
    case 66: VAR_34 = VAR_28; break;






    default:
        FUNC_0("Don't know how to map register %d\n", VAR_32);
        return 0;
    }
    return VAR_34;
}

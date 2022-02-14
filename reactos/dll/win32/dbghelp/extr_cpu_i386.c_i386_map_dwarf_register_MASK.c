
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
 int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (char*,unsigned int) ;

__attribute__((used)) static unsigned FUNC_1(unsigned VAR_26, BOOL VAR_27)
{
    unsigned VAR_28;

    switch (VAR_26)
    {
    case 0: VAR_28 = VAR_3; break;
    case 1: VAR_28 = VAR_6; break;
    case 2: VAR_28 = VAR_8; break;
    case 3: VAR_28 = VAR_5; break;
    case 4:
    case 5:







            VAR_28 = (VAR_26 == 4) ? VAR_13 : VAR_4;
        break;
    case 6: VAR_28 = VAR_12; break;
    case 7: VAR_28 = VAR_7; break;
    case 8: VAR_28 = VAR_10; break;
    case 9: VAR_28 = VAR_9; break;
    case 10: VAR_28 = VAR_0; break;
    case 11: VAR_28 = VAR_21; break;
    case 12: VAR_28 = VAR_2; break;
    case 13: VAR_28 = VAR_11; break;
    case 14: VAR_28 = VAR_18; break;
    case 15: VAR_28 = VAR_19; break;
    case 16: case 17: case 18: case 19:
    case 20: case 21: case 22: case 23:
        VAR_28 = VAR_22 + VAR_26 - 16; break;
    case 24: VAR_28 = VAR_1; break;
    case 25: VAR_28 = VAR_23; break;
    case 26: VAR_28 = VAR_24; break;
    case 27: VAR_28 = VAR_14; break;
    case 28: VAR_28 = VAR_17; break;
    case 29: VAR_28 = VAR_16; break;
    case 30: VAR_28 = VAR_15; break;



    case 32: case 33: case 34: case 35:
    case 36: case 37: case 38: case 39:
        VAR_28 = VAR_25 + VAR_26 - 32; break;
    case 40: VAR_28 = VAR_20; break;
    default:
        FUNC_0("Don't know how to map register %d\n", VAR_26);
        return 0;
    }
    return VAR_28;
}

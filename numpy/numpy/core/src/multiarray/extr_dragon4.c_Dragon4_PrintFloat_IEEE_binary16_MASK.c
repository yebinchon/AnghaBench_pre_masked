
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int npy_uint32 ;
typedef int npy_uint16 ;
typedef int npy_int32 ;
typedef int npy_half ;
typedef int npy_bool ;
struct TYPE_7__ {scalar_t__ sign; } ;
struct TYPE_6__ {char* repr; int * bigints; } ;
typedef TYPE_1__ Dragon4_Scratch ;
typedef TYPE_2__ Dragon4_Options ;
typedef int BigInt ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (char*,int,int *,int,char,int,int,TYPE_2__*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (char*,int,int,int,char) ;
 int FUNC_4 (int) ;

__attribute__((used)) static npy_uint32
FUNC_5(
        Dragon4_Scratch *VAR_1, npy_half *VAR_2, Dragon4_Options *VAR_3)
{
    char *VAR_4 = VAR_1->repr;
    npy_uint32 VAR_5 = sizeof(VAR_1->repr);
    BigInt *VAR_6 = VAR_1->bigints;

    npy_uint16 VAR_7 = *VAR_2;
    npy_uint32 VAR_8, VAR_9, VAR_10;

    npy_uint32 VAR_11;
    npy_int32 VAR_12;
    npy_uint32 VAR_13;
    npy_bool VAR_14;
    char VAR_15 = '\0';

    if (VAR_5 == 0) {
        return 0;
    }

    if (VAR_5 == 1) {
        VAR_4[0] = '\0';
        return 0;
    }


    VAR_9 = VAR_7 & FUNC_4(10);
    VAR_8 = (VAR_7 >> 10) & FUNC_4(5);
    VAR_10 = VAR_7 >> 15;


    if (VAR_10 != 0) {
        VAR_15 = '-';
    }
    else if (VAR_3->sign) {
        VAR_15 = '+';
    }


    if (VAR_8 == FUNC_4(5)) {
        return FUNC_3(VAR_4, VAR_5, VAR_9, 3, VAR_15);
    }



    if (VAR_8 != 0) {
        VAR_11 = (1UL << 10) | VAR_9;
        VAR_12 = VAR_8 - 15 - 10;
        VAR_13 = 10;
        VAR_14 = (VAR_8 != 1) && (VAR_9 == 0);
    }
    else {
        VAR_11 = VAR_9;
        VAR_12 = 1 - 15 - 10;
        VAR_13 = FUNC_2(VAR_11);
        VAR_14 = VAR_0;
    }

    FUNC_0(&VAR_6[0], VAR_11);
    return FUNC_1(VAR_4, VAR_5, VAR_6, VAR_12,
                            VAR_15, VAR_13, VAR_14, VAR_3);
}

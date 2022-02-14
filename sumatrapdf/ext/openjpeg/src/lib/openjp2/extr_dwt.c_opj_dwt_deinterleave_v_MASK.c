
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OPJ_SIZE_T ;
typedef int OPJ_INT32 ;



__attribute__((used)) static void FUNC_0(OPJ_INT32 *VAR_0, OPJ_INT32 *VAR_1, OPJ_INT32 VAR_2,
                                   OPJ_INT32 VAR_3, OPJ_INT32 VAR_4, OPJ_INT32 VAR_5)
{
    OPJ_INT32 VAR_6 = VAR_3;
    OPJ_INT32 * VAR_7 = VAR_1;
    OPJ_INT32 * VAR_8 = VAR_0 + VAR_5;

    while (VAR_6--) {
        *VAR_7 = *VAR_8;
        VAR_7 += VAR_4;
        VAR_8 += 2;
    }

    VAR_7 = VAR_1 + (OPJ_SIZE_T)VAR_3 * (OPJ_SIZE_T)VAR_4;
    VAR_8 = VAR_0 + 1 - VAR_5;

    VAR_6 = VAR_2;
    while (VAR_6--) {
        *VAR_7 = *VAR_8;
        VAR_7 += VAR_4;
        VAR_8 += 2;
    }
}

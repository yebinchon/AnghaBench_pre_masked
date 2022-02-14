
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t OPJ_SIZE_T ;
typedef int OPJ_INT32 ;



__attribute__((used)) static void FUNC_0(const OPJ_INT32* VAR_0, OPJ_INT32* const* VAR_1,
                             OPJ_SIZE_T VAR_2)
{
    OPJ_SIZE_T VAR_3;
    OPJ_INT32* VAR_4 = VAR_1[0];
    OPJ_INT32* VAR_5 = VAR_1[1];
    OPJ_INT32* VAR_6 = VAR_1[2];
    OPJ_INT32* VAR_7 = VAR_1[3];

    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        VAR_4[VAR_3] = VAR_0[4 * VAR_3 + 0];
        VAR_5[VAR_3] = VAR_0[4 * VAR_3 + 1];
        VAR_6[VAR_3] = VAR_0[4 * VAR_3 + 2];
        VAR_7[VAR_3] = VAR_0[4 * VAR_3 + 3];
    }
}

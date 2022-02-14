
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t const OPJ_SIZE_T ;
typedef int OPJ_INT32 ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(OPJ_INT32* VAR_0,
                             const OPJ_INT32 VAR_1,
                             const OPJ_INT32 VAR_2,
                             OPJ_INT32* VAR_3,
                             const OPJ_SIZE_T VAR_4)
{
    OPJ_INT32 VAR_5, VAR_6;
    OPJ_INT32 VAR_7, VAR_8, VAR_9, VAR_10;
    const OPJ_INT32* VAR_11 = &VAR_3[(OPJ_SIZE_T)VAR_1 * VAR_4];
    const OPJ_INT32* VAR_12 = &VAR_3[0];

    FUNC_0(VAR_2 > 2);




    VAR_7 = VAR_11[VAR_4];
    VAR_9 = VAR_12[0] - ((VAR_11[0] + VAR_7 + 2) >> 2);
    VAR_0[0] = VAR_11[0] + VAR_9;
    for (VAR_5 = 1, VAR_6 = 1; VAR_5 < (VAR_2 - 2 - !(VAR_2 & 1)); VAR_5 += 2, VAR_6++) {

        VAR_8 = VAR_11[(OPJ_SIZE_T)(VAR_6 + 1) * VAR_4];

        VAR_10 = VAR_12[(OPJ_SIZE_T)VAR_6 * VAR_4] - ((VAR_7 + VAR_8 + 2) >> 2);
        VAR_0[VAR_5 ] = VAR_9;
        VAR_0[VAR_5 + 1] = VAR_7 + ((VAR_10 + VAR_9) >> 1);

        VAR_9 = VAR_10;
        VAR_7 = VAR_8;
    }
    VAR_0[VAR_5] = VAR_9;
    if (!(VAR_2 & 1)) {
        VAR_10 = VAR_12[(OPJ_SIZE_T)(VAR_2 / 2 - 1) * VAR_4] - ((VAR_7 + 1) >> 1);
        VAR_0[VAR_2 - 2] = VAR_7 + ((VAR_10 + VAR_9) >> 1);
        VAR_0[VAR_2 - 1] = VAR_10;
    } else {
        VAR_0[VAR_2 - 1] = VAR_7 + VAR_9;
    }

    for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) {
        VAR_3[(OPJ_SIZE_T)VAR_5 * VAR_4] = VAR_0[VAR_5];
    }
}

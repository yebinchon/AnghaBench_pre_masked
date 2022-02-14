
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
    OPJ_INT32 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

    FUNC_0(VAR_2 > 1);




    VAR_9 = VAR_3[0];
    VAR_8 = VAR_3[(OPJ_SIZE_T)VAR_1 * VAR_4];
    VAR_11 = VAR_9 - ((VAR_8 + 1) >> 1);

    for (VAR_5 = 0, VAR_6 = 0; VAR_5 < (VAR_2 - 3); VAR_5 += 2, VAR_6++) {
        VAR_7 = VAR_8;
        VAR_10 = VAR_11;

        VAR_9 = VAR_3[(OPJ_SIZE_T)(VAR_6 + 1) * VAR_4];
        VAR_8 = VAR_3[(OPJ_SIZE_T)(VAR_1 + VAR_6 + 1) * VAR_4];

        VAR_11 = VAR_9 - ((VAR_7 + VAR_8 + 2) >> 2);

        VAR_0[VAR_5 ] = VAR_10;
        VAR_0[VAR_5 + 1] = VAR_7 + ((VAR_10 + VAR_11) >> 1);
    }

    VAR_0[VAR_5] = VAR_11;

    if (VAR_2 & 1) {
        VAR_0[VAR_2 - 1] =
            VAR_3[(OPJ_SIZE_T)((VAR_2 - 1) / 2) * VAR_4] -
            ((VAR_8 + 1) >> 1);
        VAR_0[VAR_2 - 2] = VAR_8 + ((VAR_11 + VAR_0[VAR_2 - 1]) >> 1);
    } else {
        VAR_0[VAR_2 - 1] = VAR_8 + VAR_11;
    }

    for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) {
        VAR_3[(OPJ_SIZE_T)VAR_5 * VAR_4] = VAR_0[VAR_5];
    }
}

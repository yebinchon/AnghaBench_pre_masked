
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONG_DOUBLE ;


 int FUNC_0 (int*,int*,int const) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(
        const LONG_DOUBLE *VAR_0,
        int VAR_1,

        LONG_DOUBLE VAR_2,
        LONG_DOUBLE VAR_3,
        LONG_DOUBLE VAR_4,

        const int *VAR_5,
        const int *VAR_6,
        const LONG_DOUBLE *VAR_7,
        const LONG_DOUBLE *VAR_8,
        LONG_DOUBLE *VAR_9,


        LONG_DOUBLE *VAR_10,
        LONG_DOUBLE *VAR_11,
        LONG_DOUBLE *VAR_12,
        LONG_DOUBLE *VAR_13
)
{
    if(FUNC_1(VAR_1 < 4))
        return 0;

    int VAR_14 = 2;

    LONG_DOUBLE VAR_15 = 0, VAR_16 = 0, VAR_17 = 0;
    int VAR_18, VAR_19, VAR_20;


    VAR_11[0] = *VAR_7;
    if(VAR_3 > 0) VAR_12[0] = *VAR_8;
    if(VAR_4 > 0) FUNC_0(VAR_13, VAR_9, *VAR_6 * sizeof(LONG_DOUBLE));

    for(VAR_18 = VAR_14 - 1; VAR_18 < VAR_1; VAR_18++) {

        VAR_19 = VAR_18 - VAR_14 + 2;
        VAR_20 = VAR_19 + *VAR_6 - 1;


        VAR_16 = VAR_11[VAR_19 - 1] + (VAR_3 > 0 ? VAR_12[VAR_19 - 1] : 0);
        VAR_17 = VAR_4 > 0 ? VAR_13[VAR_20 - *VAR_6] : (*VAR_5 != 1);
        if (*VAR_5 == 1)
            VAR_16 += VAR_17;
        else
            VAR_16 *= VAR_17;


        VAR_15 = VAR_0[VAR_18] - VAR_16;
        *VAR_10 += VAR_15 * VAR_15;


        if (*VAR_5 == 1)
            VAR_11[VAR_19] = VAR_2 * (VAR_0[VAR_18] - VAR_17)
                        + (1 - VAR_2) * (VAR_11[VAR_19 - 1] + VAR_12[VAR_19 - 1]);
        else
            VAR_11[VAR_19] = VAR_2 * (VAR_0[VAR_18] / VAR_17)
                        + (1 - VAR_2) * (VAR_11[VAR_19 - 1] + VAR_12[VAR_19 - 1]);


        if (VAR_3 > 0)
            VAR_12[VAR_19] = VAR_3 * (VAR_11[VAR_19] - VAR_11[VAR_19 - 1])
                        + (1 - VAR_3) * VAR_12[VAR_19 - 1];


        if (VAR_4 > 0) {
            if (*VAR_5 == 1)
                VAR_13[VAR_20] = VAR_4 * (VAR_0[VAR_18] - VAR_11[VAR_19])
                             + (1 - VAR_4) * VAR_17;
            else
                VAR_13[VAR_20] = VAR_4 * (VAR_0[VAR_18] / VAR_11[VAR_19])
                             + (1 - VAR_4) * VAR_17;
        }
    }

    return 1;
}

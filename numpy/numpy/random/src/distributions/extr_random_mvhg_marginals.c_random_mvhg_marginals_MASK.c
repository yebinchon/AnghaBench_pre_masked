
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int bitgen_t ;


 int FUNC_0 (int *,int,int,int) ;

void FUNC_1(bitgen_t *VAR_0,
                           int64_t VAR_1,
                           size_t VAR_2, int64_t *VAR_3,
                           int64_t VAR_4,
                           size_t VAR_5, int64_t *VAR_6)
{
    bool VAR_7;

    if ((VAR_1 == 0) || (VAR_4 == 0) || (VAR_5 == 0)) {

        return;
    }

    VAR_7 = VAR_4 > (VAR_1 / 2);
    if (VAR_7) {
        VAR_4 = VAR_1 - VAR_4;
    }

    for (size_t VAR_8 = 0; VAR_8 < VAR_5 * VAR_2; VAR_8 += VAR_2) {
        int64_t VAR_9 = VAR_4;
        int64_t VAR_10 = VAR_1;
        for (size_t VAR_11 = 0; (VAR_9 > 0) && (VAR_11 + 1 < VAR_2); ++VAR_11) {
            int64_t VAR_12;
            VAR_10 -= VAR_3[VAR_11];
            VAR_12 = FUNC_0(VAR_0,
                                      VAR_3[VAR_11], VAR_10, VAR_9);
            VAR_6[VAR_8 + VAR_11] = VAR_12;
            VAR_9 -= VAR_12;
        }

        if (VAR_9 > 0) {
            VAR_6[VAR_8 + VAR_2 - 1] = VAR_9;
        }

        if (VAR_7) {
            for (size_t VAR_13 = 0; VAR_13 < VAR_2; ++VAR_13) {
                VAR_6[VAR_8 + VAR_13] = VAR_3[VAR_13] - VAR_6[VAR_8 + VAR_13];
            }
        }
    }
}

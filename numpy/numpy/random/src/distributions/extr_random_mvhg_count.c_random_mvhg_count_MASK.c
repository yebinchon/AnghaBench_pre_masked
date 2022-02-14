
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int bitgen_t ;


 int FUNC_0 (size_t*) ;
 size_t* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,size_t) ;

int FUNC_3(bitgen_t *VAR_0,
                      int64_t VAR_1,
                      size_t VAR_2, int64_t *VAR_3,
                      int64_t VAR_4,
                      size_t VAR_5, int64_t *VAR_6)
{
    size_t *VAR_7;
    bool VAR_8;

    if ((VAR_1 == 0) || (VAR_4 == 0) || (VAR_5 == 0)) {

        return 0;
    }

    VAR_7 = FUNC_1(VAR_1 * (sizeof *VAR_7));
    if (VAR_7 == ((void*)0)) {
        return -1;
    }





    for (size_t VAR_9 = 0, VAR_10 = 0; VAR_9 < VAR_2; ++VAR_9) {
        for (int64_t VAR_11 = 0; VAR_11 < VAR_3[VAR_9]; ++VAR_11) {
            VAR_7[VAR_10] = VAR_9;
            ++VAR_10;
        }
    }

    VAR_8 = VAR_4 > (VAR_1 / 2);
    if (VAR_8) {
        VAR_4 = VAR_1 - VAR_4;
    }

    for (size_t VAR_12 = 0; VAR_12 < VAR_5 * VAR_2; VAR_12 += VAR_2) {






        for (size_t VAR_13 = 0; VAR_13 < (size_t) VAR_4; ++VAR_13) {
            size_t VAR_14, VAR_15;


            VAR_15 = VAR_13 + (size_t) FUNC_2(VAR_0,
                                             (size_t) VAR_1 - VAR_13 - 1);
            VAR_14 = VAR_7[VAR_15];
            VAR_7[VAR_15] = VAR_7[VAR_13];
            VAR_7[VAR_13] = VAR_14;
        }





        for (size_t VAR_16 = 0; VAR_16 < (size_t) VAR_4; ++VAR_16) {
            VAR_6[VAR_12 + VAR_7[VAR_16]] += 1;
        }

        if (VAR_8) {
            for (size_t VAR_17 = 0; VAR_17 < VAR_2; ++VAR_17) {
                VAR_6[VAR_12 + VAR_17] = VAR_3[VAR_17] - VAR_6[VAR_12 + VAR_17];
            }
        }
    }

    FUNC_0(VAR_7);

    return 0;
}

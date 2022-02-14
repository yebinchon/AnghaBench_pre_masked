
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_int64 ;
typedef scalar_t__ npy_datetime ;
typedef scalar_t__ npy_bool ;
typedef int NPY_BUSDAY_ROLL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__*,int*,int ,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__* FUNC_1 (scalar_t__,scalar_t__*,scalar_t__*) ;
 scalar_t__* FUNC_2 (scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (scalar_t__,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_4(npy_datetime VAR_1, npy_int64 VAR_2,
                    npy_datetime *VAR_3,
                    NPY_BUSDAY_ROLL VAR_4,
                    npy_bool *VAR_5, int VAR_6,
                    npy_datetime *VAR_7, npy_datetime *VAR_8)
{
    int VAR_9 = 0;
    npy_datetime *VAR_10;


    if (FUNC_0(VAR_1, &VAR_1, &VAR_9,
                                VAR_4,
                                VAR_5,
                                VAR_7, VAR_8) < 0) {
        return -1;
    }


    if (VAR_1 == VAR_0) {
        *VAR_3 = VAR_0;
        return 0;
    }


    if (VAR_2 > 0) {

        VAR_7 = FUNC_2(VAR_1,
                                            VAR_7, VAR_8);


        VAR_1 += (VAR_2 / VAR_6) * 7;
        VAR_2 = VAR_2 % VAR_6;


        VAR_10 = FUNC_1(VAR_1,
                                            VAR_7, VAR_8);
        VAR_2 += VAR_10 - VAR_7;
        VAR_7 = VAR_10;


        while (VAR_2 > 0) {
            ++VAR_1;
            if (++VAR_9 == 7) {
                VAR_9 = 0;
            }
            if (VAR_5[VAR_9] && !FUNC_3(VAR_1,
                                            VAR_7, VAR_8)) {
                VAR_2--;
            }
        }
    }
    else if (VAR_2 < 0) {

        VAR_8 = FUNC_1(VAR_1,
                                            VAR_7, VAR_8);


        VAR_1 += (VAR_2 / VAR_6) * 7;
        VAR_2 = VAR_2 % VAR_6;


        VAR_10 = FUNC_2(VAR_1,
                                            VAR_7, VAR_8);
        VAR_2 -= VAR_8 - VAR_10;
        VAR_8 = VAR_10;


        while (VAR_2 < 0) {
            --VAR_1;
            if (--VAR_9 == -1) {
                VAR_9 = 6;
            }
            if (VAR_5[VAR_9] && !FUNC_3(VAR_1,
                                            VAR_7, VAR_8)) {
                VAR_2++;
            }
        }
    }

    *VAR_3 = VAR_1;
    return 0;
}

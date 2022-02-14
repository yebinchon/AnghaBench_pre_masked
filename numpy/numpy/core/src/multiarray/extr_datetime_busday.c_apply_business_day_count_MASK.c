
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_int64 ;
typedef scalar_t__ npy_datetime ;
typedef scalar_t__ npy_bool ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 scalar_t__* FUNC_1 (scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int
FUNC_3(npy_datetime VAR_2, npy_datetime VAR_3,
                    npy_int64 *VAR_4,
                    const npy_bool *VAR_5, int VAR_6,
                    npy_datetime *VAR_7, npy_datetime *VAR_8)
{
    npy_int64 VAR_9, VAR_10;
    int VAR_11 = 0;
    int VAR_12 = 0;


    if (VAR_2 == VAR_0 || VAR_3 == VAR_0) {
        FUNC_0(VAR_1,
                "Cannot compute a business day count with a NaT (not-a-time) "
                "date");
        return -1;
    }


    if (VAR_2 == VAR_3) {
        *VAR_4 = 0;
        return 0;
    }
    else if (VAR_2 > VAR_3) {
        npy_datetime VAR_13 = VAR_2;
        VAR_2 = VAR_3;
        VAR_3 = VAR_13;
        VAR_12 = 1;
    }


    VAR_7 = FUNC_1(VAR_2,
                                        VAR_7, VAR_8);

    VAR_8 = FUNC_1(VAR_3,
                                        VAR_7, VAR_8);


    VAR_9 = -(VAR_8 - VAR_7);


    VAR_10 = (VAR_3 - VAR_2) / 7;
    VAR_9 += VAR_10 * VAR_6;
    VAR_2 += VAR_10 * 7;

    if (VAR_2 < VAR_3) {

        VAR_11 = FUNC_2(VAR_2);


        while (VAR_2 < VAR_3) {
            if (VAR_5[VAR_11]) {
                VAR_9++;
            }
            ++VAR_2;
            if (++VAR_11 == 7) {
                VAR_11 = 0;
            }
        }
    }

    if (VAR_12) {
        VAR_9 = -VAR_9;
    }

    *VAR_4 = VAR_9;
    return 0;
}

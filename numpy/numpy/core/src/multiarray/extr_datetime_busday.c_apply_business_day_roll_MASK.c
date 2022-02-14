
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ npy_datetime ;
typedef scalar_t__ npy_bool ;
typedef int NPY_BUSDAY_ROLL ;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_4(npy_datetime VAR_2, npy_datetime *VAR_3,
                    int *VAR_4,
                    NPY_BUSDAY_ROLL VAR_5,
                    const npy_bool *VAR_6,
                    npy_datetime *VAR_7, npy_datetime *VAR_8)
{
    int VAR_9;


    if (VAR_2 == VAR_0) {
        *VAR_3 = VAR_0;
        if (VAR_5 == 128) {
            FUNC_0(VAR_1,
                    "NaT input in busday_offset");
            return -1;
        }
        else {
            return 0;
        }
    }


    VAR_9 = FUNC_2(VAR_2);


    if (VAR_6[VAR_9] == 0 ||
                        FUNC_3(VAR_2, VAR_7, VAR_8)) {
        npy_datetime VAR_10 = VAR_2;
        int VAR_11 = VAR_9;

        switch (VAR_5) {
            case 133:
            case 132: {
                do {
                    ++VAR_2;
                    if (++VAR_9 == 7) {
                        VAR_9 = 0;
                    }
                } while (VAR_6[VAR_9] == 0 ||
                            FUNC_3(VAR_2, VAR_7, VAR_8));

                if (VAR_5 == 132) {

                    if (FUNC_1(VAR_10) !=
                                FUNC_1(VAR_2)) {
                        VAR_2 = VAR_10;
                        VAR_9 = VAR_11;

                        do {
                            --VAR_2;
                            if (--VAR_9 == -1) {
                                VAR_9 = 6;
                            }
                        } while (VAR_6[VAR_9] == 0 ||
                            FUNC_3(VAR_2, VAR_7, VAR_8));
                    }
                }
                break;
            }
            case 129:
            case 131: {
                do {
                    --VAR_2;
                    if (--VAR_9 == -1) {
                        VAR_9 = 6;
                    }
                } while (VAR_6[VAR_9] == 0 ||
                            FUNC_3(VAR_2, VAR_7, VAR_8));

                if (VAR_5 == 131) {

                    if (FUNC_1(VAR_10) !=
                                FUNC_1(VAR_2)) {
                        VAR_2 = VAR_10;
                        VAR_9 = VAR_11;

                        do {
                            ++VAR_2;
                            if (++VAR_9 == 7) {
                                VAR_9 = 0;
                            }
                        } while (VAR_6[VAR_9] == 0 ||
                            FUNC_3(VAR_2, VAR_7, VAR_8));
                    }
                }
                break;
            }
            case 130: {
                VAR_2 = VAR_0;
                break;
            }
            case 128: {
                *VAR_3 = VAR_0;
                FUNC_0(VAR_1,
                        "Non-business day date in busday_offset");
                return -1;
            }
        }
    }

    *VAR_3 = VAR_2;
    *VAR_4 = VAR_9;

    return 0;
}

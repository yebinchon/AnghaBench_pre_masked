
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * VAR_2 ;

__attribute__((used)) static int
FUNC_8(PyObject *VAR_3, int VAR_4,
                        int **VAR_5, int *VAR_6)
{
    PyObject *VAR_7;
    int VAR_8;

    if ((!FUNC_6(VAR_3) && !FUNC_3(VAR_3)) ||
                                FUNC_5(VAR_3) != VAR_4) {
        FUNC_2(VAR_1,
                "op_axes must be a tuple/list matching the number of ops");
        return 0;
    }

    *VAR_6 = -1;


    for (VAR_8 = 0; VAR_8 < VAR_4; ++VAR_8) {
        int VAR_9;
        VAR_7 = FUNC_4(VAR_3, VAR_8);
        if (VAR_7 == ((void*)0)) {
            return 0;
        }
        if (VAR_7 == VAR_2) {
            VAR_5[VAR_8] = ((void*)0);
        } else {
            if (!FUNC_6(VAR_7) && !FUNC_3(VAR_7)) {
                FUNC_2(VAR_1,
                        "Each entry of op_axes must be None "
                        "or a tuple/list");
                FUNC_7(VAR_7);
                return 0;
            }
            if (*VAR_6 == -1) {
                *VAR_6 = FUNC_5(VAR_7);
                if (*VAR_6 > VAR_0) {
                    FUNC_2(VAR_1,
                            "Too many dimensions in op_axes");
                    FUNC_7(VAR_7);
                    return 0;
                }
            }
            if (FUNC_5(VAR_7) != *VAR_6) {
                FUNC_2(VAR_1,
                        "Each entry of op_axes must have the same size");
                FUNC_7(VAR_7);
                return 0;
            }
            for (VAR_9 = 0; VAR_9 < *VAR_6; ++VAR_9) {
                PyObject *VAR_10 = FUNC_4(VAR_7, VAR_9);
                if (VAR_10 == ((void*)0)) {
                    FUNC_7(VAR_7);
                    return 0;
                }

                if (VAR_10 == VAR_2) {
                    VAR_5[VAR_8][VAR_9] = -1;
                }
                else {
                    VAR_5[VAR_8][VAR_9] = FUNC_0(VAR_10);
                    if (VAR_5[VAR_8][VAR_9]==-1 &&
                                                FUNC_1()) {
                        FUNC_7(VAR_7);
                        FUNC_7(VAR_10);
                        return 0;
                    }
                }
                FUNC_7(VAR_10);
            }
        }
        FUNC_7(VAR_7);
    }

    if (*VAR_6 == -1) {
        FUNC_2(VAR_1,
                "If op_axes is provided, at least one list of axes "
                "must be contained within it");
        return 0;
    }

    return 1;
}

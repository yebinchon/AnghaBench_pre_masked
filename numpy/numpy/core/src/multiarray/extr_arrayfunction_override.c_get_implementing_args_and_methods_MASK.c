
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t Py_ssize_t ;
typedef int PyObject ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 size_t FUNC_2 (int *) ;
 int ** FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int **,int,int,int *) ;

__attribute__((used)) static int
FUNC_9(PyObject *VAR_2,
                                  PyObject **VAR_3,
                                  PyObject **VAR_4)
{
    int VAR_5 = 0;
    Py_ssize_t VAR_6;
    int VAR_7;

    PyObject **VAR_8 = FUNC_3(VAR_2);
    Py_ssize_t VAR_9 = FUNC_2(VAR_2);

    for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++) {
        int VAR_10 = 1;
        PyObject *VAR_11 = VAR_8[VAR_6];


        for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
            if (FUNC_6(VAR_11) == FUNC_6(VAR_3[VAR_7])) {
                VAR_10 = 0;
                break;
            }
        }
        if (VAR_10) {
            PyObject *VAR_12 = FUNC_7(VAR_11);

            if (VAR_12 != ((void*)0)) {
                int VAR_13;

                if (VAR_5 >= VAR_0) {
                    FUNC_0(
                        VAR_1,
                        "maximum number (%d) of distinct argument types " "implementing __array_function__ exceeded",

                        VAR_0);
                    FUNC_4(VAR_12);
                    goto fail;
                }


                VAR_13 = VAR_5;
                for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
                    PyObject *VAR_14;
                    VAR_14 = (PyObject *)FUNC_6(VAR_3[VAR_7]);
                    if (FUNC_1(VAR_11, VAR_14)) {
                        VAR_13 = VAR_7;
                        break;
                    }
                }
                FUNC_5(VAR_11);
                FUNC_8(VAR_3, VAR_5,
                                      VAR_13, VAR_11);
                FUNC_8(VAR_4, VAR_5,
                                      VAR_13, VAR_12);
                ++VAR_5;
            }
        }
    }
    return VAR_5;

fail:
    for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
        FUNC_4(VAR_3[VAR_7]);
        FUNC_4(VAR_4[VAR_7]);
    }
    return -1;
}

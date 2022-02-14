
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_intp ;
typedef int PyObject ;
typedef int PyArrayObject ;


 int VAR_0 ;
 int * FUNC_0 (int *,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int*,int,int,int *) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static PyObject *
FUNC_11(PyArrayObject *VAR_2, PyObject *VAR_3)
{
    npy_intp VAR_4[VAR_0];
    int VAR_5 = FUNC_8(VAR_3);
    int VAR_6, VAR_7 = FUNC_1(VAR_2);


    if (VAR_5 == 1 && FUNC_6(FUNC_7(VAR_3, 0))) {
        VAR_3 = FUNC_7(VAR_3, 0);
        VAR_5 = FUNC_8(VAR_3);
    }

    if (VAR_5 == 0) {
        if (FUNC_4(VAR_2) == 1) {
            for (VAR_6 = 0; VAR_6 < VAR_7; ++VAR_6) {
                VAR_4[VAR_6] = 0;
            }
        }
        else {
            FUNC_5(VAR_1,
                    "can only convert an array of size 1 to a Python scalar");
            return ((void*)0);
        }
    }

    else if (VAR_5 == 1 && VAR_7 != 1) {
        npy_intp *VAR_8 = FUNC_3(VAR_2);
        npy_intp VAR_9, VAR_10 = FUNC_4(VAR_2);

        VAR_9 = FUNC_2(FUNC_7(VAR_3, 0));
        if (FUNC_10(VAR_9)) {
            return ((void*)0);
        }

        if (FUNC_9(&VAR_9, VAR_10, -1, ((void*)0)) < 0) {
            return ((void*)0);
        }


        for (VAR_6 = VAR_7-1; VAR_6 >= 0; --VAR_6) {
            VAR_4[VAR_6] = VAR_9 % VAR_8[VAR_6];
            VAR_9 /= VAR_8[VAR_6];
        }
    }

    else if (VAR_5 == VAR_7) {
        npy_intp VAR_11;

        for (VAR_6 = 0; VAR_6 < VAR_7; ++VAR_6) {
            VAR_11 = FUNC_2(FUNC_7(VAR_3, VAR_6));
            if (FUNC_10(VAR_11)) {
                return ((void*)0);
            }
            VAR_4[VAR_6] = VAR_11;
        }
    }
    else {
        FUNC_5(VAR_1,
                "incorrect number of indices for array");
        return ((void*)0);
    }

    return FUNC_0(VAR_2, VAR_4);
}

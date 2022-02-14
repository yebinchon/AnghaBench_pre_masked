
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_intp ;
typedef int PyObject ;
typedef int PyArrayObject ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,int*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_7 (int *) ;
 int * FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_10 (int*,int,int,int *) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static PyObject *
FUNC_12(PyArrayObject *VAR_3, PyObject *VAR_4)
{
    npy_intp VAR_5[VAR_0];
    int VAR_6 = FUNC_9(VAR_4) - 1;
    int VAR_7, VAR_8 = FUNC_2(VAR_3);
    PyObject *VAR_9;

    if (VAR_6 < 0) {
        FUNC_6(VAR_1,
                "itemset must have at least one argument");
        return ((void*)0);
    }
    if (FUNC_0(VAR_3, "assignment destination") < 0) {
        return ((void*)0);
    }

    VAR_9 = FUNC_8(VAR_4, VAR_6);


    if (VAR_6 == 1 && FUNC_7(FUNC_8(VAR_4, 0))) {
        VAR_4 = FUNC_8(VAR_4, 0);
        VAR_6 = FUNC_9(VAR_4);
    }

    if (VAR_6 == 0) {
        if (FUNC_5(VAR_3) == 1) {
            for (VAR_7 = 0; VAR_7 < VAR_8; ++VAR_7) {
                VAR_5[VAR_7] = 0;
            }
        }
        else {
            FUNC_6(VAR_1,
                    "can only convert an array of size 1 to a Python scalar");
        }
    }

    else if (VAR_6 == 1 && VAR_8 != 1) {
        npy_intp *VAR_10 = FUNC_4(VAR_3);
        npy_intp VAR_11, VAR_12 = FUNC_5(VAR_3);

        VAR_11 = FUNC_3(FUNC_8(VAR_4, 0));
        if (FUNC_11(VAR_11)) {
            return ((void*)0);
        }

        if (FUNC_10(&VAR_11, VAR_12, -1, ((void*)0)) < 0) {
            return ((void*)0);
        }


        for (VAR_7 = VAR_8-1; VAR_7 >= 0; --VAR_7) {
            VAR_5[VAR_7] = VAR_11 % VAR_10[VAR_7];
            VAR_11 /= VAR_10[VAR_7];
        }
    }

    else if (VAR_6 == VAR_8) {
        npy_intp VAR_13;

        for (VAR_7 = 0; VAR_7 < VAR_8; ++VAR_7) {
            VAR_13 = FUNC_3(FUNC_8(VAR_4, VAR_7));
            if (FUNC_11(VAR_13)) {
                return ((void*)0);
            }
            VAR_5[VAR_7] = VAR_13;
        }
    }
    else {
        FUNC_6(VAR_1,
                "incorrect number of indices for array");
        return ((void*)0);
    }

    if (FUNC_1(VAR_3, VAR_5, VAR_9) < 0) {
        return ((void*)0);
    }
    else {
        VAR_2;
    }
}

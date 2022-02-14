
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_intp ;
typedef scalar_t__ npy_bool ;
typedef int PyObject ;
typedef int PyArray_Descr ;
typedef int PyArrayObject_fields ;
typedef int PyArrayObject ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *,int,int*,int*,int ,int ,int *) ;
 scalar_t__ FUNC_7 (int *,int ,int *,int ) ;
 int* FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int *,int *) ;
 int VAR_2 ;
 int FUNC_11 (int ,char*,char const*) ;
 int VAR_3 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static PyArrayObject *
FUNC_14(int VAR_4, const npy_bool *VAR_5,
                      PyArrayObject *VAR_6, int VAR_7, const char *VAR_8,
                      int VAR_9)
{
    npy_intp VAR_10[VAR_1], VAR_11[VAR_1];
    npy_intp *VAR_12 = FUNC_8(VAR_6);
    npy_intp *VAR_13 = FUNC_3(VAR_6);
    int VAR_14, VAR_15, VAR_16 = FUNC_5(VAR_6);
    PyArray_Descr *VAR_17;
    PyArrayObject_fields *VAR_18;





    if (VAR_7) {
        if (FUNC_5(VAR_6) != VAR_4) {
            FUNC_11(VAR_3,
                    "output parameter for reduction operation %s "
                    "has the wrong number of dimensions (must match "
                    "the operand's when keepdims=True)", VAR_8);
            return ((void*)0);
        }

        for (VAR_14 = 0; VAR_14 < VAR_4; ++VAR_14) {
            if (VAR_5[VAR_14]) {
                if (VAR_13[VAR_14] != 1) {
                    FUNC_11(VAR_3,
                            "output parameter for reduction operation %s "
                            "has a reduction dimension not equal to one "
                            "(required when keepdims=True)", VAR_8);
                    return ((void*)0);
                }
            }
        }

        FUNC_13(VAR_6);
        return VAR_6;
    }


    VAR_15 = 0;
    for (VAR_14 = 0; VAR_14 < VAR_4; ++VAR_14) {
        if (VAR_5[VAR_14]) {
            VAR_10[VAR_14] = 0;
            VAR_11[VAR_14] = 1;
        }
        else {
            if (VAR_15 >= VAR_16) {
                FUNC_11(VAR_3,
                        "output parameter for reduction operation %s "
                        "does not have enough dimensions", VAR_8);
                return ((void*)0);
            }
            VAR_10[VAR_14] = VAR_12[VAR_15];
            VAR_11[VAR_14] = VAR_13[VAR_15];
            ++VAR_15;
        }
    }

    if (VAR_15 != VAR_16) {
        FUNC_11(VAR_3,
                "output parameter for reduction operation %s "
                "has too many dimensions", VAR_8);
        return ((void*)0);
    }


    VAR_17 = FUNC_2(VAR_6);
    FUNC_13(VAR_17);




    VAR_18 = (PyArrayObject_fields *)FUNC_6(
            &VAR_2, VAR_17,
            VAR_4, VAR_11, VAR_10, FUNC_1(VAR_6),
            FUNC_4(VAR_6), ((void*)0));
    if (VAR_18 == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_13(VAR_6);
    if (FUNC_9((PyArrayObject *)VAR_18, (PyObject *)VAR_6) < 0) {
        FUNC_12(VAR_18);
        return ((void*)0);
    }

    if (VAR_9) {
        PyArrayObject *VAR_19;

        VAR_19 = (PyArrayObject *)FUNC_7(
            (PyArrayObject *)VAR_18, VAR_0, ((void*)0), 0);
        if (VAR_19 == ((void*)0)) {
            FUNC_12(VAR_18);
            return ((void*)0);
        }

        if (FUNC_0(VAR_19, (PyArrayObject *)VAR_18) != 0) {
            FUNC_12(VAR_18);
            FUNC_12(VAR_19);
            return ((void*)0);
        }

        if (FUNC_10(VAR_19, (PyArrayObject *)VAR_18) < 0) {
            FUNC_12(VAR_18);
            FUNC_12(VAR_19);
            return ((void*)0);
        }

        return VAR_19;
    }
    else {
        return (PyArrayObject *)VAR_18;
    }
}

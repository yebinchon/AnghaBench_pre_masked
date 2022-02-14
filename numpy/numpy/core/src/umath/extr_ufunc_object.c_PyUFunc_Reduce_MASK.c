
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_bool ;
typedef int PyUFuncObject ;
typedef int PyObject ;
typedef int PyArray_Descr ;
typedef int PyArrayObject ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 int VAR_2 ;
 int * FUNC_5 (int *,int *,int *,int *,int *,int ,int*,int,int,int ,int *,int ,int *,int,char const*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * VAR_3 ;
 scalar_t__ FUNC_8 (int *,char*,int*,int*) ;
 int * FUNC_9 (int *,int*) ;
 int FUNC_10 (int*,int ,int) ;
 int FUNC_11 (char*,char*,int **) ;
 int VAR_4 ;
 scalar_t__ FUNC_12 (int *,int *,int *,int **) ;
 char* FUNC_13 (int *) ;

__attribute__((used)) static PyArrayObject *
FUNC_14(PyUFuncObject *VAR_5, PyArrayObject *VAR_6, PyArrayObject *VAR_7,
        int VAR_8, int *VAR_9, PyArray_Descr *VAR_10, int VAR_11,
        PyObject *VAR_12, PyArrayObject *VAR_13)
{
    int VAR_14, VAR_15;
    npy_bool VAR_16;
    npy_bool VAR_17[VAR_0];
    PyArray_Descr *VAR_18;
    PyArrayObject *VAR_19;
    PyObject *VAR_20;
    const char *VAR_21 = FUNC_13(VAR_5);

    int VAR_22 = 0, VAR_23 = 0;
    static PyObject *VAR_24 = ((void*)0);

    FUNC_0("\nEvaluating ufunc %s.reduce\n", VAR_21);

    FUNC_11("numpy", "_NoValue", &VAR_24);
    if (VAR_24 == ((void*)0)) return ((void*)0);

    VAR_15 = FUNC_2(VAR_6);


    FUNC_10(VAR_17, 0, VAR_15);
    for (VAR_14 = 0; VAR_14 < VAR_8; ++VAR_14) {
        int VAR_25 = VAR_9[VAR_14];
        if (VAR_17[VAR_25]) {
            FUNC_4(VAR_2,
                    "duplicate value in 'axis'");
            return ((void*)0);
        }
        VAR_17[VAR_25] = 1;
    }

    if (FUNC_8(((void*)0), "reduce", &VAR_22, &VAR_23) < 0) {
        return ((void*)0);
    }


    VAR_20 = FUNC_9(VAR_5, &VAR_16);
    if (VAR_20 == ((void*)0)) {
        return ((void*)0);
    }


    if (VAR_12 == ((void*)0) || VAR_12 == VAR_24) {
        VAR_12 = VAR_20;





        if (VAR_12 != VAR_3 && FUNC_1(VAR_6) && FUNC_3(VAR_6) != 0) {
            FUNC_6(VAR_12);
            VAR_12 = VAR_3;
            FUNC_7(VAR_12);
        }
    } else {
        FUNC_6(VAR_20);
        FUNC_7(VAR_12);
    }


    if (FUNC_12(VAR_5, VAR_6, VAR_10, &VAR_18) < 0) {
        FUNC_6(VAR_12);
        return ((void*)0);
    }

    VAR_19 = FUNC_5(VAR_6, VAR_7, VAR_13, VAR_18, VAR_18,
                                   VAR_1,
                                   VAR_17, VAR_16,
                                   VAR_11, 0,
                                   VAR_12,
                                   VAR_4,
                                   VAR_5, VAR_22, VAR_21, VAR_23);

    FUNC_6(VAR_18);
    FUNC_6(VAR_12);
    return VAR_19;
}

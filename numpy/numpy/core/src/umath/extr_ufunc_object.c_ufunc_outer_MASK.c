
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int npy_longlong ;
struct TYPE_5__ {int nin; scalar_t__ core_enabled; } ;
typedef TYPE_1__ PyUFuncObject ;
typedef int PyObject ;
typedef int PyArrayObject ;


 int VAR_0 ;
 scalar_t__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (long) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int *,int *) ;
 int * FUNC_11 (int *,int) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int) ;
 int FUNC_14 (int *,int,int ) ;
 int FUNC_15 (TYPE_1__*,char*,int *,int *,int **) ;
 int * FUNC_16 (char*,int *,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (char*,char*,int **) ;
 int * FUNC_20 (TYPE_1__*,int *,int *) ;

__attribute__((used)) static PyObject *
FUNC_21(PyUFuncObject *VAR_3, PyObject *VAR_4, PyObject *VAR_5)
{
    int VAR_6;
    int VAR_7;
    PyObject *VAR_8 = ((void*)0);
    PyObject *VAR_9;
    PyArrayObject *VAR_10 = ((void*)0), *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
    PyObject *VAR_13, *VAR_14;
    PyObject *VAR_15, *VAR_16, *VAR_17;
    static PyObject *VAR_18;


    VAR_7 = FUNC_15(VAR_3, "outer", VAR_4, VAR_5, &VAR_8);
    if (VAR_7) {
        return ((void*)0);
    }
    else if (VAR_8) {
        return VAR_8;
    }

    if (VAR_3->core_enabled) {
        FUNC_5(VAR_1,
                     "method outer is not allowed in ufunc with non-trivial" " signature");

        return ((void*)0);
    }

    if (VAR_3->nin != 2) {
        FUNC_6(VAR_2,
                        "outer product only supported " "for binary functions");

        return ((void*)0);
    }

    if (FUNC_12(VAR_4) != 2) {
        FUNC_6(VAR_1, "exactly two arguments expected");
        return ((void*)0);
    }

    VAR_14 = FUNC_11(VAR_4, 0);
    if (VAR_14 == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_19(
        "numpy",
        "matrix",
        &VAR_18);

    if (FUNC_10(VAR_14, VAR_18)) {
        VAR_10 = (PyArrayObject *) FUNC_2(VAR_14, VAR_0, 0, 0);
    }
    else {
        VAR_10 = (PyArrayObject *) FUNC_1(VAR_14);
    }
    FUNC_17(VAR_14);
    if (VAR_10 == ((void*)0)) {
        return ((void*)0);
    }
    VAR_14 = FUNC_11(VAR_4, 1);
    if (VAR_14 == ((void*)0)) {
        return ((void*)0);
    }
    if (FUNC_10(VAR_14, VAR_18)) {
        VAR_11 = (PyArrayObject *) FUNC_2(VAR_14, VAR_0, 0, 0);
    }
    else {
        VAR_11 = (PyArrayObject *) FUNC_1(VAR_14);
    }
    FUNC_17(VAR_14);
    if (VAR_11 == ((void*)0)) {
        FUNC_17(VAR_10);
        return ((void*)0);
    }

    VAR_15 = FUNC_13(FUNC_3(VAR_10));
    if (VAR_15 == ((void*)0)) {
        goto fail;
    }
    for (VAR_6 = 0; VAR_6 < FUNC_3(VAR_10); VAR_6++) {
        FUNC_14(VAR_15, VAR_6,
                FUNC_8((npy_longlong)FUNC_0(VAR_10)[VAR_6]));
    }
    VAR_16 = FUNC_13(FUNC_3(VAR_11));
    for (VAR_6 = 0; VAR_6 < FUNC_3(VAR_11); VAR_6++) {
        FUNC_14(VAR_16, VAR_6, FUNC_7((long) 1));
    }
    if (VAR_16 == ((void*)0)) {
        FUNC_17(VAR_15);
        goto fail;
    }
    VAR_17 = FUNC_9(VAR_15, VAR_16);
    FUNC_17(VAR_15);
    FUNC_17(VAR_16);
    if (VAR_17 == ((void*)0)) {
        goto fail;
    }
    VAR_12 = (PyArrayObject *)FUNC_4(VAR_10, VAR_17);
    FUNC_17(VAR_17);
    if (VAR_12 == ((void*)0)) {
        goto fail;
    }
    VAR_13 = FUNC_16("(OO)", VAR_12, VAR_11);
    FUNC_17(VAR_10);
    FUNC_17(VAR_11);
    FUNC_17(VAR_12);
    VAR_9 = FUNC_20(VAR_3, VAR_13, VAR_5);
    FUNC_17(VAR_13);
    return VAR_9;

 fail:
    FUNC_18(VAR_10);
    FUNC_18(VAR_11);
    FUNC_18(VAR_12);
    return ((void*)0);
}

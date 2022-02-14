
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_intp ;
typedef int PyObject ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int *) ;
 double FUNC_2 (int *) ;
 double FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*) ;
 int VAR_0 ;
 double FUNC_6 (int *) ;
 int * FUNC_7 (int ) ;
 int * FUNC_8 (int *,int *) ;
 int * FUNC_9 (int *,int *) ;
 int * FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *,int ) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_14 (double) ;
 scalar_t__ FUNC_15 (int) ;
 scalar_t__ FUNC_16 (double) ;

__attribute__((used)) static npy_intp
FUNC_17(PyObject *VAR_3, PyObject *VAR_4, PyObject *VAR_5, PyObject **VAR_6, int VAR_7)
{
    npy_intp VAR_8, VAR_9;
    PyObject *VAR_10, *VAR_11;
    int VAR_12, VAR_13;
    double VAR_14;

    *VAR_6 = FUNC_9(VAR_4, VAR_3);
    if (!(*VAR_6)) {
        if (FUNC_12(VAR_4)) {
            FUNC_4();
            FUNC_5(VAR_0,
                            "arange: scalar arguments expected " "instead of a tuple.");

        }
        return -1;
    }

    VAR_10 = FUNC_7(0);
    if (!VAR_10) {
        FUNC_13(*VAR_6);
        *VAR_6 = ((void*)0);
        return -1;
    }

    VAR_12 = FUNC_11(*VAR_6, VAR_10, VAR_2);
    if (VAR_12 == -1) {
        FUNC_13(VAR_10);
        FUNC_13(*VAR_6);
        *VAR_6 = ((void*)0);
        return -1;
    }
    VAR_11 = FUNC_10(*VAR_6, VAR_5);
    FUNC_13(*VAR_6);
    *VAR_6 = ((void*)0);

    if (!VAR_11) {
        FUNC_13(VAR_10);
        return -1;
    }

    VAR_13 = FUNC_11(VAR_11, VAR_10, VAR_1);
    FUNC_13(VAR_10);
    if (VAR_13 == -1) {
        FUNC_13(VAR_11);
        return -1;
    }

    if (VAR_7 && FUNC_1(VAR_11)) {
        VAR_14 = FUNC_3(VAR_11);
        if (FUNC_15(VAR_14)) {
            FUNC_13(VAR_11);
            return -1;
        }
        VAR_8 = FUNC_14(VAR_14);
        if (FUNC_15(VAR_8)) {
            FUNC_13(VAR_11);
            return -1;
        }
        VAR_14 = FUNC_2(VAR_11);
        FUNC_13(VAR_11);
        if (FUNC_15(VAR_14)) {
            return -1;
        }
        VAR_9 = FUNC_14(VAR_14);
        if (FUNC_15(VAR_9)) {
            return -1;
        }
        VAR_8 = FUNC_0(VAR_8, VAR_9);
    }
    else {
        VAR_14 = FUNC_6(VAR_11);
        FUNC_13(VAR_11);
        if (FUNC_15(VAR_14)) {
            return -1;
        }


        if (VAR_13 && VAR_12) {
            if (FUNC_16(VAR_14)) {
                VAR_8 = 0;
            }
            else {
                VAR_8 = 1;
            }
        }
        else {
            VAR_8 = FUNC_14(VAR_14);
            if (FUNC_15(VAR_8)) {
                return -1;
            }
        }
    }

    if (VAR_8 > 0) {
        *VAR_6 = FUNC_8(VAR_3, VAR_5);
        if (!*VAR_6) {
            return -1;
        }
    }
    return VAR_8;
}

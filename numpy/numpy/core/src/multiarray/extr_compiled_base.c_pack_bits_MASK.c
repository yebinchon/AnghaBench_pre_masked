
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_intp ;
typedef int PyObject ;
typedef int PyArrayObject ;
typedef int PyArrayIterObject ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,int*,int ) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *,int*) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int ,int ,int,int*,int *,int *,int ,int *) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int ,char*) ;
 int VAR_4 ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ,int,int,int ,int ,int,int ,char) ;

__attribute__((used)) static PyObject *
FUNC_22(PyObject *VAR_5, int VAR_6, char VAR_7)
{
    PyArrayObject *VAR_8;
    PyArrayObject *VAR_9 = ((void*)0);
    PyArrayObject *VAR_10 = ((void*)0);
    npy_intp VAR_11[VAR_2];
    int VAR_12;
    PyArrayIterObject *VAR_13, *VAR_14;
    VAR_0;

    VAR_8 = (PyArrayObject *)FUNC_5(VAR_5);

    if (VAR_8 == ((void*)0)) {
        return ((void*)0);
    }
    if (!FUNC_6(VAR_8) && !FUNC_8(VAR_8)) {
        FUNC_17(VAR_4,
                "Expected an input array of integer or boolean data type");
        FUNC_18(VAR_8);
        goto fail;
    }

    VAR_9 = (PyArrayObject *)FUNC_1(VAR_8, &VAR_6, 0);
    FUNC_18(VAR_8);
    if (VAR_9 == ((void*)0)) {
        return ((void*)0);
    }

    if (FUNC_14(VAR_9) == 0) {
        char *VAR_15, *VAR_16;

        VAR_10 = (PyArrayObject *)FUNC_15(
                FUNC_19(VAR_9), FUNC_4(VAR_3),
                0, ((void*)0), ((void*)0), ((void*)0),
                0, ((void*)0));
        if (VAR_10 == ((void*)0)) {
            goto fail;
        }
        VAR_15 = FUNC_2(VAR_10);
        VAR_16 = FUNC_2(VAR_9);
        *VAR_15 = 0;
        for (VAR_12 = 0; VAR_12 < FUNC_9(VAR_9); VAR_12++) {
            if (*VAR_16 != 0) {
                *VAR_15 = 1;
                break;
            }
            VAR_16++;
        }
        goto finish;
    }



    for (VAR_12 = 0; VAR_12 < FUNC_14(VAR_9); VAR_12++) {
        VAR_11[VAR_12] = FUNC_3(VAR_9, VAR_12);
    }





    VAR_11[VAR_6] = ((VAR_11[VAR_6] - 1) >> 3) + 1;


    VAR_10 = (PyArrayObject *)FUNC_15(
            FUNC_19(VAR_9), FUNC_4(VAR_3),
            FUNC_14(VAR_9), VAR_11, ((void*)0), ((void*)0),
            FUNC_7(VAR_9), ((void*)0));
    if (VAR_10 == ((void*)0)) {
        goto fail;
    }

    VAR_13 = (PyArrayIterObject *)FUNC_13((PyObject *)VAR_9, &VAR_6);
    VAR_14 = (PyArrayIterObject *)FUNC_13((PyObject *)VAR_10, &VAR_6);
    if (VAR_13 == ((void*)0) || VAR_14 == ((void*)0)) {
        FUNC_20(VAR_13);
        FUNC_20(VAR_14);
        goto fail;
    }

    FUNC_0(FUNC_3(VAR_10, VAR_6));
    while (FUNC_12(VAR_13)) {
        FUNC_21(FUNC_10(VAR_13), FUNC_9(VAR_9),
                   FUNC_3(VAR_9, VAR_6), FUNC_16(VAR_9, VAR_6),
                   FUNC_10(VAR_14), FUNC_3(VAR_10, VAR_6),
                   FUNC_16(VAR_10, VAR_6), VAR_7);
        FUNC_11(VAR_13);
        FUNC_11(VAR_14);
    }
    VAR_1;

    FUNC_18(VAR_13);
    FUNC_18(VAR_14);

finish:
    FUNC_18(VAR_9);
    return (PyObject *)VAR_10;

fail:
    FUNC_20(VAR_9);
    FUNC_20(VAR_10);
    return ((void*)0);
}

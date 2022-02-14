
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mem_overlap_t ;
typedef int Py_ssize_t ;
typedef int PyObject ;
typedef int PyArrayObject ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int *,char*,char**,int **,int **,int **) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *,char*) ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,char*,int **) ;
 scalar_t__ FUNC_12 (int *,int *,int) ;

__attribute__((used)) static PyObject *
FUNC_13(PyObject *VAR_13, PyObject *VAR_14, Py_ssize_t VAR_15,
                         int VAR_16)
{
    PyObject * VAR_17 = ((void*)0);
    PyObject * VAR_18 = ((void*)0);
    PyArrayObject * VAR_19 = ((void*)0);
    PyArrayObject * VAR_20 = ((void*)0);
    PyObject *VAR_21 = ((void*)0);
    static char *VAR_22[] = {"self", "other", "max_work", ((void*)0)};

    mem_overlap_t VAR_23;
    static PyObject *VAR_24 = ((void*)0);
    Py_ssize_t VAR_25;
    VAR_5;

    VAR_25 = VAR_15;

    if (!FUNC_0(VAR_13, VAR_14, "OO|O:shares_memory_impl", VAR_22,
                                     &VAR_17, &VAR_18, &VAR_21)) {
        return ((void*)0);
    }

    if (FUNC_1(VAR_17)) {
        VAR_19 = (PyArrayObject*)VAR_17;
        FUNC_9(VAR_19);
    }
    else {


        VAR_19 = (PyArrayObject*)FUNC_2(VAR_17);
        if (VAR_19 == ((void*)0)) {
            goto fail;
        }
    }

    if (FUNC_1(VAR_18)) {
        VAR_20 = (PyArrayObject*)VAR_18;
        FUNC_9(VAR_20);
    }
    else {
        VAR_20 = (PyArrayObject*)FUNC_2(VAR_18);
        if (VAR_20 == ((void*)0)) {
            goto fail;
        }
    }

    if (VAR_21 == ((void*)0) || VAR_21 == VAR_10) {

    }
    else if (FUNC_8(VAR_21)) {
        VAR_25 = FUNC_7(VAR_21);
        if (FUNC_3()) {
            goto fail;
        }
    }

    else if (FUNC_6(VAR_21)) {
        VAR_25 = FUNC_5(VAR_21);
    }

    else {
        FUNC_4(VAR_9, "max_work must be an integer");
        goto fail;
    }

    if (VAR_25 < -2) {
        FUNC_4(VAR_9, "Invalid value for max_work");
        goto fail;
    }

    VAR_4;
    VAR_23 = FUNC_12(VAR_19, VAR_20, VAR_25);
    VAR_6;

    FUNC_10(VAR_19);
    FUNC_10(VAR_20);

    if (VAR_23 == VAR_0) {
        VAR_11;
    }
    else if (VAR_23 == VAR_3) {
        VAR_12;
    }
    else if (VAR_23 == VAR_1) {
        if (VAR_16) {
            FUNC_4(VAR_7,
                            "Integer overflow in computing overlap");
            return ((void*)0);
        }
        else {

            VAR_12;
        }
    }
    else if (VAR_23 == VAR_2) {
        if (VAR_16) {
            FUNC_11("numpy.core._exceptions", "TooHardError",
                             &VAR_24);
            if (VAR_24) {
                FUNC_4(VAR_24, "Exceeded max_work");
            }
            return ((void*)0);
        }
        else {

            VAR_12;
        }
    }
    else {

        FUNC_4(VAR_8,
                        "Error in computing overlap");
        return ((void*)0);
    }

fail:
    FUNC_10(VAR_19);
    FUNC_10(VAR_20);
    return ((void*)0);
}

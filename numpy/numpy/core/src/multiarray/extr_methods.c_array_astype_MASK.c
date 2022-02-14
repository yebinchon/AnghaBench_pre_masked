
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArray_Descr ;
typedef int PyArrayObject ;
typedef scalar_t__ NPY_ORDER ;
typedef int NPY_CASTING ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *,char*,char**,int ,int **,int ,scalar_t__*,int ,int *,int*,int*) ;
 int * FUNC_1 (int *,scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (int *,scalar_t__) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,scalar_t__,int *,int) ;
 int VAR_7 ;
 int FUNC_10 (int ,int *) ;
 int VAR_8 ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int **,int *) ;
 int * FUNC_13 (char*,int ) ;
 int * FUNC_14 (char*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ) ;

__attribute__((used)) static PyObject *
FUNC_19(PyArrayObject *VAR_9, PyObject *VAR_10, PyObject *VAR_11)
{
    static char *VAR_12[] = {"dtype", "order", "casting",
                             "subok", "copy", ((void*)0)};
    PyArray_Descr *VAR_13 = ((void*)0);




    NPY_CASTING VAR_14 = VAR_4;
    NPY_ORDER VAR_15 = VAR_3;
    int VAR_16 = 1, VAR_17 = 1;

    if (!FUNC_0(VAR_10, VAR_11, "O&|O&O&ii:astype", VAR_12,
                            VAR_6, &VAR_13,
                            VAR_7, &VAR_15,
                            VAR_5, &VAR_14,
                            &VAR_17,
                            &VAR_16)) {
        FUNC_17(VAR_13);
        return ((void*)0);
    }






    if (!VAR_16 && (VAR_15 == VAR_3 ||
                       (VAR_15 == VAR_0 &&
                            (FUNC_7(VAR_9) ||
                            FUNC_8(VAR_9))) ||
                       (VAR_15 == VAR_1 &&
                            FUNC_7(VAR_9)) ||
                       (VAR_15 == VAR_2 &&
                            FUNC_8(VAR_9))) &&
                    (VAR_17 || FUNC_3(VAR_9)) &&
                    FUNC_6(VAR_13, FUNC_5(VAR_9))) {
        FUNC_15(VAR_13);
        FUNC_16(VAR_9);
        return (PyObject *)VAR_9;
    }
    else if (FUNC_2(VAR_9, VAR_13, VAR_14)) {
        PyArrayObject *VAR_18;


        VAR_13 = FUNC_1((PyObject *)VAR_9,
                                           FUNC_5(VAR_9), VAR_13);
        if (VAR_13 == ((void*)0)) {
            return ((void*)0);
        }


        VAR_18 = (PyArrayObject *)FUNC_9(
                                    VAR_9, VAR_15, VAR_13, VAR_17);
        if (VAR_18 == ((void*)0)) {
            return ((void*)0);
        }

        if (FUNC_4(VAR_18, VAR_9) < 0) {
            FUNC_15(VAR_18);
            return ((void*)0);
        }

        return (PyObject *)VAR_18;
    }
    else {
        PyObject *VAR_19;
        VAR_19 = FUNC_14("Cannot cast array from ");
        FUNC_12(&VAR_19,
                FUNC_11((PyObject *)FUNC_5(VAR_9)));
        FUNC_12(&VAR_19,
                FUNC_14(" to "));
        FUNC_12(&VAR_19,
                FUNC_11((PyObject *)VAR_13));
        FUNC_12(&VAR_19,
                FUNC_13(" according to the rule %s",
                        FUNC_18(VAR_14)));
        FUNC_10(VAR_8, VAR_19);
        FUNC_15(VAR_19);
        FUNC_15(VAR_13);
        return ((void*)0);
    }
}

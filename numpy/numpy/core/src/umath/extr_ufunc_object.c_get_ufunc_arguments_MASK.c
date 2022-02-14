
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nin; int nout; int nargs; } ;
typedef TYPE_1__ PyUFuncObject ;
typedef int PyObject ;
typedef int PyArray_Descr ;
typedef int PyArrayObject ;
typedef int NPY_ORDER ;
typedef int NPY_CASTING ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int *,int ,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_3 ;
 int FUNC_4 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (char*,TYPE_1__*,...) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_12 (int *,int **) ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;
 int * VAR_18 ;
 int * VAR_19 ;
 int * VAR_20 ;
 int * VAR_21 ;
 int * VAR_22 ;
 int * VAR_23 ;
 scalar_t__ FUNC_13 (TYPE_1__*,int *,int **,int ,int **,int ,int **,int ,int **,int ,int **,int ,int*,int ,int *,int ,int *,int ,int **,int ,int*,int ,int **,int ,int **,int ,int **) ;

__attribute__((used)) static int
FUNC_14(PyUFuncObject *VAR_24,
                    PyObject *VAR_25, PyObject *VAR_26,
                    PyArrayObject **VAR_27,
                    NPY_ORDER *VAR_28,
                    NPY_CASTING *VAR_29,
                    PyObject **VAR_30,
                    PyObject **VAR_31,
                    int *VAR_32,
                    PyArrayObject **VAR_33,
                    PyObject **VAR_34,
                    PyObject **VAR_35,
                    int *VAR_36)
{
    int VAR_37, VAR_38;
    int VAR_39 = VAR_24->nin;
    int VAR_40 = VAR_24->nout;
    int VAR_41 = VAR_24->nargs;
    PyObject *VAR_42, *VAR_43;
    PyArray_Descr *VAR_44 = ((void*)0);




    for (VAR_37 = 0; VAR_37 < VAR_41; VAR_37++) {
        VAR_27[VAR_37] = ((void*)0);
    }
    *VAR_30 = ((void*)0);
    *VAR_31 = ((void*)0);
    if (VAR_34 != ((void*)0)) {
        *VAR_34 = ((void*)0);
    }
    if (VAR_35 != ((void*)0)) {
        *VAR_35 = ((void*)0);
    }
    if (VAR_33 != ((void*)0)) {
        *VAR_33 = ((void*)0);
    }


    VAR_38 = FUNC_8(VAR_25);
    if ((VAR_38 < VAR_39) || (VAR_38 > VAR_41)) {
        FUNC_4(VAR_6, "invalid number of arguments");
        return -1;
    }


    for (VAR_37 = 0; VAR_37 < VAR_39; ++VAR_37) {
        VAR_42 = FUNC_6(VAR_25, VAR_37);

        if (FUNC_0(VAR_42)) {
            PyArrayObject *VAR_45 = (PyArrayObject *)VAR_42;
            VAR_27[VAR_37] = (PyArrayObject *)FUNC_2(VAR_45, ((void*)0), 0);
        }
        else {
            if (!FUNC_3(VAR_42, VAR_0)) {




                VAR_43 = FUNC_9("OOi", VAR_24, VAR_25, VAR_37);
                if (VAR_43 == ((void*)0)) {
                    goto fail;
                }
            }
            else {
                VAR_43 = ((void*)0);
            }
            VAR_27[VAR_37] = (PyArrayObject *)FUNC_1(VAR_42,
                                    ((void*)0), 0, 0, 0, VAR_43);
            FUNC_11(VAR_43);
        }

        if (VAR_27[VAR_37] == ((void*)0)) {
            goto fail;
        }
    }


    for (VAR_37 = VAR_39; VAR_37 < VAR_38; ++VAR_37) {
        VAR_42 = FUNC_6(VAR_25, VAR_37);
        if (FUNC_12(VAR_42, VAR_27 + VAR_37) < 0) {
            goto fail;
        }
    }





    if (VAR_26) {
        PyObject *VAR_46 = ((void*)0);
        PyObject *VAR_47 = ((void*)0);
        static PyObject *VAR_48[13] = {((void*)0)};
        if (VAR_48[0] == ((void*)0)) {
            VAR_48[0] = VAR_19;
            VAR_48[1] = VAR_23;
            VAR_48[2] = VAR_12;
            VAR_48[3] = VAR_13;
            VAR_48[4] = VAR_17;
            VAR_48[5] = VAR_14;
            VAR_48[6] = VAR_18;
            VAR_48[7] = VAR_15;
            VAR_48[8] = VAR_22;
            VAR_48[9] = VAR_21;
            VAR_48[10] = VAR_20;
            VAR_48[11] = VAR_16;
            VAR_48[12] = ((void*)0);
        }




        if (FUNC_13(
                VAR_24, VAR_26, VAR_48,
                VAR_7, &VAR_46,
                VAR_11, VAR_33,
                VAR_9, VAR_34,
                VAR_9, VAR_35,
                VAR_8, VAR_36,
                VAR_1, VAR_29,
                VAR_3, VAR_28,
                VAR_2, &VAR_44,
                VAR_10, VAR_32,
                VAR_9, VAR_31,
                VAR_7, &VAR_47,
                VAR_9, VAR_30) < 0) {
            goto fail;
        }




        if (VAR_46) {





            if (VAR_38 > VAR_39) {
                FUNC_4(VAR_6,
                                "cannot specify 'out' as both a "
                                "positional and keyword argument");
                goto fail;
            }
            if (FUNC_5(VAR_46)) {
                if (FUNC_7(VAR_46) != VAR_40) {
                    FUNC_4(VAR_6,
                                    "The 'out' tuple must have exactly "
                                    "one entry per ufunc output");
                    goto fail;
                }

                for(VAR_37 = 0; VAR_37 < VAR_40; ++VAR_37) {
                    PyObject *VAR_49 = FUNC_6(VAR_46, VAR_37);
                    if (FUNC_12(VAR_49, VAR_27+VAR_39+VAR_37) < 0) {
                        goto fail;
                    }
                }
            }
            else if (VAR_40 == 1) {

                if (FUNC_12(VAR_46, VAR_27 + VAR_39) < 0) {
                    goto fail;
                }
            }
            else {
                FUNC_4(VAR_5,
                        VAR_40 > 1 ? "'out' must be a tuple of arrays" :
                                   "'out' must be an array or a tuple with "
                                   "a single array");
                goto fail;
            }
        }




        if (VAR_34 != ((void*)0) && VAR_35 != ((void*)0) &&
            *VAR_34 != ((void*)0) && *VAR_35 != ((void*)0)) {
            FUNC_4(VAR_5,
                            "cannot specify both 'axis' and 'axes'");
            goto fail;
        }
        if (VAR_47) {
            if (*VAR_31 != ((void*)0)) {
                FUNC_4(VAR_6,
                                "cannot specify both 'sig' and 'signature'");
                goto fail;
            }
            FUNC_10(VAR_47);
            *VAR_31 = VAR_47;
        }
        if (VAR_44) {
            if (*VAR_31 != ((void*)0)) {
                FUNC_4(VAR_4,
                                "cannot specify both 'signature' and 'dtype'");
                goto fail;
            }

            *VAR_31 = FUNC_9("(N)", VAR_44);
        }
    }
    return 0;

fail:
    FUNC_11(VAR_44);
    FUNC_11(*VAR_31);
    FUNC_11(*VAR_30);
    if (VAR_33 != ((void*)0)) {
        FUNC_11(*VAR_33);
    }
    if (VAR_34 != ((void*)0)) {
        FUNC_11(*VAR_34);
    }
    if (VAR_35 != ((void*)0)) {
        FUNC_11(*VAR_35);
    }
    for (VAR_37 = 0; VAR_37 < VAR_41; VAR_37++) {
        FUNC_11(VAR_27[VAR_37]);
    }
    return -1;
}

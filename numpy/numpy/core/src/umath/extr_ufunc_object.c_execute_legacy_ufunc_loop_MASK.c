
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ufunc_full_args ;
typedef int npy_uint32 ;
typedef int npy_intp ;
struct TYPE_6__ {int nin; int nout; scalar_t__ (* legacy_inner_loop_selector ) (TYPE_1__*,int **,int *,void**,int*) ;} ;
typedef TYPE_1__ PyUFuncObject ;
typedef int PyUFuncGenericFunction ;
typedef int PyObject ;
typedef int PyArray_Descr ;
typedef int PyArrayObject ;
typedef scalar_t__ NPY_ORDER ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,scalar_t__,int ,int *,int *,int ,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (int *,int *,int ,int ) ;
 scalar_t__ FUNC_7 (int *,int *,int *,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (void*) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int **,int **,scalar_t__,int,int **,int ,int ,void*,int *) ;
 scalar_t__ FUNC_11 (TYPE_1__*,int **,int *,int ,int ) ;
 scalar_t__ FUNC_12 (TYPE_1__*,int **,int *,void**,int*) ;
 int FUNC_13 (int **,int ,void*) ;
 int FUNC_14 (int **,int ,void*) ;

__attribute__((used)) static int
FUNC_15(PyUFuncObject *VAR_6,
                    int VAR_7,
                    PyArrayObject **VAR_8,
                    PyArray_Descr **VAR_9,
                    NPY_ORDER VAR_10,
                    npy_intp VAR_11,
                    PyObject **VAR_12,
                    ufunc_full_args VAR_13,
                    npy_uint32 *VAR_14)
{
    npy_intp VAR_15 = VAR_6->nin, VAR_16 = VAR_6->nout;
    PyUFuncGenericFunction VAR_17;
    void *VAR_18;
    int VAR_19 = 0;

    if (VAR_6->legacy_inner_loop_selector(VAR_6, VAR_9,
                    &VAR_17, &VAR_18, &VAR_19) < 0) {
        return -1;
    }

    if (FUNC_9(VAR_18)) {
        VAR_18 = (void*)VAR_8;
    }


    if (VAR_7) {
        if (VAR_15 == 1 && VAR_16 == 1) {
            if (VAR_8[1] == ((void*)0) &&
                        (VAR_10 == VAR_0 || VAR_10 == VAR_2) &&
                        FUNC_5(VAR_8[0])) {
                FUNC_8(VAR_9[1]);
                VAR_8[1] = (PyArrayObject *)FUNC_4(&VAR_5,
                             VAR_9[1],
                             FUNC_3(VAR_8[0]),
                             FUNC_1(VAR_8[0]),
                             ((void*)0), ((void*)0),
                             FUNC_2(VAR_8[0]) ?
                                            VAR_1 : 0,
                             ((void*)0));
                if (VAR_8[1] == ((void*)0)) {
                    return -1;
                }


                if (FUNC_11(VAR_6, &VAR_8[1],
                                    VAR_12[0], VAR_13, 0) < 0) {
                    return -1;
                }

                FUNC_0("trivial 1 input with allocated output\n");
                FUNC_14(VAR_8, VAR_17, VAR_18);

                return 0;
            }
            else if (VAR_8[1] != ((void*)0) &&
                        FUNC_3(VAR_8[1]) >= FUNC_3(VAR_8[0]) &&
                        FUNC_6(VAR_8[0], VAR_8[1],
                                                        VAR_4,
                                                        VAR_3)) {


                if (FUNC_11(VAR_6, &VAR_8[1],
                                    VAR_12[0], VAR_13, 0) < 0) {
                    return -1;
                }

                FUNC_0("trivial 1 input\n");
                FUNC_14(VAR_8, VAR_17, VAR_18);

                return 0;
            }
        }
        else if (VAR_15 == 2 && VAR_16 == 1) {
            if (VAR_8[2] == ((void*)0) &&
                        (VAR_10 == VAR_0 || VAR_10 == VAR_2) &&
                        FUNC_6(VAR_8[0], VAR_8[1],
                                                        VAR_4,
                                                        VAR_4)) {
                PyArrayObject *VAR_20;




                if (FUNC_3(VAR_8[0]) >= FUNC_3(VAR_8[1])) {
                    VAR_20 = VAR_8[0];
                }
                else {
                    VAR_20 = VAR_8[1];
                }
                FUNC_8(VAR_9[2]);
                VAR_8[2] = (PyArrayObject *)FUNC_4(&VAR_5,
                                 VAR_9[2],
                                 FUNC_3(VAR_20),
                                 FUNC_1(VAR_20),
                                 ((void*)0), ((void*)0),
                                 FUNC_2(VAR_20) ?
                                                VAR_1 : 0,
                                 ((void*)0));
                if (VAR_8[2] == ((void*)0)) {
                    return -1;
                }


                if (FUNC_11(VAR_6, &VAR_8[2],
                                    VAR_12[0], VAR_13, 0) < 0) {
                    return -1;
                }

                FUNC_0("trivial 2 input with allocated output\n");
                FUNC_13(VAR_8, VAR_17, VAR_18);

                return 0;
            }
            else if (VAR_8[2] != ((void*)0) &&
                    FUNC_3(VAR_8[2]) >= FUNC_3(VAR_8[0]) &&
                    FUNC_3(VAR_8[2]) >= FUNC_3(VAR_8[1]) &&
                    FUNC_7(VAR_8[0], VAR_8[1], VAR_8[2],
                                                      VAR_4,
                                                      VAR_4,
                                                      VAR_3)) {


                if (FUNC_11(VAR_6, &VAR_8[2],
                                    VAR_12[0], VAR_13, 0) < 0) {
                    return -1;
                }

                FUNC_0("trivial 2 input\n");
                FUNC_13(VAR_8, VAR_17, VAR_18);

                return 0;
            }
        }
    }






    FUNC_0("iterator loop\n");
    if (FUNC_10(VAR_6, VAR_8, VAR_9, VAR_10,
                    VAR_11, VAR_12, VAR_13,
                    VAR_17, VAR_18, VAR_14) < 0) {
        return -1;
    }

    return 0;
}

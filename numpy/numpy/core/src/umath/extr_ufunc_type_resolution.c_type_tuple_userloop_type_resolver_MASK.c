
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int type_num; } ;
struct TYPE_9__ {int nin; int nout; int userloops; } ;
struct TYPE_8__ {int* arg_types; struct TYPE_8__* next; } ;
typedef TYPE_1__ PyUFunc_Loop1d ;
typedef TYPE_2__ PyUFuncObject ;
typedef int PyObject ;
typedef int PyArray_Descr ;
typedef int PyArrayObject ;
typedef int NPY_CASTING ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_7__* FUNC_1 (int *) ;
 int * FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,char*,int ) ;
 int VAR_1 ;
 int * FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,int **,int **,int*,int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int **,int ,int ,int,int,int*,int *,int*,char*,char*) ;

__attribute__((used)) static int
FUNC_10(PyUFuncObject *VAR_2,
                        int VAR_3,
                        int *VAR_4,
                        PyArrayObject **VAR_5,
                        NPY_CASTING VAR_6,
                        int VAR_7,
                        int VAR_8,
                        PyArray_Descr **VAR_9)
{
    int VAR_10, VAR_11, VAR_12 = VAR_2->nin, VAR_13 = VAR_12 + VAR_2->nout;
    PyUFunc_Loop1d *VAR_14;


    int VAR_15 = -1;

    int VAR_16 = 0;
    char VAR_17 = '-', VAR_18 = '-';

    for (VAR_10 = 0; VAR_10 < VAR_12; ++VAR_10) {
        int VAR_19 = FUNC_1(VAR_5[VAR_10])->type_num;
        if (VAR_19 != VAR_15 && FUNC_5(VAR_19)) {
            PyObject *VAR_20, *VAR_21;

            VAR_15 = VAR_19;

            VAR_20 = FUNC_4(VAR_19);
            if (VAR_20 == ((void*)0)) {
                return -1;
            }
            VAR_21 = FUNC_2(VAR_2->userloops, VAR_20);
            FUNC_6(VAR_20);
            if (VAR_21 == ((void*)0)) {
                continue;
            }

            for (VAR_14 = (PyUFunc_Loop1d *)FUNC_0(VAR_21);
                 VAR_14 != ((void*)0);
                 VAR_14 = VAR_14->next) {
                int *VAR_22 = VAR_14->arg_types;
                int VAR_23 = 1;

                if (VAR_3 == VAR_13) {
                    for (VAR_11 = 0; VAR_11 < VAR_13; ++VAR_11) {
                        if (VAR_22[VAR_11] != VAR_4[VAR_11] &&
                                    VAR_4[VAR_11] != VAR_0) {
                            VAR_23 = 0;
                            break;
                        }
                    }
                } else {
                    if (VAR_22[VAR_12] != VAR_4[0]) {
                        VAR_23 = 0;
                    }
                }
                if (!VAR_23) {
                    continue;
                }

                switch (FUNC_9(VAR_2, VAR_5,
                            VAR_6, VAR_6,
                            VAR_7, VAR_8,
                            VAR_22, ((void*)0),
                            &VAR_16, &VAR_17,
                            &VAR_18)) {

                    case 1:
                        FUNC_7(VAR_2, VAR_5,
                            VAR_9, VAR_22, ((void*)0));
                        return 1;

                    case 0:
                        FUNC_3(VAR_1,
                             "found a user loop for ufunc '%s' "
                             "matching the type-tuple, "
                             "but the inputs and/or outputs could not be "
                             "cast according to the casting rule",
                             FUNC_8(VAR_2));
                        return -1;

                    case -1:
                        return -1;
                }
            }
        }
    }


    return 0;
}

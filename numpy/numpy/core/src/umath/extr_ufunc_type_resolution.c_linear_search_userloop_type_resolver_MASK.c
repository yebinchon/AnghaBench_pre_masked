
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t npy_intp ;
struct TYPE_9__ {int type_num; } ;
struct TYPE_8__ {size_t nin; size_t nout; int userloops; } ;
struct TYPE_7__ {int* arg_types; int arg_dtypes; struct TYPE_7__* next; } ;
typedef TYPE_1__ PyUFunc_Loop1d ;
typedef TYPE_2__ PyUFuncObject ;
typedef int PyObject ;
typedef int PyArray_Descr ;
typedef int PyArrayObject ;
typedef int NPY_CASTING ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_6__* FUNC_1 (int *) ;
 int * FUNC_2 (int ,int *) ;
 int * FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,int **,int **,int*,int ) ;
 int FUNC_7 (TYPE_2__*,int **,int ,int ,int,int,int*,int ,int*,char*,char*) ;

__attribute__((used)) static int
FUNC_8(PyUFuncObject *VAR_1,
                        PyArrayObject **VAR_2,
                        NPY_CASTING VAR_3,
                        NPY_CASTING VAR_4,
                        int VAR_5,
                        int VAR_6,
                        PyArray_Descr **VAR_7,
                        int *VAR_8,
                        char *VAR_9,
                        char *VAR_10)
{
    npy_intp VAR_11, VAR_12 = VAR_1->nin + VAR_1->nout;
    PyUFunc_Loop1d *VAR_13;


    int VAR_14 = -1;

    for (VAR_11 = 0; VAR_11 < VAR_12; ++VAR_11) {
        int VAR_15;


        if (VAR_2[VAR_11] == ((void*)0)) {
            break;
        }

        VAR_15 = FUNC_1(VAR_2[VAR_11])->type_num;
        if (VAR_15 != VAR_14 &&
                (FUNC_4(VAR_15) || VAR_15 == VAR_0)) {
            PyObject *VAR_16, *VAR_17;

            VAR_14 = VAR_15;

            VAR_16 = FUNC_3(VAR_15);
            if (VAR_16 == ((void*)0)) {
                return -1;
            }
            VAR_17 = FUNC_2(VAR_1->userloops, VAR_16);
            FUNC_5(VAR_16);
            if (VAR_17 == ((void*)0)) {
                continue;
            }
            for (VAR_13 = (PyUFunc_Loop1d *)FUNC_0(VAR_17);
                 VAR_13 != ((void*)0);
                 VAR_13 = VAR_13->next) {
                int *VAR_18 = VAR_13->arg_types;
                switch (FUNC_7(VAR_1, VAR_2,
                            VAR_3, VAR_4,
                            VAR_5, VAR_6,
                            VAR_18, VAR_13->arg_dtypes,
                            VAR_8, VAR_9,
                            VAR_10)) {

                    case -1:
                        return -1;

                    case 1:
                        FUNC_6(VAR_1, VAR_2, VAR_7, VAR_18, VAR_13->arg_dtypes);
                        return 1;
                }
            }
        }
    }


    return 0;
}

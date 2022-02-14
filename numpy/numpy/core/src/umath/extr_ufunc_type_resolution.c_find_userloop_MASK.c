
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t npy_intp ;
struct TYPE_8__ {int type_num; } ;
struct TYPE_7__ {size_t nin; size_t nout; int userloops; } ;
struct TYPE_6__ {int* arg_types; void* data; int func; struct TYPE_6__* next; } ;
typedef TYPE_1__ PyUFunc_Loop1d ;
typedef TYPE_2__ PyUFuncObject ;
typedef int PyUFuncGenericFunction ;
typedef int PyObject ;
typedef TYPE_3__ PyArray_Descr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int ,int *) ;
 int * FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(PyUFuncObject *VAR_1,
                PyArray_Descr **VAR_2,
                PyUFuncGenericFunction *VAR_3,
                void **VAR_4)
{
    npy_intp VAR_5, VAR_6 = VAR_1->nin, VAR_7, VAR_8 = VAR_6 + VAR_1->nout;
    PyUFunc_Loop1d *VAR_9;


    int VAR_10 = -1;

    for (VAR_5 = 0; VAR_5 < VAR_8; ++VAR_5) {
        int VAR_11;


        if (VAR_2[VAR_5] == ((void*)0)) {
            break;
        }

        VAR_11 = VAR_2[VAR_5]->type_num;
        if (VAR_11 != VAR_10 &&
                (FUNC_3(VAR_11) || VAR_11 == VAR_0)) {
            PyObject *VAR_12, *VAR_13;

            VAR_10 = VAR_11;

            VAR_12 = FUNC_2(VAR_11);
            if (VAR_12 == ((void*)0)) {
                return -1;
            }
            VAR_13 = FUNC_1(VAR_1->userloops, VAR_12);
            FUNC_4(VAR_12);
            if (VAR_13 == ((void*)0)) {
                continue;
            }
            for (VAR_9 = (PyUFunc_Loop1d *)FUNC_0(VAR_13);
                 VAR_9 != ((void*)0);
                 VAR_9 = VAR_9->next) {
                int *VAR_14 = VAR_9->arg_types;

                for (VAR_7 = 0; VAR_7 < VAR_8; ++VAR_7) {
                    if (VAR_14[VAR_7] != VAR_2[VAR_7]->type_num) {
                        break;
                    }
                }

                if (VAR_7 == VAR_8) {
                    *VAR_3 = VAR_9->func;
                    *VAR_4 = VAR_9->data;
                    return 1;
                }
            }
        }
    }


    return 0;
}

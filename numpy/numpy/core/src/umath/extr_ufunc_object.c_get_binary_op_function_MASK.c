
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ntypes; char* types; int nargs; void** data; int * functions; int * userloops; } ;
struct TYPE_4__ {int* arg_types; struct TYPE_4__* next; void* data; int func; } ;
typedef TYPE_1__ PyUFunc_Loop1d ;
typedef TYPE_2__ PyUFuncObject ;
typedef int PyUFuncGenericFunction ;
typedef int PyObject ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,char,char,char) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int,char) ;
 int * FUNC_4 (int *,int *) ;
 int * FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(PyUFuncObject *VAR_1, int *VAR_2,
                        PyUFuncGenericFunction *VAR_3,
                        void **VAR_4)
{
    int VAR_5;
    PyUFunc_Loop1d *VAR_6;

    FUNC_0("Getting binary op function for type number %d\n",
                                *VAR_2);


    if (VAR_1->userloops != ((void*)0) && FUNC_6(*VAR_2)) {
        PyObject *VAR_7, *VAR_8;
        VAR_7 = FUNC_5(*VAR_2);
        if (VAR_7 == ((void*)0)) {
            return -1;
        }
        VAR_8 = FUNC_4(VAR_1->userloops, VAR_7);
        FUNC_7(VAR_7);
        if (VAR_8 != ((void*)0)) {
            VAR_6 = (PyUFunc_Loop1d *)FUNC_2(VAR_8);
            while (VAR_6 != ((void*)0)) {
                int *VAR_9 = VAR_6->arg_types;

                if (VAR_9[0] == *VAR_2 && VAR_9[1] == *VAR_2 &&
                                                VAR_9[2] == *VAR_2) {
                    *VAR_3 = VAR_6->func;
                    *VAR_4 = VAR_6->data;
                    return 0;
                }

                VAR_6 = VAR_6->next;
            }
        }
    }


    for (VAR_5 = 0; VAR_5 < VAR_1->ntypes; ++VAR_5) {
        char *VAR_10 = VAR_1->types + VAR_5*VAR_1->nargs;

        FUNC_1("Trying loop with signature %d %d -> %d\n",
                                VAR_10[0], VAR_10[1], VAR_10[2]);

        if (FUNC_3(*VAR_2, VAR_10[0]) &&
                    VAR_10[0] == VAR_10[1] &&
                    (*VAR_2 == VAR_0 || VAR_10[0] != VAR_0)) {

            if (VAR_10[2] == VAR_10[0]) {
                *VAR_3 = VAR_1->functions[VAR_5];
                *VAR_4 = VAR_1->data[VAR_5];
                *VAR_2 = VAR_10[0];
                return 0;
            }




            else {
                *VAR_2 = VAR_10[2];
                break;
            }
        }
    }


    for (VAR_5 = 0; VAR_5 < VAR_1->ntypes; ++VAR_5) {
        char *VAR_11 = VAR_1->types + VAR_5*VAR_1->nargs;

        if (FUNC_3(*VAR_2, VAR_11[0]) &&
                    VAR_11[0] == VAR_11[1] &&
                    VAR_11[1] == VAR_11[2] &&
                    (*VAR_2 == VAR_0 || VAR_11[0] != VAR_0)) {

            *VAR_3 = VAR_1->functions[VAR_5];
            *VAR_4 = VAR_1->data[VAR_5];
            *VAR_2 = VAR_11[0];
            return 0;
        }
    }

    return -1;
}

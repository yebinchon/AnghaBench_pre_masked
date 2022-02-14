
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t npy_intp ;
struct TYPE_13__ {char type; } ;
struct TYPE_12__ {size_t nin; size_t nout; int ntypes; } ;
typedef TYPE_1__ PyUFuncObject ;
typedef int PyObject ;
typedef TYPE_2__ PyArray_Descr ;
typedef int PyArrayObject ;
typedef int NPY_CASTING ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int ) ;
 TYPE_2__* FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (char*,...) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_8(PyUFuncObject *VAR_3,
                    PyArrayObject **VAR_4,
                    NPY_CASTING VAR_5,
                    NPY_CASTING VAR_6,
                    int VAR_7,
                    int VAR_8,
                    int *VAR_9, PyArray_Descr **VAR_10,
                    int *VAR_11,
                    char *VAR_12,
                    char *VAR_13)
{
    npy_intp VAR_14, VAR_15 = VAR_3->nin, VAR_16 = VAR_15 + VAR_3->nout;





    for (VAR_14 = 0; VAR_14 < VAR_15; ++VAR_14) {
        PyArray_Descr *VAR_17;
        if (VAR_9[VAR_14] == VAR_0 && !VAR_7 && VAR_3->ntypes > 1) {
            return 0;
        }






        if (VAR_9[VAR_14] == VAR_1 && VAR_10 != ((void*)0)) {
            VAR_17 = VAR_10[VAR_14];
            FUNC_6(VAR_17);
        }
        else {
            VAR_17 = FUNC_3(VAR_9[VAR_14]);
        }
        if (VAR_17 == ((void*)0)) {
            return -1;
        }
        if (!VAR_8) {
            if (!FUNC_1(FUNC_2(VAR_4[VAR_14]), VAR_17,
                                                    VAR_5)) {
                FUNC_5(VAR_17);
                return 0;
            }
        }
        else {
            if (!FUNC_0(VAR_4[VAR_14], VAR_17, VAR_5)) {
                FUNC_5(VAR_17);
                return 0;
            }
        }
        FUNC_5(VAR_17);
    }





    for (VAR_14 = VAR_15; VAR_14 < VAR_16; ++VAR_14) {
        if (VAR_4[VAR_14] != ((void*)0)) {
            PyArray_Descr *VAR_18 = FUNC_3(VAR_9[VAR_14]);
            if (VAR_18 == ((void*)0)) {
                return -1;
            }
            if (!FUNC_1(VAR_18, FUNC_2(VAR_4[VAR_14]),
                                                        VAR_6)) {
                if (!(*VAR_11)) {
                    *VAR_11 = 1;
                    *VAR_12 = VAR_18->type;
                    *VAR_13 = FUNC_2(VAR_4[VAR_14])->type;
                }
                FUNC_5(VAR_18);
                return 0;
            }
            FUNC_5(VAR_18);
        }
    }

    return 1;
}

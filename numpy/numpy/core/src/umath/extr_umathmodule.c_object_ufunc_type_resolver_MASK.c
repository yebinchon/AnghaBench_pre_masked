
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nin; int nout; } ;
typedef TYPE_1__ PyUFuncObject ;
typedef int PyObject ;
typedef int PyArray_Descr ;
typedef int PyArrayObject ;
typedef int NPY_CASTING ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(PyUFuncObject *VAR_1,
                                NPY_CASTING VAR_2,
                                PyArrayObject **VAR_3,
                                PyObject *VAR_4,
                                PyArray_Descr **VAR_5)
{
    int VAR_6, VAR_7 = VAR_1->nin + VAR_1->nout;

    VAR_5[0] = FUNC_0(VAR_0);
    if (VAR_5[0] == ((void*)0)) {
        return -1;
    }

    for (VAR_6 = 1; VAR_6 < VAR_7; ++VAR_6) {
        FUNC_1(VAR_5[0]);
        VAR_5[VAR_6] = VAR_5[0];
    }

    return 0;
}

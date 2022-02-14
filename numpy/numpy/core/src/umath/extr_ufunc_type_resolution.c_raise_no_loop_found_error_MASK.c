
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t npy_intp ;
struct TYPE_4__ {size_t nargs; } ;
typedef TYPE_1__ PyUFuncObject ;
typedef int PyObject ;
typedef int PyArray_Descr ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (size_t) ;
 int * FUNC_2 (int,TYPE_1__*,int *) ;
 int FUNC_3 (int *,size_t,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char*,int **) ;

__attribute__((used)) static int
FUNC_7(
        PyUFuncObject *VAR_0, PyArray_Descr **VAR_1)
{
    static PyObject *VAR_2 = ((void*)0);
    PyObject *VAR_3;
    PyObject *VAR_4;
    npy_intp VAR_5;

    FUNC_6(
        "numpy.core._exceptions", "_UFuncNoLoopError",
        &VAR_2);
    if (VAR_2 == ((void*)0)) {
        return -1;
    }


    VAR_4 = FUNC_1(VAR_0->nargs);
    if (VAR_4 == ((void*)0)) {
        return -1;
    }
    for (VAR_5 = 0; VAR_5 < VAR_0->nargs; ++VAR_5) {
        FUNC_5(VAR_1[VAR_5]);
        FUNC_3(VAR_4, VAR_5, (PyObject *)VAR_1[VAR_5]);
    }


    VAR_3 = FUNC_2(2, VAR_0, VAR_4);
    FUNC_4(VAR_4);
    if (VAR_3 == ((void*)0)){
        return -1;
    }
    FUNC_0(VAR_2, VAR_3);
    FUNC_4(VAR_3);

    return -1;
}

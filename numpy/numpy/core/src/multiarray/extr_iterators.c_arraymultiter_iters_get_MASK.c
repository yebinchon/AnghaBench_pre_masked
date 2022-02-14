
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numiter; scalar_t__* iters; } ;
typedef int PyObject ;
typedef TYPE_1__ PyArrayMultiIterObject ;


 int * FUNC_0 (int) ;
 int FUNC_1 (int *,int,int *) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static PyObject *
FUNC_3(PyArrayMultiIterObject *VAR_0)
{
    PyObject *VAR_1;
    int VAR_2, VAR_3;

    VAR_3 = VAR_0->numiter;
    VAR_1 = FUNC_0(VAR_3);
    if (VAR_1 == ((void*)0)) {
        return VAR_1;
    }
    for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
        FUNC_2(VAR_0->iters[VAR_2]);
        FUNC_1(VAR_1, VAR_2, (PyObject *)VAR_0->iters[VAR_2]);
    }
    return VAR_1;
}

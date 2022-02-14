
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArrayObject ;
typedef int PyArrayIterObject ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *,int) ;
 scalar_t__ FUNC_3 (int *,int *) ;

__attribute__((used)) static PyObject *
FUNC_4(PyArrayIterObject *VAR_0, PyObject *VAR_1, int VAR_2)
{
    PyArrayObject *VAR_3;
    PyObject *VAR_4;
    VAR_3 = (PyArrayObject *)FUNC_3(VAR_0, ((void*)0));
    if (VAR_3 == ((void*)0)) {
        return ((void*)0);
    }
    VAR_4 = FUNC_2(VAR_3, VAR_1, VAR_2);
    FUNC_0(VAR_3);
    FUNC_1(VAR_3);
    return VAR_4;
}

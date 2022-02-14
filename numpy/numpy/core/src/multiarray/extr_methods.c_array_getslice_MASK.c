
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArrayObject ;


 int FUNC_0 (int *,char*,int **,int **) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static PyObject *
FUNC_4(PyArrayObject *VAR_0, PyObject *VAR_1)
{
    PyObject *VAR_2, *VAR_3, *VAR_4, *VAR_5;
    if (!FUNC_0(VAR_1, "OO:__getslice__", &VAR_2, &VAR_3)) {
        return ((void*)0);
    }

    VAR_4 = FUNC_2(VAR_2, VAR_3, ((void*)0));
    if (VAR_4 == ((void*)0)) {
        return ((void*)0);
    }


    VAR_5 = FUNC_1((PyObject *)VAR_0, VAR_4);
    FUNC_3(VAR_4);
    return VAR_5;
}

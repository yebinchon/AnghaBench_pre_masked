
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArrayObject ;


 int FUNC_0 (int *,char*,int **,int **,int **) ;
 scalar_t__ FUNC_1 (int *,int *,int *) ;
 int * FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

__attribute__((used)) static PyObject *
FUNC_4(PyArrayObject *VAR_1, PyObject *VAR_2)
{
    PyObject *VAR_3, *VAR_4, *VAR_5, *VAR_6;
    if (!FUNC_0(VAR_2, "OOO:__setslice__", &VAR_3, &VAR_4, &VAR_5)) {
        return ((void*)0);
    }

    VAR_6 = FUNC_2(VAR_3, VAR_4, ((void*)0));
    if (VAR_6 == ((void*)0)) {
        return ((void*)0);
    }


    if (FUNC_1((PyObject *)VAR_1, VAR_6, VAR_5) < 0) {
        FUNC_3(VAR_6);
        return ((void*)0);
    }
    FUNC_3(VAR_6);
    VAR_0;
}

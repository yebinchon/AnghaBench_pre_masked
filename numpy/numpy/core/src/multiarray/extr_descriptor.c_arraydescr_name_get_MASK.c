
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArray_Descr ;


 int * FUNC_0 (char*) ;
 int * FUNC_1 (int *,char*,char*,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static PyObject *
FUNC_3(PyArray_Descr *VAR_0)
{

    PyObject *VAR_1;
    PyObject *VAR_2;
    VAR_1 = FUNC_0("numpy.core._dtype");
    if (VAR_1 == ((void*)0)) {
        return ((void*)0);
    }
    VAR_2 = FUNC_1(VAR_1, "_name_get", "O", VAR_0);
    FUNC_2(VAR_1);
    return VAR_2;
}

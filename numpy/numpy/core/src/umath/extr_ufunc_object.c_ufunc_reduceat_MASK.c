
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyUFuncObject ;
typedef int PyObject ;


 int FUNC_0 (int *,char*,int *,int *,int **) ;
 int * FUNC_1 (int *,int *,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static PyObject *
FUNC_2(PyUFuncObject *VAR_1, PyObject *VAR_2, PyObject *VAR_3)
{
    int VAR_4;
    PyObject *VAR_5 = ((void*)0);

    VAR_4 = FUNC_0(VAR_1, "reduceat", VAR_2, VAR_3, &VAR_5);
    if (VAR_4) {
        return ((void*)0);
    }
    else if (VAR_5) {
        return VAR_5;
    }
    return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_0);
}

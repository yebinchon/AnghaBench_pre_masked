
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArrayObject ;


 int FUNC_0 (int *,char*,int ,int **) ;
 int * FUNC_1 (int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static PyObject *
FUNC_2(PyArrayObject *VAR_1, PyObject *VAR_2)
{
    PyArrayObject *VAR_3 = ((void*)0);
    if (!FUNC_0(VAR_2, "|O&:conjugate",
                          VAR_0,
                          &VAR_3)) {
        return ((void*)0);
    }
    return FUNC_1(VAR_1, VAR_3);
}

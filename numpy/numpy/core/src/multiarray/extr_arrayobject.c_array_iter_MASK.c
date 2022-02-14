
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArrayObject ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static PyObject *
FUNC_3(PyArrayObject *VAR_1)
{
    if (FUNC_0(VAR_1) == 0) {
        FUNC_1(VAR_0,
                        "iteration over a 0-d array");
        return ((void*)0);
    }
    return FUNC_2((PyObject *)VAR_1);
}

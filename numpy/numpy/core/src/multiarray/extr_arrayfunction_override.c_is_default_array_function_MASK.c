
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 int * FUNC_0 () ;

__attribute__((used)) static int
FUNC_1(PyObject *VAR_0)
{
    static PyObject *VAR_1 = ((void*)0);

    if (VAR_1 == ((void*)0)) {
        VAR_1 = FUNC_0();
    }
    return VAR_0 == VAR_1;
}

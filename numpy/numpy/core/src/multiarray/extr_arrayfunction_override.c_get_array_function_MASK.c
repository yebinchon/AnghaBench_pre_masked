
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int *,char*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;

__attribute__((used)) static PyObject *
FUNC_6(PyObject *VAR_0)
{
    static PyObject *VAR_1 = ((void*)0);
    PyObject *VAR_2;

    if (VAR_1 == ((void*)0)) {
        VAR_1 = FUNC_5();
    }


    if (FUNC_0(VAR_0)) {
        FUNC_4(VAR_1);
        return VAR_1;
    }

    VAR_2 = FUNC_1(VAR_0, "__array_function__");
    if (VAR_2 == ((void*)0) && FUNC_3()) {
        FUNC_2();
    }

    return VAR_2;
}

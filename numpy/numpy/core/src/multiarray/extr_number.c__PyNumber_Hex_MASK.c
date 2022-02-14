
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 int * FUNC_0 (char*) ;
 int * FUNC_1 (int *,char*,char*,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static PyObject *
FUNC_3(PyObject *VAR_0) {
    PyObject *VAR_1;
    PyObject *VAR_2 = FUNC_0("__builtin__");
    if (VAR_2 == ((void*)0)) {
        return ((void*)0);
    }
    VAR_1 = FUNC_1(VAR_2, "hex", "(O)", VAR_0);
    FUNC_2(VAR_2);
    return VAR_1;
}

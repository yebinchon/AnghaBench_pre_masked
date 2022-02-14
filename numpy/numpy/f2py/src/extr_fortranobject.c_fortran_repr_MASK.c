
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyFortranObject ;


 int FUNC_0 () ;
 int * FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (char*,int ) ;
 int * FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (char*,int *) ;
 int * FUNC_8 (char*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static PyObject *
FUNC_10(PyFortranObject *VAR_0)
{
    PyObject *VAR_1 = ((void*)0), *VAR_2 = ((void*)0);
    VAR_1 = FUNC_1((PyObject *)VAR_0, "__name__");
    FUNC_0();
    if (VAR_1 != ((void*)0) && FUNC_3(VAR_1)) {
        VAR_2 = FUNC_4("<fortran %s>", FUNC_2(VAR_1));
    }
    else {
        VAR_2 = FUNC_5("<fortran object>");
    }

    FUNC_9(VAR_1);
    return VAR_2;
}

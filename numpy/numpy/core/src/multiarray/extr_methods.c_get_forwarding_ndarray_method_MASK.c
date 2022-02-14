
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 int * FUNC_0 (int ,char const*) ;
 int FUNC_1 (int ,char*,char const*) ;
 int VAR_0 ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static PyObject *
FUNC_6(const char *VAR_1)
{
    PyObject *VAR_2, *VAR_3;


    VAR_2 = FUNC_2("numpy.core._methods");
    if (VAR_2 == ((void*)0)) {
        return ((void*)0);
    }
    VAR_3 = FUNC_0(FUNC_3(VAR_2), VAR_1);
    if (VAR_3 == ((void*)0)) {
        FUNC_4(VAR_2);
        FUNC_1(VAR_0,
                "NumPy internal error: could not find function "
                "numpy.core._methods.%s", VAR_1);
    }
    else {
        FUNC_5(VAR_3);
    }
    FUNC_4(VAR_2);
    return VAR_3;
}

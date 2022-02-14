
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArrayObject ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *,char*,char*,int *,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static PyObject *
FUNC_5(PyArrayObject *VAR_0)
{
    PyObject *VAR_1;
    PyObject *VAR_2;
    VAR_1 = FUNC_1("numpy.core._internal");
    if (VAR_1 == ((void*)0)) {
        return ((void*)0);
    }
    VAR_2 = FUNC_3(VAR_1, "_ctypes", "ON", VAR_0,
                              FUNC_2(FUNC_0(VAR_0)));
    FUNC_4(VAR_1);
    return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArrayObject ;


 int * FUNC_0 (int *,int *,int *) ;
 int * FUNC_1 (int *,char*,int *,int *) ;
 int * FUNC_2 (char*,char*,char*,...) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static PyObject *
FUNC_4(PyArrayObject *VAR_0, PyObject *VAR_1, PyArrayObject *VAR_2,
                          PyObject *VAR_3)
{
    if (VAR_2 == ((void*)0)) {
        return FUNC_1(VAR_3, "OO", VAR_0, VAR_1);
    }
    else {
        PyObject *VAR_4, *VAR_5;
        static PyObject *VAR_6 = ((void*)0);

        if (VAR_6 == ((void*)0)) {
            VAR_6 = FUNC_2("{s:s}", "casting", "unsafe");
            if (VAR_6 == ((void*)0)) {
                return ((void*)0);
            }
        }

        VAR_4 = FUNC_2("OOO", VAR_0, VAR_1, VAR_2);
        if (VAR_4 == ((void*)0)) {
            return ((void*)0);
        }

        VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_6);

        FUNC_3(VAR_4);

        return VAR_5;
    }
}

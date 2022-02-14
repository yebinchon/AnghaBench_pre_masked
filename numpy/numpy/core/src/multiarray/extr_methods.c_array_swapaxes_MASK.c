
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArrayObject ;


 int FUNC_0 (int *,char*,int*,int*) ;
 int * FUNC_1 (int *,int,int) ;

__attribute__((used)) static PyObject *
FUNC_2(PyArrayObject *VAR_0, PyObject *VAR_1)
{
    int VAR_2, VAR_3;

    if (!FUNC_0(VAR_1, "ii:swapaxes", &VAR_2, &VAR_3)) {
        return ((void*)0);
    }
    return FUNC_1(VAR_0, VAR_2, VAR_3);
}

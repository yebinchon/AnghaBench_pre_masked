
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArrayObject ;


 int FUNC_0 (int *,int *,char*,char**,int*,int ,int **) ;
 int VAR_0 ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int,int *) ;

__attribute__((used)) static PyObject *
FUNC_3(PyArrayObject *VAR_1, PyObject *VAR_2, PyObject *VAR_3)
{
    int VAR_4 = 0;
    PyArrayObject *VAR_5 = ((void*)0);
    static char *VAR_6[] = {"decimals", "out", ((void*)0)};

    if (!FUNC_0(VAR_2, VAR_3, "|iO&:round", VAR_6,
                                     &VAR_4,
                                     VAR_0, &VAR_5)) {
        return ((void*)0);
    }
    return FUNC_1((PyArrayObject *)FUNC_2(VAR_1, VAR_4, VAR_5));
}

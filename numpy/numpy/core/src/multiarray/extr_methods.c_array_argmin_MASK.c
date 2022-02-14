
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArrayObject ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,char*,char**,int ,int*,int ,int **) ;
 scalar_t__ FUNC_1 (int *,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static PyObject *
FUNC_3(PyArrayObject *VAR_3, PyObject *VAR_4, PyObject *VAR_5)
{
    int VAR_6 = VAR_0;
    PyArrayObject *VAR_7 = ((void*)0);
    static char *VAR_8[] = {"axis", "out", ((void*)0)};

    if (!FUNC_0(VAR_4, VAR_5, "|O&O&:argmin", VAR_8,
                                     VAR_1, &VAR_6,
                                     VAR_2, &VAR_7))
        return ((void*)0);

    return FUNC_2((PyArrayObject *)FUNC_1(VAR_3, VAR_6, VAR_7));
}

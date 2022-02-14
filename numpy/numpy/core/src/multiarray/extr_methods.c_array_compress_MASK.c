
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArrayObject ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,char*,char**,int **,int ,int*,int ,int **) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *,int,int *) ;
 int VAR_2 ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static PyObject *
FUNC_3(PyArrayObject *VAR_3, PyObject *VAR_4, PyObject *VAR_5)
{
    int VAR_6 = VAR_0;
    PyObject *VAR_7;
    PyArrayObject *VAR_8 = ((void*)0);
    static char *VAR_9[] = {"condition", "axis", "out", ((void*)0)};

    if (!FUNC_0(VAR_4, VAR_5, "O|O&O&:compress", VAR_9,
                                     &VAR_7,
                                     VAR_1, &VAR_6,
                                     VAR_2, &VAR_8)) {
        return ((void*)0);
    }
    return FUNC_2(
                (PyArrayObject *)FUNC_1(VAR_3, VAR_7, VAR_6, VAR_8));
}

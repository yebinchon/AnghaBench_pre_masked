
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArray_Descr ;
typedef int PyArrayObject ;


 int FUNC_0 (int *,int *,char*,char**,int*,int*,int*,int ,int **,int ,int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int,int,int,int,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static PyObject *
FUNC_5(PyArrayObject *VAR_2, PyObject *VAR_3, PyObject *VAR_4)
{
    int VAR_5 = 0, VAR_6 = 1, VAR_7 = 0;
    PyArray_Descr *VAR_8 = ((void*)0);
    PyArrayObject *VAR_9 = ((void*)0);
    int VAR_10;
    static char *VAR_11[] = {"offset", "axis1", "axis2", "dtype", "out", ((void*)0)};

    if (!FUNC_0(VAR_3, VAR_4, "|iiiO&O&:trace", VAR_11,
                                     &VAR_7,
                                     &VAR_5,
                                     &VAR_6,
                                     VAR_0, &VAR_8,
                                     VAR_1, &VAR_9)) {
        FUNC_3(VAR_8);
        return ((void*)0);
    }

    VAR_10 = FUNC_4(VAR_8);
    FUNC_3(VAR_8);
    return FUNC_1((PyArrayObject *)FUNC_2(VAR_2, VAR_7, VAR_5, VAR_6, VAR_10, VAR_9));
}

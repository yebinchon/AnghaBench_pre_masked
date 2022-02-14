
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArray_Descr ;
typedef int PyArrayObject ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,char*,char**,int ,int*,int ,int **,int ,int **) ;
 int VAR_1 ;
 int * FUNC_1 (int *,int,int,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static PyObject *
FUNC_4(PyArrayObject *VAR_4, PyObject *VAR_5, PyObject *VAR_6)
{
    int VAR_7 = VAR_0;
    PyArray_Descr *VAR_8 = ((void*)0);
    PyArrayObject *VAR_9 = ((void*)0);
    int VAR_10;
    static char *VAR_11[] = {"axis", "dtype", "out", ((void*)0)};

    if (!FUNC_0(VAR_5, VAR_6, "|O&O&O&:cumprod", VAR_11,
                                     VAR_1, &VAR_7,
                                     VAR_2, &VAR_8,
                                     VAR_3, &VAR_9)) {
        FUNC_2(VAR_8);
        return ((void*)0);
    }

    VAR_10 = FUNC_3(VAR_8);
    FUNC_2(VAR_8);
    return FUNC_1(VAR_4, VAR_7, VAR_10, VAR_9);
}

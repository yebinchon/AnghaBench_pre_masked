
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArray_Descr ;
typedef int PyArrayObject ;


 int FUNC_0 (int *,int *,char*,char**,int ,int **,int*) ;
 int VAR_0 ;
 int * FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static PyObject *
FUNC_3(PyArrayObject *VAR_1, PyObject *VAR_2, PyObject *VAR_3)
{

    PyArray_Descr *VAR_4 = ((void*)0);
    int VAR_5 = 0;
    static char *VAR_6[] = {"dtype", "offset", 0};

    if (!FUNC_0(VAR_2, VAR_3, "O&|i:getfield", VAR_6,
                                     VAR_0, &VAR_4,
                                     &VAR_5)) {
        FUNC_2(VAR_4);
        return ((void*)0);
    }

    return FUNC_1(VAR_1, VAR_4, VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_intp ;
typedef int PyUFuncObject ;
typedef int PyObject ;
typedef int PyArray_Descr ;
typedef int NPY_CASTING ;


 int FUNC_0 (char*,char*,int **) ;
 int FUNC_1 (int *,int *,int ,int *,int *,int ) ;

__attribute__((used)) static int
FUNC_2(
        PyUFuncObject *VAR_0,
        NPY_CASTING VAR_1,
        PyArray_Descr *VAR_2,
        PyArray_Descr *VAR_3,
        npy_intp VAR_4)
{
    static PyObject *VAR_5 = ((void*)0);
    FUNC_0(
        "numpy.core._exceptions", "_UFuncOutputCastingError",
        &VAR_5);
    if (VAR_5 == ((void*)0)) {
        return -1;
    }

    return FUNC_1(VAR_5, VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}

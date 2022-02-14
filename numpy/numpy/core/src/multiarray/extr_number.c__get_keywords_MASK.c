
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArray_Descr ;
typedef int PyArrayObject ;


 int VAR_0 ;
 int * FUNC_0 (int) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static PyObject *
FUNC_4(int VAR_1, PyArrayObject *VAR_2)
{
    PyObject *VAR_3 = ((void*)0);
    if (VAR_1 != VAR_0 || VAR_2 != ((void*)0)) {
        VAR_3 = FUNC_1();
        if (VAR_1 != VAR_0) {
            PyArray_Descr *VAR_4;
            VAR_4 = FUNC_0(VAR_1);
            if (VAR_4) {
                FUNC_2(VAR_3, "dtype", (PyObject *)VAR_4);
                FUNC_3(VAR_4);
            }
        }
        if (VAR_2 != ((void*)0)) {
            FUNC_2(VAR_3, "out", (PyObject *)VAR_2);
        }
    }
    return VAR_3;
}

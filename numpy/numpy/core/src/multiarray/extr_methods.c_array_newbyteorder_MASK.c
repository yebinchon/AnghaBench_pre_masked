
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArray_Descr ;
typedef int PyArrayObject ;


 char VAR_0 ;
 int FUNC_0 (int *,char*,int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char) ;
 int * FUNC_3 (int *,int *,int *) ;

__attribute__((used)) static PyObject *
FUNC_4(PyArrayObject *VAR_2, PyObject *VAR_3)
{
    char VAR_4 = VAR_0;
    PyArray_Descr *VAR_5;

    if (!FUNC_0(VAR_3, "|O&:newbyteorder", VAR_1,
                          &VAR_4)) {
        return ((void*)0);
    }
    VAR_5 = FUNC_2(FUNC_1(VAR_2), VAR_4);
    if (!VAR_5) {
        return ((void*)0);
    }
    return FUNC_3(VAR_2, VAR_5, ((void*)0));

}

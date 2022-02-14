
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArray_Descr ;


 char VAR_0 ;
 int FUNC_0 (int *,char*,int ,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,char) ;

__attribute__((used)) static PyObject *
FUNC_2(PyArray_Descr *VAR_2, PyObject *VAR_3)
{
    char VAR_4=VAR_0;

    if (!FUNC_0(VAR_3, "|O&:newbyteorder", VAR_1,
                &VAR_4)) {
        return ((void*)0);
    }
    return (PyObject *)FUNC_1(VAR_2, VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 int FUNC_0 (int *,int *,char*,char**) ;
 int * FUNC_1 (char*) ;
 void FUNC_2 () ;

__attribute__((used)) static PyObject *FUNC_3(PyObject *VAR_0, PyObject *VAR_1,
                          PyObject *VAR_2, void (*VAR_3)()) {
    PyObject *VAR_4 = ((void*)0);
    static char *VAR_5[] = {((void*)0)};
    if (!FUNC_0(VAR_1,VAR_2, "|:mod.init", VAR_5))


        goto capi_fail;
    (*VAR_3)();
    VAR_4 = FUNC_1("");
 capi_fail:
    return VAR_4;
}

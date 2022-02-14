
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * doc; } ;
typedef TYPE_1__ PyUFuncObject ;
typedef int PyObject ;


 int * FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int **,int ) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (char*,char*,int **) ;

__attribute__((used)) static PyObject *
FUNC_4(PyUFuncObject *VAR_0)
{
    static PyObject *VAR_1;
    PyObject *VAR_2;

    FUNC_3(
        "numpy.core._internal",
        "_ufunc_doc_signature_formatter",
        &VAR_1);

    if (VAR_1 == ((void*)0)) {
        return ((void*)0);
    }






    VAR_2 = FUNC_0(
        VAR_1, (PyObject *)VAR_0, ((void*)0));
    if (VAR_2 == ((void*)0)) {
        return ((void*)0);
    }
    if (VAR_0->doc != ((void*)0)) {
        FUNC_1(&VAR_2,
            FUNC_2("\n\n%s", VAR_0->doc));
    }
    return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArrayObject ;


 int FUNC_0 (int *,int *,char*,char**,int **,int **) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static PyObject *
FUNC_5(PyArrayObject *VAR_2, PyObject *VAR_3, PyObject *VAR_4)
{
    PyObject *VAR_5 = (PyObject *)VAR_2, *VAR_6, *VAR_7 = ((void*)0);
    PyArrayObject *VAR_8;
    char* VAR_9[] = {"b", "out", ((void*)0) };


    if (!FUNC_0(VAR_3, VAR_4, "O|O:dot", VAR_9, &VAR_6, &VAR_7)) {
        return ((void*)0);
    }

    if (VAR_7 != ((void*)0)) {
        if (VAR_7 == VAR_1) {
            VAR_7 = ((void*)0);
        }
        else if (!FUNC_1(VAR_7)) {
            FUNC_4(VAR_0,
                            "'out' must be an array");
            return ((void*)0);
        }
    }
    VAR_8 = (PyArrayObject *)FUNC_2(VAR_5, VAR_6, (PyArrayObject *)VAR_7);
    return FUNC_3(VAR_8);
}

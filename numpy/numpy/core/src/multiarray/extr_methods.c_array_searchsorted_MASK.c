
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArrayObject ;
typedef int NPY_SEARCHSIDE ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,char*,char**,int **,int ,int *,int **) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int ,int *) ;
 int VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static PyObject *
FUNC_3(PyArrayObject *VAR_3, PyObject *VAR_4, PyObject *VAR_5)
{
    static char *VAR_6[] = {"keys", "side", "sorter", ((void*)0)};
    PyObject *VAR_7;
    PyObject *VAR_8;
    NPY_SEARCHSIDE VAR_9 = VAR_0;

    VAR_8 = ((void*)0);
    if (!FUNC_0(VAR_4, VAR_5, "O|O&O:searchsorted",
                                     VAR_6, &VAR_7,
                                     VAR_1, &VAR_9, &VAR_8)) {
        return ((void*)0);
    }
    if (VAR_8 == VAR_2) {
        VAR_8 = ((void*)0);
    }
    return FUNC_1((PyArrayObject *)FUNC_2(VAR_3, VAR_7, VAR_9, VAR_8));
}

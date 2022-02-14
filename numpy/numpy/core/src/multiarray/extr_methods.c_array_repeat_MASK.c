
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArrayObject ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,char*,char**,int **,int ,int*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *,int) ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static PyObject *
FUNC_3(PyArrayObject *VAR_2, PyObject *VAR_3, PyObject *VAR_4) {
    PyObject *VAR_5;
    int VAR_6 = VAR_0;
    static char *VAR_7[] = {"repeats", "axis", ((void*)0)};

    if (!FUNC_0(VAR_3, VAR_4, "O|O&:repeat", VAR_7,
                                     &VAR_5,
                                     VAR_1, &VAR_6)) {
        return ((void*)0);
    }
    return FUNC_2((PyArrayObject *)FUNC_1(VAR_2, VAR_5, VAR_6));
}

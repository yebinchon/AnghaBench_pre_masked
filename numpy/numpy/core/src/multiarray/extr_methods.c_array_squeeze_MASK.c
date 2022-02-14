
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_bool ;
typedef int PyObject ;
typedef int PyArrayObject ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *,char*,char**,int **) ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *) ;
 int * VAR_2 ;

__attribute__((used)) static PyObject *
FUNC_5(PyArrayObject *VAR_3, PyObject *VAR_4, PyObject *VAR_5)
{
    PyObject *VAR_6 = ((void*)0);
    npy_bool VAR_7[VAR_0];

    static char *VAR_8[] = {"axis", ((void*)0)};
    if (!FUNC_0(VAR_4, VAR_5, "|O:squeeze", VAR_8,
                                     &VAR_6)) {
        return ((void*)0);
    }

    if (VAR_6 == ((void*)0) || VAR_6 == VAR_2) {
        return FUNC_3(VAR_3);
    }
    else {
        if (FUNC_1(VAR_6, FUNC_2(VAR_3),
                                            VAR_7) != VAR_1) {
            return ((void*)0);
        }

        return FUNC_4(VAR_3, VAR_7);
    }
}

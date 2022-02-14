
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArrayObject ;
typedef int NPY_CLIPMODE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,char*,char**,int **,int ,int*,int ,int **,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int,int *,int ) ;

__attribute__((used)) static PyObject *
FUNC_3(PyArrayObject *VAR_5, PyObject *VAR_6, PyObject *VAR_7)
{
    int VAR_8 = VAR_0;
    PyObject *VAR_9;
    PyArrayObject *VAR_10 = ((void*)0);
    NPY_CLIPMODE VAR_11 = VAR_1;
    static char *VAR_12[] = {"indices", "axis", "out", "mode", ((void*)0)};

    if (!FUNC_0(VAR_6, VAR_7, "O|O&O&O&:take", VAR_12,
                                     &VAR_9,
                                     VAR_2, &VAR_8,
                                     VAR_4, &VAR_10,
                                     VAR_3, &VAR_11))
        return ((void*)0);

    return FUNC_1((PyArrayObject *)
                FUNC_2(VAR_5, VAR_9, VAR_8, VAR_10, VAR_11));
}

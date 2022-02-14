
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 int * FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,int **) ;

__attribute__((used)) static inline PyObject *
FUNC_4(PyObject *VAR_0)
{
    static PyObject *VAR_1 = ((void*)0);
    static PyObject *VAR_2 = ((void*)0);
    FUNC_3("numpy.compat", "os_PathLike", &VAR_1);
    if (VAR_1 == ((void*)0)) {
        return ((void*)0);
    }
    FUNC_3("numpy.compat", "os_fspath", &VAR_2);
    if (VAR_2 == ((void*)0)) {
        return ((void*)0);
    }

    if (!FUNC_1(VAR_0, VAR_1)) {
        FUNC_2(VAR_0);
        return VAR_0;
    }
    return FUNC_0(VAR_2, VAR_0, ((void*)0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Py_ssize_t ;
typedef int PyArrayObject ;


 void* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static Py_ssize_t
FUNC_4(PyArrayObject *VAR_1, Py_ssize_t VAR_2, void **VAR_3)
{
    if (VAR_2 != 0) {
        FUNC_3(VAR_0,
                        "accessing non-existing array segment");
        return -1;
    }
    if (FUNC_1(VAR_1)) {
        *VAR_3 = FUNC_0(VAR_1);
        return FUNC_2(VAR_1);
    }
    FUNC_3(VAR_0, "array is not a single segment");
    *VAR_3 = ((void*)0);
    return -1;
}

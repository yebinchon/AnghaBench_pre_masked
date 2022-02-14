
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Py_ssize_t ;
typedef int PyArrayObject ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static Py_ssize_t
FUNC_2(PyArrayObject *VAR_0, Py_ssize_t *VAR_1)
{
    if (VAR_1) {
        *VAR_1 = FUNC_1(VAR_0);
    }
    if (FUNC_0(VAR_0)) {
        return 1;
    }
    if (VAR_1) {
        *VAR_1 = 0;
    }
    return 0;
}

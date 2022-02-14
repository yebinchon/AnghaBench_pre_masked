
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_intp ;
typedef int PyObject ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static int
FUNC_3(PyObject *VAR_0, npy_intp *VAR_1)
{
    *VAR_1 = FUNC_0(VAR_0);

    if ((*VAR_1) == -1 && FUNC_2()) {
        FUNC_1();
        return 0;
    }
    return 1;
}

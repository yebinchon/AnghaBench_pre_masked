
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(PyObject *VAR_0, char *VAR_1)
{
    PyObject *VAR_2;

    if (!(VAR_2 = FUNC_1(VAR_1)))
 return -1;

    if (FUNC_0(VAR_0, VAR_2))
    {
 FUNC_2(VAR_2);
 return -1;
    }

    FUNC_2(VAR_2);
    return 0;
}

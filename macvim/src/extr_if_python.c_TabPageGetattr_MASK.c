
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TabPageObject ;
typedef int PyObject ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 int * FUNC_2 (int ,int *,char*) ;
 int * FUNC_3 (int *,char*) ;
 int * FUNC_4 (int *,char*) ;
 int VAR_0 ;

__attribute__((used)) static PyObject *
FUNC_5(PyObject *VAR_1, char *VAR_2)
{
    PyObject *VAR_3;

    if ((VAR_3 = FUNC_4((TabPageObject *)(VAR_1), VAR_2)))
 return VAR_3;

    if (FUNC_0((TabPageObject *)(VAR_1)))
 return ((void*)0);

    VAR_3 = FUNC_3((TabPageObject *)(VAR_1), VAR_2);
    if (VAR_3 || FUNC_1())
 return VAR_3;
    else
 return FUNC_2(VAR_0, VAR_1, VAR_2);
}

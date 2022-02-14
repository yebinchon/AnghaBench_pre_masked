
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int *,char*,char**,...) ;
 int FUNC_4 () ;

PyObject *
FUNC_5(PyObject *VAR_1, PyObject *VAR_2)
{
 char *VAR_3;
 PyObject *VAR_4;
 PyObject *VAR_5 = ((void*)0);

 if (FUNC_3(VAR_2, "s", &VAR_3))
  return FUNC_1(VAR_3);

 FUNC_4();

 if (FUNC_3(VAR_2, "O|O", &VAR_4, &VAR_5))
  return FUNC_0(VAR_4, VAR_5);

 FUNC_2(VAR_0, "plpy.cursor expected a query or a plan");
 return ((void*)0);
}

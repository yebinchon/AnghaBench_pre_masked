
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int *,int *,long) ;
 int * FUNC_2 (char*,long) ;
 scalar_t__ FUNC_3 (int *,char*,char**,long*,...) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int *) ;

PyObject *
FUNC_6(PyObject *VAR_1, PyObject *VAR_2)
{
 char *VAR_3;
 PyObject *VAR_4;
 PyObject *VAR_5 = ((void*)0);
 long VAR_6 = 0;

 if (FUNC_3(VAR_2, "s|l", &VAR_3, &VAR_6))
  return FUNC_2(VAR_3, VAR_6);

 FUNC_4();

 if (FUNC_3(VAR_2, "O|Ol", &VAR_4, &VAR_5, &VAR_6) &&
  FUNC_5(VAR_4))
  return FUNC_1(VAR_4, VAR_5, VAR_6);

 FUNC_0(VAR_0, "plpy.execute expected a query or a plan");
 return ((void*)0);
}

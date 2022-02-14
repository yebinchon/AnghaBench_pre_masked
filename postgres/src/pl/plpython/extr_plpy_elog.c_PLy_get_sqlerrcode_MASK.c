
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 int FUNC_0 (char,char,char,char,char) ;
 int * FUNC_1 (int *,char*) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static void
FUNC_6(PyObject *VAR_0, int *VAR_1)
{
 PyObject *VAR_2;
 char *VAR_3;

 VAR_2 = FUNC_1(VAR_0, "sqlstate");
 if (VAR_2 == ((void*)0))
  return;

 VAR_3 = FUNC_2(VAR_2);
 if (FUNC_4(VAR_3) == 5 &&
  FUNC_5(VAR_3, "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ") == 5)
 {
  *VAR_1 = FUNC_0(VAR_3[0], VAR_3[1], VAR_3[2],
         VAR_3[3], VAR_3[4]);
 }

 FUNC_3(VAR_2);
}

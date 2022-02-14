
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 int FUNC_0 (int *,char*,int *) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * VAR_0 ;

__attribute__((used)) static bool
FUNC_4(PyObject *VAR_1, char *VAR_2, char *VAR_3)
{
 int VAR_4;
 PyObject *VAR_5;

 if (VAR_3 != ((void*)0))
 {
  VAR_5 = FUNC_1(VAR_3);
  if (!VAR_5)
   return 0;
 }
 else
 {
  VAR_5 = VAR_0;
  FUNC_3(VAR_0);
 }

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_5);
 FUNC_2(VAR_5);

 return VAR_4 != -1;
}

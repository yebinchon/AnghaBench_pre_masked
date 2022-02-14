
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int List ;
typedef int GucSource ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;

bool
FUNC_5(char **VAR_0, void **VAR_1, GucSource VAR_2)
{
 char *VAR_3;
 List *VAR_4;


 VAR_3 = FUNC_4(*VAR_0);


 if (!FUNC_1(VAR_3, ',', &VAR_4))
 {

  FUNC_0("List syntax is invalid.");
  FUNC_3(VAR_3);
  FUNC_2(VAR_4);
  return 0;
 }
 FUNC_3(VAR_3);
 FUNC_2(VAR_4);

 return 1;
}

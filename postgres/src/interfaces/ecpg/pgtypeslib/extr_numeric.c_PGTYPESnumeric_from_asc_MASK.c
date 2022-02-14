
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int numeric ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char**,int *) ;

numeric *
FUNC_3(char *VAR_0, char **VAR_1)
{
 numeric *VAR_2 = (numeric *) FUNC_1(sizeof(numeric));
 int VAR_3;

 char *VAR_4;
 char **VAR_5 = (VAR_1 != ((void*)0)) ? VAR_1 : &VAR_4;

 if (!VAR_2)
  return ((void*)0);

 VAR_3 = FUNC_2(VAR_0, VAR_5, VAR_2);
 if (VAR_3)
 {
  FUNC_0(VAR_2);
  return ((void*)0);
 }

 return VAR_2;
}

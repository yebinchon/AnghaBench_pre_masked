
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**) ;
 char* FUNC_1 (char const*,int) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,char) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char const*,char*,int) ;

void
FUNC_6(const char *VAR_0, char **VAR_1, char **VAR_2)
{
 *VAR_1 = ((void*)0);
 *VAR_2 = ((void*)0);




 if (FUNC_5(VAR_0, "pgextern.", FUNC_4("pgextern.")) == 0)
 {




  *VAR_2 = FUNC_3(VAR_0, '.');
  (*VAR_2)++;

  *VAR_1 = FUNC_1(VAR_0 + FUNC_4("pgextern."),
       *VAR_2 - VAR_0 - FUNC_4("pgextern.") - 1);
  FUNC_0(VAR_2);

  *VAR_2 = FUNC_2(*VAR_2);
 }
 else
 {
  *VAR_1 = ((void*)0);
  *VAR_2 = FUNC_2(VAR_0);
 }
}

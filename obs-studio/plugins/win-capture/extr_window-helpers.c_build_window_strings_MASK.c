
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char**) ;
 char** FUNC_2 (char const*,char,int) ;

extern void FUNC_3(const char *VAR_0, char **VAR_1, char **VAR_2,
     char **VAR_3)
{
 char **VAR_4;

 *VAR_1 = ((void*)0);
 *VAR_2 = ((void*)0);
 *VAR_3 = ((void*)0);

 if (!VAR_0) {
  return;
 }

 VAR_4 = FUNC_2(VAR_0, ':', 1);

 if (VAR_4 && VAR_4[0] && VAR_4[1] && VAR_4[2]) {
  *VAR_2 = FUNC_0(VAR_4[0]);
  *VAR_1 = FUNC_0(VAR_4[1]);
  *VAR_3 = FUNC_0(VAR_4[2]);
 }

 FUNC_1(VAR_4);
}

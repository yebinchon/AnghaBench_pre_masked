
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_results {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cmd_results* FUNC_0 (char*,char*) ;
 struct cmd_results* FUNC_1 (int,char const*,int ,int) ;
 struct cmd_results* FUNC_2 (int ,int *) ;
 char* FUNC_3 (int) ;

__attribute__((used)) static struct cmd_results *FUNC_4(char **VAR_2,
  const char *VAR_3, int VAR_4, char **VAR_5) {
 struct cmd_results *VAR_6 = ((void*)0);
 if ((VAR_6 = FUNC_1(VAR_4, VAR_3, VAR_1, 1))) {
  return VAR_6;
 }
 if (!*VAR_2 && !(*VAR_2 = FUNC_3(10))) {
  return ((void*)0);
 }
 VAR_6 = FUNC_0(*VAR_2, VAR_5[0]);
 if (VAR_6) {
  return VAR_6;
 }
 return FUNC_2(VAR_0, ((void*)0));
}

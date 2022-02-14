
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_results {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cmd_results* FUNC_0 (char*,char*) ;
 struct cmd_results* FUNC_1 (int ,char*,...) ;
 char* FUNC_2 (int) ;

__attribute__((used)) static struct cmd_results *FUNC_3(char ***VAR_2,
  const char *VAR_3, int VAR_4, char **VAR_5) {
 struct cmd_results *VAR_6 = ((void*)0);
 if (VAR_4 != 3) {
  return FUNC_1(VAR_0,
    "Command '%s' requires exactly three color values", VAR_3);
 }
 for (size_t VAR_7 = 0; VAR_7 < 3; VAR_7++) {
  if (!*VAR_2[VAR_7] && !(*(VAR_2[VAR_7]) = FUNC_2(10))) {
   return ((void*)0);
  }
  VAR_6 = FUNC_0(*(VAR_2[VAR_7]), VAR_5[VAR_7]);
  if (VAR_6) {
   return VAR_6;
  }
 }
 return FUNC_1(VAR_1, ((void*)0));
}

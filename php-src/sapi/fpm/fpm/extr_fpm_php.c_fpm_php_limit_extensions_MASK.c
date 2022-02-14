
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char** VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 size_t FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,char*) ;

int FUNC_3(char *VAR_2)
{
 char **VAR_3;
 size_t VAR_4;

 if (!VAR_2 || !VAR_1) {
  return 0;
 }

 VAR_3 = VAR_1;
 VAR_4 = FUNC_1(VAR_2);
 while (VAR_3 && *VAR_3) {
  size_t VAR_5 = FUNC_1(*VAR_3);
  if (VAR_4 > VAR_5) {
   char *VAR_6 = VAR_2 + VAR_4 - VAR_5;
   if (FUNC_0(*VAR_3, VAR_6) == 0) {
    return 0;
   }
  }
  VAR_3++;
 }


 FUNC_2(VAR_0, "Access to the script '%s' has been denied (see security.limit_extensions)", VAR_2);
 return 1;
}

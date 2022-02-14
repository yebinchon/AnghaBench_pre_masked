
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_results {int dummy; } ;


 int VAR_0 ;
 struct cmd_results* FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char const*) ;

struct cmd_results *FUNC_4(char *VAR_1, const char *VAR_2) {
 int VAR_3 = FUNC_3(VAR_2);
 if (VAR_3 != 7 && VAR_3 != 9) {
  return FUNC_0(VAR_0,
    "Invalid color definition %s", VAR_2);
 }
 if (VAR_2[0] != '#') {
  return FUNC_0(VAR_0,
    "Invalid color definition %s", VAR_2);
 }
 for (int VAR_4 = 1; VAR_4 < VAR_3; ++VAR_4) {
  if (!FUNC_1(VAR_2[VAR_4])) {
   return FUNC_0(VAR_0,
     "Invalid color definition %s", VAR_2);
  }
 }
 FUNC_2(VAR_1, VAR_2);

 if (VAR_3 == 7) {
  VAR_1[7] = 'f';
  VAR_1[8] = 'f';
 }
 VAR_1[9] = '\0';
 return ((void*)0);
}

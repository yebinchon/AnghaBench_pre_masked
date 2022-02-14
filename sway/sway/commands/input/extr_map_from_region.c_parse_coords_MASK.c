
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (char const*,char**) ;

__attribute__((used)) static bool FUNC_1(const char *VAR_0, double *VAR_1, double *VAR_2, bool *VAR_3) {
 *VAR_3 = 0;

 char *VAR_4;
 *VAR_1 = FUNC_0(VAR_0, &VAR_4);
 if (VAR_4[0] != 'x') {
  return 0;
 }
 ++VAR_4;

 *VAR_2 = FUNC_0(VAR_4, &VAR_4);
 if (VAR_4[0] == 'm') {

  if (VAR_4[1] != 'm') {
   return 0;
  }
  *VAR_3 = 1;
  VAR_4 = &VAR_4[2];
 }
 if (VAR_4[0] != '\0') {
  return 0;
 }

 return 1;
}

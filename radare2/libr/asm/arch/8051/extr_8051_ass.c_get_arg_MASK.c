
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static bool FUNC_0(char const*VAR_0, int VAR_1, char * VAR_2)
{
 char* VAR_3 = VAR_2;
 bool VAR_4 = 0;
 bool VAR_5 = 0;
 VAR_1 -= 1;
 if (!VAR_0) return 0;
 while (VAR_1 && *VAR_0 && *VAR_0 != '\n' && *VAR_0 != '\r') {
  if (*VAR_0 == '\'') VAR_5 = !VAR_5;
  if (!VAR_5) {
   if (*VAR_0 == ';') {
    return 0;
   }
   if (*VAR_0 == ',') {
    VAR_0 += 1;
    VAR_1 -= 1;
    continue;
   }
  }
  VAR_0 += 1;
 }
 if (!*VAR_0 || *VAR_0 == '\n' || *VAR_0 == '\r' || VAR_5) {
  return 0;
 }

 while (*VAR_0 && (*VAR_0 == ' ' || *VAR_0 == '\t')) {
  VAR_0 += 1;
 }

 while (*VAR_0 && *VAR_0 != '\n' && *VAR_0 != '\r') {
  if (*VAR_0 == '\'') VAR_5 = !VAR_5;
  if (!VAR_5) {
   if (*VAR_0 == ';' || *VAR_0 == ',') {
    break;
   }
   if (*VAR_0 != ' ' && *VAR_0 != '\t') {
    VAR_3 = VAR_2;
    VAR_4 = 1;
   }
   *VAR_2 = *VAR_0;
   VAR_2 += 1;
   VAR_0 += 1;
  }
 }

 if (VAR_5) return 0;

 if (!VAR_4) {
  *VAR_2 = '\0';
  return 0;
 }
 *(VAR_3 + 1) = '\0';
 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
bool FUNC_0(const char *VAR_0, const char *VAR_1)
{
 const char *VAR_2 = VAR_1;
 const char *VAR_3 = VAR_0;
 bool VAR_4 = 0;

 while (*VAR_2) {
  switch (*VAR_3) {
  case '?':
   VAR_2++;
   VAR_3++;
   break;
  case '*':
   VAR_4 = 1;
   VAR_1 = VAR_2;
   if (!*++VAR_3)
    return 1;
   VAR_0 = VAR_3;
   break;
  default:
   if (*VAR_2 == *VAR_3) {
    VAR_2++;
    VAR_3++;
   } else {
    if (!VAR_4)
     return 0;
    VAR_1++;
    VAR_2 = VAR_1;
    VAR_3 = VAR_0;
   }
   break;
  }
 }

 if (*VAR_3 == '*')
  ++VAR_3;
 return !*VAR_3;
}

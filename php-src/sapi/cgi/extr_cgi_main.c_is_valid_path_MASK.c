
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0)
{
 const char *VAR_1 = VAR_0;

 if (FUNC_1(!VAR_1)) {
  return 0;
 }
 if (FUNC_1(*VAR_1 == '.') && *(VAR_1+1) == '.' && (!*(VAR_1+2) || FUNC_0(*(VAR_1+2)))) {
  return 0;
 }
 while (*VAR_1) {
  if (FUNC_0(*VAR_1)) {
   VAR_1++;
   if (FUNC_1(*VAR_1 == '.')) {
    VAR_1++;
    if (FUNC_1(*VAR_1 == '.')) {
     VAR_1++;
     if (FUNC_1(!*VAR_1) || FUNC_1(FUNC_0(*VAR_1))) {
      return 0;
     }
    }
   }
  }
  VAR_1++;
 }
 return 1;
}

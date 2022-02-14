
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *
FUNC_0(char *const VAR_0, const char *const VAR_1, size_t VAR_2)
{
 register char *VAR_3;
 register const char *VAR_4;
 register char VAR_5;
 char *VAR_6;
 register size_t VAR_7;

 VAR_3 = VAR_0;
 if (VAR_2 != 0) {
  VAR_4 = VAR_1;






  for (VAR_7=1; VAR_7<VAR_2; VAR_7++) {
   VAR_5 = *VAR_4++;
   if (VAR_5 == '\0') {
    VAR_6 = VAR_3;
    *VAR_3++ = VAR_5;





    return VAR_6;
   }
   *VAR_3++ = VAR_5;
  }



  *VAR_3 = '\0';
  return (VAR_3);
 } else {
  *VAR_3 = 0;
 }
 return (VAR_3);
}

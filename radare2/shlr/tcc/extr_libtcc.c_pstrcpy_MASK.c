
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *FUNC_0(char *VAR_0, int VAR_1, const char *VAR_2)
{
 char *VAR_3, *VAR_4;
 int VAR_5;

 if (VAR_1 > 0) {
  VAR_3 = VAR_0;
  VAR_4 = VAR_0 + VAR_1 - 1;
  while (VAR_3 < VAR_4) {
   VAR_5 = *VAR_2++;
   if (VAR_5 == '\0') {
    break;
   }
   *VAR_3++ = VAR_5;
  }
  *VAR_3 = '\0';
 }
 return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
size_t FUNC_0(const char *VAR_0, const char *VAR_1)
{
 const char *VAR_2;
 const char *VAR_3;
 size_t VAR_4 = 0;

 for (VAR_2 = VAR_0; *VAR_2 != '\0'; ++VAR_2) {
  for (VAR_3 = VAR_1; *VAR_3 != '\0'; ++VAR_3) {
   if (*VAR_2 == *VAR_3)
    break;
  }
  if (*VAR_3 == '\0')
   return VAR_4;
  ++VAR_4;
 }
 return VAR_4;
}

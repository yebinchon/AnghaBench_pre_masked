
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *FUNC_0(const char *VAR_0, const char *VAR_1)
{
 const char *VAR_2, *VAR_3;

 for (VAR_2 = VAR_0; *VAR_2 != '\0'; ++VAR_2) {
  for (VAR_3 = VAR_1; *VAR_3 != '\0'; ++VAR_3) {
   if (*VAR_2 == *VAR_3)
    return (char *)VAR_2;
  }
 }
 return ((void*)0);
}

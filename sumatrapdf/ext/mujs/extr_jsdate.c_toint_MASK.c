
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const char **VAR_0, int VAR_1, int *VAR_2)
{
 const char *VAR_3 = *VAR_0;
 *VAR_2 = 0;
 while (VAR_1--) {
  if (*VAR_3 < '0' || *VAR_3 > '9')
   return 0;
  *VAR_2 = *VAR_2 * 10 + (*VAR_3++ - '0');
 }
 *VAR_0 = VAR_3;
 return 1;
}

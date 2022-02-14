
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *
FUNC_0(const char *VAR_0, int *VAR_1)
{
 int VAR_2 = 1;
 int VAR_3 = 0;

 if (*VAR_0 == '-')
 {
  VAR_0++;

  if (*VAR_0 == '\0')
   return ((void*)0);
  VAR_2 = -1;
 }


 while (*VAR_0 >= '0' && *VAR_0 <= '9')
  VAR_3 = VAR_3 * 10 + (*VAR_0++ - '0');


 if (*VAR_0 == '\0')
  return ((void*)0);

 VAR_3 *= VAR_2;
 *VAR_1 = VAR_3;
 return VAR_0;
}

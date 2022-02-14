
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (char const*) ;

const char *
FUNC_1(float *VAR_0, const char *VAR_1)
{
 const char *VAR_2 = VAR_1;
 if (*VAR_2 == '-')
  ++VAR_2;
 while (*VAR_2 >= '0' && *VAR_2 <= '9')
  ++VAR_2;
 if (*VAR_2 == '.') {
  ++VAR_2;
  while (*VAR_2 >= '0' && *VAR_2 <= '9')
   ++VAR_2;
 }
 if (*VAR_2 == 'e' || *VAR_2 == 'E') {
  ++VAR_2;
  if (*VAR_2 == '+' || *VAR_2 == '-')
   ++VAR_2;
  while (*VAR_2 >= '0' && *VAR_2 <= '9')
   ++VAR_2;
 }
 *VAR_0 = FUNC_0(VAR_1);
 return VAR_2;
}

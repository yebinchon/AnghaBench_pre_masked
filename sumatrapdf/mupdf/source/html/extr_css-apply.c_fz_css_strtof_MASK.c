
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static float
FUNC_0(char *VAR_0, char **VAR_1)
{
 float VAR_2 = 1;
 float VAR_3 = 0;
 float VAR_4 = 0;
 float VAR_5 = 1;

 if (*VAR_0 == '-')
 {
  VAR_2 = -1;
  ++VAR_0;
 }

 while (*VAR_0 >= '0' && *VAR_0 <= '9')
 {
  VAR_3 = VAR_3 * 10 + (*VAR_0 - '0');
  ++VAR_0;
 }

 if (*VAR_0 == '.')
 {
  ++VAR_0;
  while (*VAR_0 >= '0' && *VAR_0 <= '9')
  {
   VAR_4 = VAR_4 * 10 + (*VAR_0 - '0');
   VAR_5 = VAR_5 * 10;
   ++VAR_0;
  }
  VAR_3 += VAR_4 / VAR_5;
 }

 if (VAR_1)
  *VAR_1 = VAR_0;

 return VAR_2 * VAR_3;
}

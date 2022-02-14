
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static float FUNC_0(char *VAR_0)
{
 int VAR_1 = 0;
 int VAR_2 = 0;

 while (*VAR_0 == '-')
 {
  VAR_1 = 1;
  ++VAR_0;
 }
 while (*VAR_0 == '+')
 {
  ++VAR_0;
 }

 while (*VAR_0 >= '0' && *VAR_0 <= '9')
 {




  VAR_2 = VAR_2 * 10 + (*VAR_0 - '0');
  ++VAR_0;
 }

 if (*VAR_0 == '.')
 {
  float VAR_3 = VAR_2;
  float VAR_4 = 0;
  float VAR_5 = 1;
  ++VAR_0;
  while (*VAR_0 >= '0' && *VAR_0 <= '9')
  {
   VAR_4 = 10 * VAR_4 + (*VAR_0 - '0');
   VAR_5 = 10 * VAR_5;
   ++VAR_0;
  }
  VAR_3 += VAR_4 / VAR_5;
  return VAR_1 ? -VAR_3 : VAR_3;
 }
 else
 {
  return VAR_1 ? -VAR_2 : VAR_2;
 }
}

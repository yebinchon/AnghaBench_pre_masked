
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char) ;

__attribute__((used)) static char *
FUNC_2(char *VAR_0, int16 *VAR_1, bool *VAR_2)
{
 *VAR_1 = 0;
 *VAR_2 = 0;

 if (!FUNC_1(VAR_0, ':'))
  return VAR_0;

 VAR_0++;
 while (*VAR_0 && FUNC_0(VAR_0) == 1)
 {
  switch (*VAR_0)
  {
   case 'a':
   case 'A':
    *VAR_1 |= 1 << 3;
    break;
   case 'b':
   case 'B':
    *VAR_1 |= 1 << 2;
    break;
   case 'c':
   case 'C':
    *VAR_1 |= 1 << 1;
    break;
   case 'd':
   case 'D':
    *VAR_1 |= 1;
    break;
   case '*':
    *VAR_2 = 1;
    break;
   default:
    return VAR_0;
  }
  VAR_0++;
 }

 return VAR_0;
}

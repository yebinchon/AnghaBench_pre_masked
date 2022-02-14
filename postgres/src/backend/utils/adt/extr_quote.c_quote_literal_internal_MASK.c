
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char const,int) ;

__attribute__((used)) static size_t
FUNC_1(char *VAR_1, const char *VAR_2, size_t VAR_3)
{
 const char *VAR_4;
 char *VAR_5 = VAR_1;

 for (VAR_4 = VAR_2; VAR_4 < VAR_2 + VAR_3; VAR_4++)
 {
  if (*VAR_4 == '\\')
  {
   *VAR_1++ = VAR_0;
   break;
  }
 }

 *VAR_1++ = '\'';
 while (VAR_3-- > 0)
 {
  if (FUNC_0(*VAR_2, 1))
   *VAR_1++ = *VAR_2;
  *VAR_1++ = *VAR_2++;
 }
 *VAR_1++ = '\'';

 return VAR_1 - VAR_5;
}

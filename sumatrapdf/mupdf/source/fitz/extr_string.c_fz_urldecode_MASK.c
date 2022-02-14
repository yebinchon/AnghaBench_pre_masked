
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (int ) ;

char *
FUNC_2(char *VAR_0)
{
 char *VAR_1 = VAR_0;
 char *VAR_2 = VAR_0;
 while (*VAR_1)
 {
  int VAR_3 = (unsigned char) *VAR_1++;
  if (VAR_3 == '%' && FUNC_0(VAR_1[0]) && FUNC_0(VAR_1[1]))
  {
   int VAR_4 = FUNC_1(*VAR_1++);
   int VAR_5 = FUNC_1(*VAR_1++);
   *VAR_2++ = VAR_4 << 4 | VAR_5;
  }
  else
  {
   *VAR_2++ = VAR_3;
  }
 }
 *VAR_2 = 0;
 return VAR_0;
}

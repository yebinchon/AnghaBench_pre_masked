
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;

__attribute__((used)) static unsigned
FUNC_1(char *VAR_0, char *VAR_1)
{
 unsigned VAR_2 = 0;

 while (*VAR_1)
 {
  if (FUNC_0((unsigned char) *VAR_1))
  {
   *VAR_0++ = *VAR_1;
   VAR_2++;
  }
  VAR_1++;
 }
 *VAR_0 = '\0';
 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;

__attribute__((used)) static unsigned
FUNC_1(char *VAR_0, unsigned VAR_1)
{
 unsigned VAR_2 = 0,
    VAR_3 = 0;
 unsigned VAR_4 = 0;

 if (*VAR_0 == 'M')
 {
  VAR_3 = 3;
  VAR_4 = 1;
 }
 while (*VAR_0 && VAR_1 > 1)
 {
  if (FUNC_0((unsigned char) *VAR_0))
  {
   if (VAR_4++ % 2)
    VAR_3 += *VAR_0 - '0';
   else
    VAR_2 += *VAR_0 - '0';
   VAR_1--;
  }
  VAR_0++;
 }
 VAR_2 = (VAR_2 + 3 * VAR_3) % 10;
 if (VAR_2 != 0)
  VAR_2 = 10 - VAR_2;
 return VAR_2;
}

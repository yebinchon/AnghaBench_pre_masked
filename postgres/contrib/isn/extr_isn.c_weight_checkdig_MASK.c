
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;

__attribute__((used)) static unsigned
FUNC_1(char *VAR_0, unsigned VAR_1)
{
 unsigned VAR_2 = 0;

 while (*VAR_0 && VAR_1 > 1)
 {
  if (FUNC_0((unsigned char) *VAR_0))
  {
   VAR_2 += VAR_1-- * (*VAR_0 - '0');
  }
  VAR_0++;
 }
 VAR_2 = VAR_2 % 11;
 if (VAR_2 != 0)
  VAR_2 = 11 - VAR_2;
 return VAR_2;
}

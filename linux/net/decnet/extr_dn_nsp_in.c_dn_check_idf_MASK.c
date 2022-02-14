
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(unsigned char **VAR_0, int *VAR_1, unsigned char VAR_2, unsigned char VAR_3)
{
 unsigned char *VAR_4 = *VAR_0;
 unsigned char VAR_5 = *VAR_4++;

 (*VAR_1)--;
 if (VAR_5 > VAR_2)
  return -1;
 if ((VAR_5 + VAR_3) > *VAR_1)
  return -1;

 *VAR_1 -= VAR_5;
 *VAR_0 = VAR_4 + VAR_5;
 return 0;
}

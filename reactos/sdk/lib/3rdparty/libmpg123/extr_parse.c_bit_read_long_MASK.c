
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned long FUNC_0(unsigned char *VAR_0, int *VAR_1)
{
 unsigned long VAR_2 =
  (((unsigned long) VAR_0[*VAR_1]) << 24)
 | (((unsigned long) VAR_0[*VAR_1+1]) << 16)
 | (((unsigned long) VAR_0[*VAR_1+2]) << 8)
 | ((unsigned long) VAR_0[*VAR_1+3]);
 *VAR_1 += 4;
 return VAR_2;
}

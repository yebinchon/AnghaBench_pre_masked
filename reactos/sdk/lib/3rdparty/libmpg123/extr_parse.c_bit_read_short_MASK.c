
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned short FUNC_0(unsigned char *VAR_0, int *VAR_1)
{
 unsigned short VAR_2 =
  (((unsigned short) VAR_0[*VAR_1] ) << 8)
 | ((unsigned short) VAR_0[*VAR_1+1]);
 *VAR_1 += 2;
 return VAR_2;
}

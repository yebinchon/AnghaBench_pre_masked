
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void
FUNC_0 (int *VAR_0, int *VAR_1)
{
  register unsigned char VAR_2 = *VAR_0;
  register unsigned char VAR_3 = *VAR_1;
  register int VAR_4 = VAR_3 < 159;
  register int VAR_5 = VAR_2 < 160 ? 112 : 176;
  register int VAR_6 = VAR_4 ? (31 + (VAR_3 > 127)) : 126;

  *VAR_0 = ((VAR_2 - VAR_5) << 1) - VAR_4;
  *VAR_1 -= VAR_6;
}

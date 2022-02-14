
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void
FUNC_0(long VAR_0, int VAR_1, int VAR_2, long *VAR_3, long *VAR_4)
{
 if (VAR_0 % VAR_1)
  VAR_0 += VAR_1 - (VAR_0 % VAR_1);
 if (VAR_3)
  *VAR_3 = VAR_0;
 VAR_0 += VAR_2;
 if (VAR_4)
  *VAR_4 = VAR_0;
}

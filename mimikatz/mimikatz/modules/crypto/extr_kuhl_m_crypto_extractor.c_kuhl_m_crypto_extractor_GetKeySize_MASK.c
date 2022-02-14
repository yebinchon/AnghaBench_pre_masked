
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;



DWORD FUNC_0(DWORD VAR_0)
{
  DWORD VAR_1, VAR_2, VAR_3;
  VAR_1 = ((VAR_0 + 7) >> 3) & 7;
  VAR_2 = (VAR_0 + 15) >> 4;
  VAR_3 = 8 - VAR_1;
  if(VAR_1)
    VAR_3 += 8;
  return 10 * ((VAR_3 >> 1) + VAR_2 + 2);
}

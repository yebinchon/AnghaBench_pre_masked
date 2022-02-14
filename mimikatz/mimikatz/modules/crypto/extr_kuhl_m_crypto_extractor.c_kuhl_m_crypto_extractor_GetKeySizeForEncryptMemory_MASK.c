
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;
typedef int BYTE ;



DWORD FUNC_0(DWORD VAR_0)
{
  DWORD VAR_1;
  VAR_1 = VAR_0 - 20;
  if (((BYTE) VAR_0 - 20) & 0xf)
    VAR_1 += 16 - (((BYTE) VAR_0 - 20) & 0xf);
  return VAR_1 + 20;
}

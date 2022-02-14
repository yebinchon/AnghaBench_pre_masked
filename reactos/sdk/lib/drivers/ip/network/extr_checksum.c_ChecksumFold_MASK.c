
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;



ULONG FUNC_0(
  ULONG VAR_0)
{

  while (VAR_0 >> 16)
    {
      VAR_0 = (VAR_0 & 0xFFFF) + (VAR_0 >> 16);
    }

  return VAR_0;
}

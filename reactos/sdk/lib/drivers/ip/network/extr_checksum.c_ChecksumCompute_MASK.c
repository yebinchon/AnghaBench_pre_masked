
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG_PTR ;
typedef int ULONG ;
typedef int UINT ;
typedef scalar_t__ PVOID ;
typedef scalar_t__* PUSHORT ;
typedef scalar_t__* PUCHAR ;



ULONG FUNC_0(
  PVOID VAR_0,
  UINT VAR_1,
  ULONG VAR_2)
{
  register ULONG VAR_3 = VAR_2;

  while (VAR_1 > 1)
    {
      VAR_3 += *(PUSHORT)VAR_0;
      VAR_1 -= 2;
      VAR_0 = (PVOID)((ULONG_PTR) VAR_0 + 2);
    }


  if (VAR_1 > 0)
    {
      VAR_3 += *(PUCHAR)VAR_0;
    }

  return VAR_3;
}

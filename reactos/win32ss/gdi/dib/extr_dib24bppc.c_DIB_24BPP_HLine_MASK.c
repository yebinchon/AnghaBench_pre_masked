
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef int ULONG_PTR ;
typedef int ULONG ;
struct TYPE_3__ {int lDelta; scalar_t__ pvScan0; } ;
typedef TYPE_1__ SURFOBJ ;
typedef int* PUSHORT ;
typedef int* PULONG ;
typedef int* PBYTE ;
typedef int LONG ;



VOID
FUNC_0(SURFOBJ *VAR_0, LONG VAR_1, LONG VAR_2, LONG VAR_3, ULONG VAR_4)
{
  PBYTE VAR_5 = (PBYTE)VAR_0->pvScan0 + VAR_3 * VAR_0->lDelta + (VAR_1 << 1) + VAR_1;
  ULONG VAR_6 = VAR_2 - VAR_1;

  if (VAR_6 < 8)
  {

    while (VAR_6--)
    {
      *(PUSHORT)(VAR_5) = VAR_4;
      VAR_5 += 2;
      *(VAR_5) = VAR_4 >> 16;
      VAR_5 += 1;
    }
  }
  else
  {
    ULONG VAR_7[3];
    ULONG VAR_8;


    while (0 != ((ULONG_PTR) VAR_5 & 0x3))
    {
      *(PUSHORT)(VAR_5) = VAR_4;
      VAR_5 += 2;
      *(VAR_5) = VAR_4 >> 16;
      VAR_5 += 1;
      VAR_6--;
    }
    VAR_4 = VAR_4 & 0xffffff;
    VAR_7[0] = VAR_4 | (VAR_4 << 24);
    VAR_7[1] = (VAR_4 >> 8) | (VAR_4 << 16);
    VAR_7[2] = (VAR_4 << 8) | (VAR_4 >> 16);
    VAR_8 = VAR_6 / 4;
    do
    {
      *(PULONG)VAR_5 = VAR_7[0];
      VAR_5 += 4;
      *(PULONG)VAR_5 = VAR_7[1];
      VAR_5 += 4;
      *(PULONG)VAR_5 = VAR_7[2];
      VAR_5 += 4;
    }
    while (0 != --VAR_8);

    VAR_6 = VAR_6 & 0x03;
    while (0 != VAR_6--)
    {
      *(PUSHORT)(VAR_5) = VAR_4;
      VAR_5 += 2;
      *(VAR_5) = VAR_4 >> 16;
      VAR_5 += 1;
    }
  }
}

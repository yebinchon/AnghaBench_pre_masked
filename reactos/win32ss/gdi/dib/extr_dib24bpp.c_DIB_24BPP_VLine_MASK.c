
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef int ULONG ;
struct TYPE_3__ {int lDelta; scalar_t__ pvScan0; } ;
typedef TYPE_1__ SURFOBJ ;
typedef int* PUSHORT ;
typedef scalar_t__* PBYTE ;
typedef int LONG ;
typedef scalar_t__ BYTE ;



VOID
FUNC_0(SURFOBJ *VAR_0, LONG VAR_1, LONG VAR_2, LONG VAR_3, ULONG VAR_4)
{
  PBYTE VAR_5 = (PBYTE)VAR_0->pvScan0 + VAR_2 * VAR_0->lDelta + (VAR_1 << 1) + VAR_1;
  LONG VAR_6 = VAR_0->lDelta;

  VAR_4 &= 0xFFFFFF;
  while(VAR_2++ < VAR_3)
  {
    *(PUSHORT)(VAR_5) = VAR_4 & 0xFFFF;
    *(VAR_5 + 2) = (BYTE)(VAR_4 >> 16);

    VAR_5 += VAR_6;
  }
}


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
typedef int* PBYTE ;
typedef int LONG ;



VOID
FUNC_0(SURFOBJ *VAR_0, LONG VAR_1, LONG VAR_2, ULONG VAR_3)
{
  PBYTE VAR_4 = (PBYTE)VAR_0->pvScan0 + (VAR_2 * VAR_0->lDelta) + (VAR_1 << 1) + VAR_1;
  *(PUSHORT)(VAR_4) = VAR_3 & 0xFFFF;
  *(VAR_4 + 2) = (VAR_3 >> 16) & 0xFF;
}

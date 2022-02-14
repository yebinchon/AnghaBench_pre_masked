
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ addr ;
typedef int ULONG ;
struct TYPE_3__ {int lDelta; scalar_t__ pvScan0; } ;
typedef TYPE_1__ SURFOBJ ;
typedef int * PUSHORT ;
typedef int* PBYTE ;
typedef int LONG ;



ULONG
FUNC_0(SURFOBJ *VAR_0, LONG VAR_1, LONG VAR_2)
{
  PBYTE VAR_3 = (PBYTE)VAR_0->pvScan0 + VAR_2 * VAR_0->lDelta + (VAR_1 << 1) + VAR_1;
  return *(PUSHORT)(VAR_3) + (*(VAR_3 + 2) << 16);
}

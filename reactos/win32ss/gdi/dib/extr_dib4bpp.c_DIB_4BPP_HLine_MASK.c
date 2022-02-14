
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef int ULONG ;
struct TYPE_3__ {int lDelta; scalar_t__ pvScan0; } ;
typedef TYPE_1__ SURFOBJ ;
typedef int* PBYTE ;
typedef int LONG ;
typedef int BYTE ;


 int* VAR_0 ;

VOID
FUNC_0(SURFOBJ *VAR_1, LONG VAR_2, LONG VAR_3, LONG VAR_4, ULONG VAR_5)
{
  PBYTE VAR_6 = (PBYTE)VAR_1->pvScan0 + (VAR_2>>1) + VAR_4 * VAR_1->lDelta;
  LONG VAR_7 = VAR_2;

  while(VAR_7 < VAR_3)
  {
    *VAR_6 = (*VAR_6 & VAR_0[VAR_2&1]) | (BYTE)(VAR_5 << ((1-(VAR_2&1))<<2));
    if((++VAR_2 & 1) == 0)
      ++VAR_6;
    ++VAR_7;
  }
}

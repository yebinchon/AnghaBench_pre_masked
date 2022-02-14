
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
FUNC_0(SURFOBJ *VAR_1, LONG VAR_2, LONG VAR_3, ULONG VAR_4)
{
   PBYTE VAR_5 = (PBYTE)VAR_1->pvScan0 + (VAR_2>>1) + VAR_3 * VAR_1->lDelta;
   *VAR_5 = (*VAR_5 & VAR_0[VAR_2&1]) | (BYTE)(VAR_4 << ((1-(VAR_2&1))<<2));
}

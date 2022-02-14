
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_4__ {scalar_t__ ApicId; } ;
struct TYPE_3__ {size_t IrqType; scalar_t__ DstApicId; size_t DstApicInt; } ;


 TYPE_2__* VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static ULONG
FUNC_0(ULONG VAR_4,
    ULONG VAR_5,
    ULONG VAR_6)
{
   ULONG VAR_7;

   for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
   {
      if (VAR_2[VAR_7].IrqType == VAR_6 &&
   (VAR_2[VAR_7].DstApicId == VAR_0[VAR_4].ApicId || VAR_2[VAR_7].DstApicId == VAR_3) &&
   VAR_2[VAR_7].DstApicInt == VAR_5)
      {
         return VAR_7;
      }
   }
   return -1;
}

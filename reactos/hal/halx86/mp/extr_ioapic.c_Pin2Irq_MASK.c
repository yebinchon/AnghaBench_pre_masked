
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_4__ {size_t EntryCount; } ;
struct TYPE_3__ {size_t SrcBusId; size_t DstApicInt; size_t SrcBusIrq; } ;


 int* VAR_0 ;
 int FUNC_0 (char*,...) ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;





__attribute__((used)) static ULONG
FUNC_1(ULONG VAR_3,
 ULONG VAR_4,
 ULONG VAR_5)
{
   ULONG VAR_6, VAR_7;
   ULONG VAR_8 = VAR_2[VAR_3].SrcBusId;




   if (VAR_2[VAR_3].DstApicInt != VAR_5)
   {
      FUNC_0("broken BIOS or MPTABLE parser, ayiee!!\n");
   }

   switch (VAR_0[VAR_8])
   {
      case 130:
      case 131:
      case 129:
 VAR_6 = VAR_2[VAR_3].SrcBusIrq;
 break;

      case 128:



  VAR_7 = VAR_6 = 0;
  while (VAR_7 < VAR_4)
  {
     VAR_6 += VAR_1[VAR_7++].EntryCount;
  }
  VAR_6 += VAR_5;
  break;

      default:
  FUNC_0("Unknown bus type %d.\n",VAR_8);
  VAR_6 = 0;
   }
   return VAR_6;
}

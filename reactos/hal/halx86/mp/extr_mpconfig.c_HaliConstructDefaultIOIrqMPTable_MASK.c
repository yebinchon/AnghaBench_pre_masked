
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
typedef int ULONG ;
typedef int UCHAR ;
struct TYPE_5__ {int ApicId; } ;
struct TYPE_4__ {int SrcBusIrq; int DstApicInt; int IrqType; int DstApicId; scalar_t__ SrcBusId; scalar_t__ IrqFlag; int Type; } ;
typedef TYPE_1__ MP_CONFIGURATION_INTSRC ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static VOID
FUNC_1(ULONG VAR_4)
{
 MP_CONFIGURATION_INTSRC VAR_5;
 UCHAR VAR_6;

 VAR_5.Type = VAR_3;
 VAR_5.IrqFlag = 0;
 VAR_5.SrcBusId = 0;
 VAR_5.DstApicId = VAR_2[0].ApicId;

 VAR_5.IrqType = VAR_1;
 for (VAR_6 = 0; VAR_6 < 16; VAR_6++) {
  switch (VAR_4) {
  case 2:
   if (VAR_6 == 0 || VAR_6 == 13)
    continue;

  default:
   if (VAR_6 == 2)
    continue;
  }

  VAR_5.SrcBusIrq = VAR_6;
  VAR_5.DstApicInt = VAR_6 ? VAR_6 : 2;
  FUNC_0(&VAR_5);
 }

 VAR_5.IrqType = VAR_0;
 VAR_5.SrcBusIrq = 0;
 VAR_5.DstApicInt = 0;
 FUNC_0(&VAR_5);
}

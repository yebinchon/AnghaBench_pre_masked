
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_4__ {int IrqFlag; int DstApicInt; int DstApicId; int SrcBusIrq; int SrcBusId; int IrqType; } ;
typedef TYPE_1__* PMP_CONFIGURATION_INTSRC ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int,int,int ,int ,int ,int ) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static VOID
FUNC_3(PMP_CONFIGURATION_INTSRC VAR_4)
{
  FUNC_1("Int: type %d, pol %d, trig %d, bus %d,"
         " IRQ %02x, APIC ID %x, APIC INT %02x\n",
         VAR_4->IrqType, VAR_4->IrqFlag & 3,
         (VAR_4->IrqFlag >> 2) & 3, VAR_4->SrcBusId,
         VAR_4->SrcBusIrq, VAR_4->DstApicId, VAR_4->DstApicInt);
  if (VAR_1 > VAR_3)
  {
    FUNC_2("Max # of irq sources exceeded!!\n");
    FUNC_0(VAR_0);
  }

  VAR_2[VAR_1] = *VAR_4;
  VAR_1++;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {scalar_t__ IrqType; int SrcBusIrq; int DstApicLInt; int DstApicId; int SrcBusId; } ;
typedef TYPE_1__* PMP_CONFIGURATION_INTLOCAL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,scalar_t__,int,int,int ,int,int ,int) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static VOID
FUNC_3(PMP_CONFIGURATION_INTLOCAL VAR_3)
{
  FUNC_1("Lint: type %d, pol %d, trig %d, bus %d,"
         " IRQ %02x, APIC ID %x, APIC LINT %02x\n",
         VAR_3->IrqType, VAR_3->SrcBusIrq & 3,
         (VAR_3->SrcBusIrq >> 2) & 3, VAR_3->SrcBusId,
          VAR_3->SrcBusIrq, VAR_3->DstApicId, VAR_3->DstApicLInt);







  if ((VAR_3->IrqType == VAR_1) && (VAR_3->DstApicLInt != 0))
  {
    FUNC_2("Invalid MP table!\n");
    FUNC_0(VAR_0);
  }
  if ((VAR_3->IrqType == VAR_2) && (VAR_3->DstApicLInt != 1))
  {
    FUNC_2("Invalid MP table!\n");
    FUNC_0(VAR_0);
  }
}

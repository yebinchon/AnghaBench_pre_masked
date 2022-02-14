
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int VOID ;
typedef int ULONG ;
typedef int UCHAR ;
struct TYPE_12__ {int BusId; int BusType; void* Type; } ;
struct TYPE_11__ {int IrqType; int DstApicLInt; int DstApicId; scalar_t__ SrcBusIrq; scalar_t__ SrcBusId; scalar_t__ IrqFlag; int Type; } ;
struct TYPE_10__ {int ApicId; int ApicVersion; int ApicAddress; int ApicFlags; int Type; } ;
struct TYPE_9__ {int ApicVersion; int CpuFlags; int ApicId; scalar_t__* Reserved; scalar_t__ FeatureFlags; scalar_t__ CpuSignature; int Type; } ;
typedef TYPE_1__ MP_CONFIGURATION_PROCESSOR ;
typedef TYPE_2__ MP_CONFIGURATION_IOAPIC ;
typedef TYPE_3__ MP_CONFIGURATION_INTLOCAL ;
typedef TYPE_4__ MP_CONFIGURATION_BUS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static VOID
FUNC_7(ULONG VAR_11)
{
  MP_CONFIGURATION_PROCESSOR VAR_12;
  MP_CONFIGURATION_BUS VAR_13;
  MP_CONFIGURATION_IOAPIC VAR_14;
  MP_CONFIGURATION_INTLOCAL VAR_15;
  UCHAR VAR_16[2] = { VAR_2, VAR_3 };
  UCHAR VAR_17;




  VAR_12.Type = VAR_8;

  VAR_12.ApicVersion = VAR_11 > 4 ? 0x10 : 0x01;
  VAR_12.CpuFlags = VAR_1 | VAR_0;

  VAR_12.CpuSignature = 0;
  VAR_12.FeatureFlags = 0;
  VAR_12.Reserved[0] = 0;
  VAR_12.Reserved[1] = 0;
  for (VAR_17 = 0; VAR_17 < 2; VAR_17++)
  {
    VAR_12.ApicId = VAR_17;
    FUNC_5(&VAR_12);
    VAR_12.CpuFlags &= ~VAR_0;
  }

  VAR_13.Type = VAR_5;
  VAR_13.BusId = 0;
  switch (VAR_11)
  {
    default:
    FUNC_0("Unknown standard configuration %d\n", VAR_11);

    case 1:
    case 5:
      FUNC_6(VAR_13.BusType, "ISA   ", 6);
      break;
    case 2:
    case 6:
    case 3:
      FUNC_6(VAR_13.BusType, "EISA  ", 6);
      break;
    case 4:
    case 7:
      FUNC_6(VAR_13.BusType, "MCA   ", 6);
  }
  FUNC_2(&VAR_13);
  if (VAR_11 > 4)
  {
    VAR_13.Type = VAR_5;
    VAR_13.BusId = 1;
    FUNC_6(VAR_13.BusType, "PCI   ", 6);
    FUNC_2(&VAR_13);
  }

  VAR_14.Type = VAR_6;
  VAR_14.ApicId = 2;
  VAR_14.ApicVersion = VAR_11 > 4 ? 0x10 : 0x01;
  VAR_14.ApicFlags = VAR_10;
  VAR_14.ApicAddress = VAR_4;
  FUNC_3(&VAR_14);




  FUNC_1(VAR_11);

  VAR_15.Type = VAR_7;
  VAR_15.IrqType = 0;
  VAR_15.IrqFlag = 0;
  VAR_15.SrcBusId = 0;
  VAR_15.SrcBusIrq = 0;
  VAR_15.DstApicId = VAR_9;
  for (VAR_17 = 0; VAR_17 < 2; VAR_17++)
  {
    VAR_15.IrqType = VAR_16[VAR_17];
    VAR_15.DstApicLInt = VAR_17;
    FUNC_4(&VAR_15);
  }
}

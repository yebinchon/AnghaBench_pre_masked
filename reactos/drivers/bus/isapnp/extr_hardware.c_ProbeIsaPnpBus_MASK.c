
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int USHORT ;
struct TYPE_22__ {int VendorId; } ;
struct TYPE_21__ {int ProdId; int VendorId; } ;
struct TYPE_20__ {int Flags; TYPE_4__* DeviceExtension; } ;
struct TYPE_16__ {TYPE_1__* Self; } ;
struct TYPE_19__ {int DeviceCount; int DeviceListHead; int ReadDataPort; TYPE_2__ Common; } ;
struct TYPE_17__ {TYPE_6__* Self; int State; int IsFdo; } ;
struct TYPE_18__ {int CSN; int LDN; int ListEntry; int IrqNo; int IoAddr; int ProdId; int VendorId; TYPE_3__ Common; } ;
struct TYPE_15__ {int DriverObject; } ;
typedef TYPE_4__* PISAPNP_LOGICAL_DEVICE ;
typedef TYPE_5__* PISAPNP_FDO_EXTENSION ;
typedef TYPE_6__* PDEVICE_OBJECT ;
typedef int NTSTATUS ;
typedef int Identifier ;
typedef int ISAPNP_LOGICAL_DEVICE ;
typedef TYPE_7__ ISAPNP_LOGDEVID ;
typedef TYPE_8__ ISAPNP_IDENTIFIER ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int,TYPE_7__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int,int *,int ,int ,int ,TYPE_6__**) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,TYPE_8__*,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_4__*,int) ;
 int VAR_5 ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int VAR_6 ;

NTSTATUS
FUNC_15(PISAPNP_FDO_EXTENSION VAR_7)
{
  PISAPNP_LOGICAL_DEVICE VAR_8;
  ISAPNP_IDENTIFIER VAR_9;
  ISAPNP_LOGDEVID VAR_10;
  USHORT VAR_11;
  USHORT VAR_12;
  PDEVICE_OBJECT VAR_13;
  NTSTATUS VAR_14;

  FUNC_0(VAR_7->ReadDataPort);

  for (VAR_11 = 1; VAR_11 <= 0xFF; VAR_11++)
  {
    for (VAR_12 = 0; VAR_12 <= 0xFF; VAR_12++)
    {
      VAR_14 = FUNC_4(VAR_7->Common.Self->DriverObject,
                              sizeof(ISAPNP_LOGICAL_DEVICE),
                              ((void*)0),
                              VAR_3,
                              VAR_4,
                              VAR_2,
                              &VAR_13);
      if (!FUNC_6(VAR_14))
          return VAR_14;

      VAR_13->Flags |= VAR_0;

      VAR_8 = VAR_13->DeviceExtension;

      FUNC_10(VAR_8, sizeof(ISAPNP_LOGICAL_DEVICE));

      VAR_8->Common.Self = VAR_13;
      VAR_8->Common.IsFdo = VAR_2;
      VAR_8->Common.State = VAR_6;

      VAR_8->CSN = VAR_11;
      VAR_8->LDN = VAR_12;

      FUNC_12();
      FUNC_11();
      FUNC_13(VAR_11);

      FUNC_7(VAR_7->ReadDataPort, &VAR_9, sizeof(VAR_9));

      if (VAR_9.VendorId & 0x80)
      {
          FUNC_5(VAR_8->Common.Self);
          return VAR_5;
      }

      if (!FUNC_2(VAR_7->ReadDataPort, VAR_12, &VAR_10))
          break;

      FUNC_14(VAR_12);

      VAR_8->VendorId = VAR_10.VendorId;
      VAR_8->ProdId = VAR_10.ProdId;
      VAR_8->IoAddr = FUNC_8(VAR_7->ReadDataPort, 0);
      VAR_8->IrqNo = FUNC_9(VAR_7->ReadDataPort, 0);

      FUNC_1("Detected ISA PnP device - VID: 0x%x PID: 0x%x IoBase: 0x%x IRQ:0x%x\n",
               VAR_8->VendorId, VAR_8->ProdId, VAR_8->IoAddr, VAR_8->IrqNo);

      FUNC_12();

      VAR_13->Flags &= ~VAR_1;

      FUNC_3(&VAR_7->DeviceListHead, &VAR_8->ListEntry);
      VAR_7->DeviceCount++;
    }
  }

  return VAR_5;
}

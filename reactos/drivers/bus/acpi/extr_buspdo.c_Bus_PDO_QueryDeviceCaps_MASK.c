
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_23__ {int hardware_id; int bus_address; } ;
struct TYPE_22__ {scalar_t__ hardware_id; int unique_id; int surprise_removal_ok; int removable; int ejectable; int lockable; } ;
struct TYPE_21__ {int show_in_ui; int functional; int enabled; } ;
struct TYPE_20__ {TYPE_4__* states; } ;
struct acpi_device {TYPE_8__ pnp; TYPE_7__ flags; TYPE_6__ status; TYPE_5__ power; } ;
typedef size_t ULONG ;
struct TYPE_24__ {scalar_t__ AcpiHandle; } ;
struct TYPE_18__ {int valid; } ;
struct TYPE_19__ {scalar_t__ latency; TYPE_3__ flags; } ;
struct TYPE_16__ {TYPE_11__* Capabilities; } ;
struct TYPE_17__ {TYPE_1__ DeviceCapabilities; } ;
struct TYPE_15__ {int Version; int Size; scalar_t__* DeviceState; int HardwareDisabled; int NoDisplayInUI; size_t UINumber; void* SilentInstall; void* RawDeviceOK; int Address; int UniqueID; int SurpriseRemovalOK; int Removable; int EjectSupported; int LockSupported; void* WakeFromD3; void* WakeFromD2; void* WakeFromD1; void* WakeFromD0; void* DeviceD2; void* DeviceD1; scalar_t__ DeviceWake; scalar_t__ D3Latency; scalar_t__ D2Latency; scalar_t__ D1Latency; } ;
struct TYPE_14__ {TYPE_2__ Parameters; } ;
typedef TYPE_9__* PPDO_DEVICE_DATA ;
typedef int PIRP ;
typedef TYPE_10__* PIO_STACK_LOCATION ;
typedef TYPE_11__* PDEVICE_CAPABILITIES ;
typedef int NTSTATUS ;
typedef int DEVICE_CAPABILITIES ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 void* VAR_4 ;
 TYPE_10__* FUNC_0 (int ) ;
 int FUNC_1 () ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 int FUNC_2 (scalar_t__,struct acpi_device**) ;
 scalar_t__ FUNC_3 (int ,int ) ;

NTSTATUS
FUNC_4(
     PPDO_DEVICE_DATA VAR_16,
      PIRP VAR_17 )
{

    PIO_STACK_LOCATION VAR_18;
    PDEVICE_CAPABILITIES VAR_19;
    struct acpi_device *VAR_20 = ((void*)0);
    ULONG VAR_21;

    FUNC_1 ();

    if (VAR_16->AcpiHandle)
        FUNC_2(VAR_16->AcpiHandle, &VAR_20);

    VAR_18 = FUNC_0 (VAR_17);




    VAR_19=VAR_18->Parameters.DeviceCapabilities.Capabilities;





    if (VAR_19->Version != 1 ||
            VAR_19->Size < sizeof(DEVICE_CAPABILITIES))
    {
       return VAR_14;
    }

    VAR_19->D1Latency = 0;
    VAR_19->D2Latency = 0;
    VAR_19->D3Latency = 0;

    VAR_19->DeviceState[VAR_12] = VAR_5;
    VAR_19->DeviceState[VAR_9] = VAR_8;
    VAR_19->DeviceState[VAR_10] = VAR_8;
    VAR_19->DeviceState[VAR_11] = VAR_8;

    for (VAR_21 = 0; VAR_21 < VAR_1 && VAR_20; VAR_21++)
    {
        if (!VAR_20->power.states[VAR_21].flags.valid)
            continue;

        switch (VAR_21)
        {
           case 131:
              VAR_19->DeviceState[VAR_12] = VAR_5;
              break;

           case 130:
              VAR_19->DeviceState[VAR_9] = VAR_6;
              VAR_19->D1Latency = VAR_20->power.states[VAR_21].latency;
              break;

           case 129:
              VAR_19->DeviceState[VAR_10] = VAR_7;
              VAR_19->D2Latency = VAR_20->power.states[VAR_21].latency;
              break;

           case 128:
              VAR_19->DeviceState[VAR_11] = VAR_8;
              VAR_19->D3Latency = VAR_20->power.states[VAR_21].latency;
              break;
        }
    }


    VAR_19->DeviceWake = VAR_6;


    VAR_19->DeviceD1 =
        (VAR_19->DeviceState[VAR_9] == VAR_6) ? VAR_15 : VAR_4;
    VAR_19->DeviceD2 =
        (VAR_19->DeviceState[VAR_10] == VAR_7) ? VAR_15 : VAR_4;

    VAR_19->WakeFromD0 = VAR_4;
    VAR_19->WakeFromD1 = VAR_15;
    VAR_19->WakeFromD2 = VAR_4;
    VAR_19->WakeFromD3 = VAR_4;

    if (VAR_20)
    {
       VAR_19->LockSupported = VAR_20->flags.lockable;
       VAR_19->EjectSupported = VAR_20->flags.ejectable;
       VAR_19->HardwareDisabled = !VAR_20->status.enabled && !VAR_20->status.functional;
       VAR_19->Removable = VAR_20->flags.removable;
       VAR_19->SurpriseRemovalOK = VAR_20->flags.surprise_removal_ok;
       VAR_19->UniqueID = VAR_20->flags.unique_id;
       VAR_19->NoDisplayInUI = !VAR_20->status.show_in_ui;
       VAR_19->Address = VAR_20->pnp.bus_address;
    }

    if (!VAR_20 ||
        (VAR_20->flags.hardware_id &&
         (FUNC_3(VAR_20->pnp.hardware_id, VAR_0) ||
          FUNC_3(VAR_20->pnp.hardware_id, VAR_3) ||
          FUNC_3(VAR_20->pnp.hardware_id, VAR_2))))
    {


        VAR_19->RawDeviceOK = VAR_15;
    }

    VAR_19->SilentInstall = VAR_4;
    VAR_19->UINumber = (ULONG)-1;

    return VAR_13;

}

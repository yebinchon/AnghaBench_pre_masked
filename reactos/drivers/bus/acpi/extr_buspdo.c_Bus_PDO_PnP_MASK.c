
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_45__ TYPE_9__ ;
typedef struct TYPE_44__ TYPE_8__ ;
typedef struct TYPE_43__ TYPE_7__ ;
typedef struct TYPE_42__ TYPE_6__ ;
typedef struct TYPE_41__ TYPE_5__ ;
typedef struct TYPE_40__ TYPE_4__ ;
typedef struct TYPE_39__ TYPE_3__ ;
typedef struct TYPE_38__ TYPE_2__ ;
typedef struct TYPE_37__ TYPE_1__ ;
typedef struct TYPE_36__ TYPE_13__ ;
typedef struct TYPE_35__ TYPE_10__ ;


struct TYPE_38__ {int hardware_id; } ;
struct TYPE_37__ {int hardware_id; } ;
struct acpi_device {TYPE_2__ pnp; TYPE_1__ flags; } ;
struct TYPE_39__ {int Type; } ;
struct TYPE_40__ {TYPE_3__ QueryDeviceRelations; } ;
struct TYPE_45__ {int MinorFunction; TYPE_4__ Parameters; } ;
struct TYPE_41__ {int Status; } ;
struct TYPE_44__ {TYPE_5__ IoStatus; } ;
struct TYPE_43__ {void* DeviceState; } ;
struct TYPE_35__ {int DevicePnPState; void* DevicePowerState; int Self; } ;
struct TYPE_36__ {int Length; } ;
struct TYPE_42__ {TYPE_10__ Common; scalar_t__ AcpiHandle; TYPE_13__ InterfaceName; } ;
typedef TYPE_6__* PPDO_DEVICE_DATA ;
typedef TYPE_7__ POWER_STATE ;
typedef TYPE_8__* PIRP ;
typedef TYPE_9__* PIO_STACK_LOCATION ;
typedef int PDEVICE_OBJECT ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_6__*,TYPE_8__*) ;
 int FUNC_2 (TYPE_6__*,TYPE_8__*) ;
 int FUNC_3 (TYPE_6__*,TYPE_8__*) ;
 int FUNC_4 (TYPE_6__*,TYPE_8__*) ;
 int FUNC_5 (TYPE_6__*,TYPE_8__*) ;
 int FUNC_6 (TYPE_6__*,TYPE_8__*) ;
 int FUNC_7 (TYPE_6__*,TYPE_8__*) ;
 int FUNC_8 (TYPE_6__*,TYPE_8__*) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (char*,scalar_t__) ;
 int FUNC_11 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_12 (TYPE_8__*,int ) ;
 int FUNC_13 (int ,int *,int *,TYPE_13__*) ;
 int FUNC_14 (TYPE_13__*,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 () ;
 int FUNC_17 (int ,int ,TYPE_7__) ;
 void* VAR_12 ;
 void* VAR_13 ;
 int FUNC_18 (TYPE_10__) ;
 int VAR_14 ;
 int FUNC_19 (TYPE_10__,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_20 (scalar_t__,struct acpi_device**) ;
 int FUNC_21 (scalar_t__) ;
 int FUNC_22 (scalar_t__,int ) ;
 int FUNC_23 (int ,int ) ;

NTSTATUS
FUNC_24 (
     PDEVICE_OBJECT VAR_21,
     PIRP VAR_22,
     PIO_STACK_LOCATION VAR_23,
     PPDO_DEVICE_DATA VAR_24
    )
{
    NTSTATUS VAR_25;
    POWER_STATE VAR_26;
    struct acpi_device *VAR_27 = ((void*)0);

    FUNC_16 ();

    if (VAR_24->AcpiHandle)
        FUNC_20(VAR_24->AcpiHandle, &VAR_27);







    switch (VAR_23->MinorFunction) {

    case 129:





        if (VAR_24->AcpiHandle && FUNC_21(VAR_24->AcpiHandle) &&
            !FUNC_0(FUNC_22(VAR_24->AcpiHandle, VAR_2)))
        {
            FUNC_10("Device %x failed to start!\n", VAR_24->AcpiHandle);
            VAR_25 = VAR_16;
            break;
        }

        VAR_24->InterfaceName.Length = 0;
        VAR_25 = VAR_15;

        if (!VAR_27)
        {
            VAR_25 = FUNC_13(VAR_24->Common.Self,
                                               &VAR_9,
                                               ((void*)0),
                                               &VAR_24->InterfaceName);
        }
        else if (VAR_27->flags.hardware_id &&
                 FUNC_23(VAR_27->pnp.hardware_id, VAR_4))
        {
            VAR_25 = FUNC_13(VAR_24->Common.Self,
                                               &VAR_10,
                                               ((void*)0),
                                               &VAR_24->InterfaceName);
        }
        else if (VAR_27->flags.hardware_id &&
                 FUNC_23(VAR_27->pnp.hardware_id, VAR_0))
        {
            VAR_25 = FUNC_13(VAR_24->Common.Self,
                                               &VAR_7,
                                               ((void*)0),
                                               &VAR_24->InterfaceName);
        }
        else if (VAR_27->flags.hardware_id &&
                 FUNC_23(VAR_27->pnp.hardware_id, VAR_1))
        {
            VAR_25 = FUNC_13(VAR_24->Common.Self,
                                               &VAR_8,
                                               ((void*)0),
                                               &VAR_24->InterfaceName);
        }


        if (FUNC_15(VAR_25) && VAR_24->InterfaceName.Length != 0)
            FUNC_14(&VAR_24->InterfaceName, VAR_20);

        VAR_26.DeviceState = VAR_12;
        FUNC_17(VAR_24->Common.Self, VAR_5, VAR_26);
        VAR_24->Common.DevicePowerState = VAR_12;
        FUNC_19(VAR_24->Common, VAR_17);
        VAR_25 = VAR_15;
        break;

    case 128:

        if (VAR_24->InterfaceName.Length != 0)
            FUNC_14(&VAR_24->InterfaceName, VAR_6);





        if (VAR_24->AcpiHandle && FUNC_21(VAR_24->AcpiHandle) &&
            !FUNC_0(FUNC_22(VAR_24->AcpiHandle, VAR_3)))
        {
            FUNC_10("Device %x failed to stop!\n", VAR_24->AcpiHandle);
            VAR_25 = VAR_16;
            break;
        }

        VAR_26.DeviceState = VAR_13;
        FUNC_17(VAR_24->Common.Self, VAR_5, VAR_26);
        VAR_24->Common.DevicePowerState = VAR_13;
        FUNC_19(VAR_24->Common, VAR_19);
        VAR_25 = VAR_15;
        break;


    case 131:







        FUNC_19(VAR_24->Common, VAR_18);
        VAR_25 = VAR_15;
        break;

    case 142:
        if (VAR_18 == VAR_24->Common.DevicePnPState)
        {



            FUNC_18(VAR_24->Common);
        }
        VAR_25 = VAR_15;
        break;

    case 130:





        if (VAR_24->InterfaceName.Length != 0)
            FUNC_14(&VAR_24->InterfaceName, VAR_6);

        if (VAR_24->AcpiHandle && FUNC_21(VAR_24->AcpiHandle) &&
            !FUNC_0(FUNC_22(VAR_24->AcpiHandle, VAR_3)))
        {
            FUNC_10("Device %x failed to enter D3!\n", VAR_24->AcpiHandle);
            VAR_26.DeviceState = VAR_13;
            FUNC_17(VAR_24->Common.Self, VAR_5, VAR_26);
            VAR_24->Common.DevicePowerState = VAR_13;
        }

        FUNC_19(VAR_24->Common, VAR_19);
        VAR_25 = VAR_15;
        break;

    case 134:
        FUNC_19(VAR_24->Common, VAR_14);
        VAR_25 = VAR_15;
        break;

    case 143:
        if (VAR_14 == VAR_24->Common.DevicePnPState)
        {
            FUNC_18(VAR_24->Common);
        }
        VAR_25 = VAR_15;
        break;

    case 139:






        VAR_25 = FUNC_2(VAR_24, VAR_22);

        break;

    case 136:


        VAR_25 = FUNC_3(VAR_24, VAR_22);

        break;

    case 138:

        FUNC_9("\tQueryDeviceRelation Type: %s\n",FUNC_11( VAR_23->Parameters.QueryDeviceRelations.Type));


        VAR_25 = FUNC_4(VAR_24, VAR_22);

        break;

    case 137:

        VAR_25 = FUNC_5(VAR_24, VAR_22);

        break;

    case 133:

        VAR_25 = FUNC_8(VAR_24, VAR_22);

        break;

    case 132:

        VAR_25 = FUNC_7(VAR_24, VAR_22);

        break;

    case 140:

        VAR_25 = FUNC_1(VAR_24, VAR_22);

        break;

    case 135:

        VAR_25 = FUNC_6(VAR_24, VAR_22);

        break;


    case 141:
    default:





        VAR_25 = VAR_22->IoStatus.Status;

        break;
    }

    VAR_22->IoStatus.Status = VAR_25;
    FUNC_12 (VAR_22, VAR_11);

    return VAR_25;
}

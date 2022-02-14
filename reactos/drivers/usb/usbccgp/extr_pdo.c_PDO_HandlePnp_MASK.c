
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_32__ {scalar_t__ DeviceExtension; } ;
struct TYPE_26__ {int Capabilities; } ;
struct TYPE_27__ {TYPE_3__ DeviceCapabilities; } ;
struct TYPE_31__ {int MinorFunction; TYPE_4__ Parameters; } ;
struct TYPE_28__ {scalar_t__ Status; } ;
struct TYPE_30__ {TYPE_5__ IoStatus; } ;
struct TYPE_24__ {scalar_t__ IsFDO; } ;
struct TYPE_29__ {int NextDeviceObject; int Capabilities; TYPE_2__* FDODeviceExtension; TYPE_1__ Common; } ;
struct TYPE_25__ {size_t FunctionDescriptorCount; TYPE_9__** ChildPDO; } ;
typedef TYPE_6__* PPDO_DEVICE_EXTENSION ;
typedef TYPE_7__* PIRP ;
typedef TYPE_8__* PIO_STACK_LOCATION ;
typedef TYPE_9__* PDEVICE_OBJECT ;
typedef scalar_t__ NTSTATUS ;
typedef int DEVICE_CAPABILITIES ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,TYPE_7__*) ;
 int FUNC_3 (TYPE_7__*,int ) ;
 int FUNC_4 (TYPE_9__*) ;
 TYPE_8__* FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (int ,int *,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_8 (TYPE_9__*,TYPE_7__*) ;
 scalar_t__ FUNC_9 (TYPE_9__*,TYPE_7__*) ;
 scalar_t__ FUNC_10 (TYPE_9__*,TYPE_7__*) ;

NTSTATUS
FUNC_11(
    PDEVICE_OBJECT VAR_5,
    PIRP VAR_6)
{
    PIO_STACK_LOCATION VAR_7;
    PPDO_DEVICE_EXTENSION VAR_8;
    NTSTATUS VAR_9;
    ULONG VAR_10, VAR_11;




    VAR_7 = FUNC_5(VAR_6);




    VAR_8 = (PPDO_DEVICE_EXTENSION)VAR_5->DeviceExtension;




    FUNC_0(VAR_8->Common.IsFDO == VAR_0);

    switch(VAR_7->MinorFunction)
    {
        case 135:
        {



            VAR_9 = FUNC_8(VAR_5, VAR_6);
            break;
        }
        case 134:
        {



            VAR_9 = FUNC_9(VAR_5, VAR_6);
            break;
        }
        case 133:
        {



            VAR_9 = FUNC_10(VAR_5, VAR_6);
            break;
        }
        case 129:
        {



            VAR_11 = VAR_0;
            for(VAR_10 = 0; VAR_10 < VAR_8->FDODeviceExtension->FunctionDescriptorCount; VAR_10++)
            {
                if (VAR_8->FDODeviceExtension->ChildPDO[VAR_10] == VAR_5)
                {



                    VAR_8->FDODeviceExtension->ChildPDO[VAR_10] = ((void*)0);
                    VAR_11 = VAR_4;
                    break;
                }
            }




            VAR_6->IoStatus.Status = VAR_3;
            FUNC_3(VAR_6, VAR_1);

            if (VAR_11)
            {



                FUNC_4(VAR_5);
            }
            return VAR_3;
        }
        case 136:
        {



            FUNC_7(VAR_7->Parameters.DeviceCapabilities.Capabilities, &VAR_8->Capabilities, sizeof(DEVICE_CAPABILITIES));


            VAR_6->IoStatus.Status = VAR_3;
            FUNC_3(VAR_6, VAR_1);
            return VAR_3;
        }
        case 131:
        case 130:
        {



            VAR_9 = VAR_3;
            break;
        }
        case 128:
        {



            FUNC_1("[USBCCGP] PDO IRP_MN_START\n");
            VAR_9 = VAR_3;
            break;
        }
        case 132:
        {



            FUNC_6(VAR_6);
            return FUNC_2(VAR_8->NextDeviceObject, VAR_6);
        }
        default:
        {



            VAR_9 = VAR_6->IoStatus.Status;
            break;
        }
    }




    if (VAR_9 != VAR_2)
    {



        VAR_6->IoStatus.Status = VAR_9;




        FUNC_3(VAR_6, VAR_1);
    }




    return VAR_9;

}

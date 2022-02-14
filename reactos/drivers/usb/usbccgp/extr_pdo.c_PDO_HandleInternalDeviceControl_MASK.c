
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_41__ TYPE_9__ ;
typedef struct TYPE_40__ TYPE_8__ ;
typedef struct TYPE_39__ TYPE_7__ ;
typedef struct TYPE_38__ TYPE_6__ ;
typedef struct TYPE_37__ TYPE_5__ ;
typedef struct TYPE_36__ TYPE_4__ ;
typedef struct TYPE_35__ TYPE_3__ ;
typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_1__ ;
typedef struct TYPE_32__ TYPE_13__ ;
typedef struct TYPE_31__ TYPE_12__ ;
typedef struct TYPE_30__ TYPE_11__ ;
typedef struct TYPE_29__ TYPE_10__ ;


typedef int WCHAR ;
typedef int USB_DEVICE_DESCRIPTOR ;
struct TYPE_36__ {scalar_t__ DescriptorType; int TransferBufferLength; TYPE_9__* TransferBuffer; int LanguageId; int Index; } ;
struct TYPE_34__ {scalar_t__ Function; } ;
struct TYPE_41__ {TYPE_4__ UrbControlDescriptorRequest; TYPE_2__ UrbHeader; } ;
struct TYPE_40__ {int bLength; int * bString; } ;
struct TYPE_39__ {void* Status; } ;
struct TYPE_37__ {int IoControlCode; int InputBufferLength; int OutputBufferLength; int Type3InputBuffer; } ;
struct TYPE_33__ {scalar_t__ Argument1; } ;
struct TYPE_38__ {TYPE_5__ DeviceIoControl; TYPE_1__ Others; } ;
struct TYPE_35__ {int NextDeviceObject; } ;
struct TYPE_32__ {scalar_t__ DeviceExtension; } ;
struct TYPE_31__ {TYPE_6__ Parameters; } ;
struct TYPE_30__ {TYPE_7__ IoStatus; } ;
struct TYPE_29__ {int NextDeviceObject; TYPE_3__* FDODeviceExtension; int DeviceDescriptor; } ;
typedef int PVOID ;
typedef TYPE_8__* PUSB_STRING_DESCRIPTOR ;
typedef TYPE_9__* PURB ;
typedef TYPE_10__* PPDO_DEVICE_EXTENSION ;
typedef TYPE_11__* PIRP ;
typedef TYPE_12__* PIO_STACK_LOCATION ;
typedef TYPE_13__* PDEVICE_OBJECT ;
typedef void* NTSTATUS ;


 int FUNC_0 (TYPE_9__*) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (char*,int) ;
 TYPE_9__* VAR_0 ;
 int FUNC_3 (TYPE_8__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_4 (int ,TYPE_11__*) ;
 int FUNC_5 (TYPE_11__*,int ) ;
 TYPE_12__* FUNC_6 (TYPE_11__*) ;
 int FUNC_7 (TYPE_11__*) ;
 scalar_t__ FUNC_8 (void*) ;
 int FUNC_9 (TYPE_9__*,int *,int) ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 void* FUNC_10 (TYPE_13__*,TYPE_11__*) ;
 void* FUNC_11 (int ,scalar_t__,int,int ,int ,int *) ;
 void* FUNC_12 (TYPE_13__*,TYPE_11__*) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;

NTSTATUS
FUNC_13(
    PDEVICE_OBJECT VAR_15,
    PIRP VAR_16)
{
    PIO_STACK_LOCATION VAR_17;
    PPDO_DEVICE_EXTENSION VAR_18;
    NTSTATUS VAR_19;
    PURB VAR_20;




    VAR_17 = FUNC_6(VAR_16);




    VAR_18 = (PPDO_DEVICE_EXTENSION)VAR_15->DeviceExtension;

    if (VAR_17->Parameters.DeviceIoControl.IoControlCode == VAR_4)
    {



        VAR_20 = (PURB)VAR_17->Parameters.Others.Argument1;
        FUNC_0(VAR_20);
        FUNC_1("IOCTL_INTERNAL_USB_SUBMIT_URB Function %x\n", VAR_20->UrbHeader.Function);

        if (VAR_20->UrbHeader.Function == VAR_11)
        {



            VAR_19 = FUNC_12(VAR_15, VAR_16);
            VAR_16->IoStatus.Status = VAR_19;
            FUNC_5(VAR_16, VAR_5);
            return VAR_19;
        }
        else if (VAR_20->UrbHeader.Function == VAR_10)
        {
            if (VAR_20->UrbControlDescriptorRequest.DescriptorType == VAR_13)
            {



                if (VAR_20->UrbControlDescriptorRequest.TransferBufferLength < sizeof(USB_DEVICE_DESCRIPTOR))
                {



                    FUNC_2("[USBCCGP] invalid device descriptor size %lu\n", VAR_20->UrbControlDescriptorRequest.TransferBufferLength);
                    VAR_20->UrbControlDescriptorRequest.TransferBufferLength = sizeof(USB_DEVICE_DESCRIPTOR);
                    VAR_16->IoStatus.Status = VAR_7;
                    FUNC_5(VAR_16, VAR_5);
                    return VAR_7;
                }




                FUNC_0(VAR_20->UrbControlDescriptorRequest.TransferBuffer);
                FUNC_9(VAR_20->UrbControlDescriptorRequest.TransferBuffer, &VAR_18->DeviceDescriptor, sizeof(USB_DEVICE_DESCRIPTOR));
                VAR_16->IoStatus.Status = VAR_9;
                FUNC_5(VAR_16, VAR_5);
                return VAR_9;
            }
            else if (VAR_20->UrbControlDescriptorRequest.DescriptorType == VAR_12)
            {



                VAR_19 = FUNC_10(VAR_15, VAR_16);
                VAR_16->IoStatus.Status = VAR_19;
                FUNC_5(VAR_16, VAR_5);
                return VAR_19;
            }
            else if (VAR_20->UrbControlDescriptorRequest.DescriptorType == VAR_14)
            {
                PUSB_STRING_DESCRIPTOR VAR_21;




                FUNC_0(VAR_20->UrbControlDescriptorRequest.TransferBuffer);
                VAR_19 = FUNC_11(VAR_18->FDODeviceExtension->NextDeviceObject,
                                               VAR_14,
                                               VAR_20->UrbControlDescriptorRequest.TransferBufferLength,
                                               VAR_20->UrbControlDescriptorRequest.Index,
                                               VAR_20->UrbControlDescriptorRequest.LanguageId,
                                               (PVOID*)&VAR_21);
                if (FUNC_8(VAR_19))
                {
                    if (VAR_21->bLength == 2)
                    {
                        FUNC_3(VAR_21);
                        VAR_19 = VAR_6;
                    }
                    else
                    {
                        FUNC_9(VAR_20->UrbControlDescriptorRequest.TransferBuffer,
                                      VAR_21->bString,
                                      VAR_21->bLength + sizeof(WCHAR));
                        FUNC_3(VAR_21);
                        VAR_19 = VAR_9;
                    }
                }
                VAR_16->IoStatus.Status = VAR_19;
                FUNC_5(VAR_16, VAR_5);
                return VAR_19;
            }
        }
        else
        {
            FUNC_7(VAR_16);
            VAR_19 = FUNC_4(VAR_18->NextDeviceObject, VAR_16);
            return VAR_19;
        }
    }
    else if (VAR_17->Parameters.DeviceIoControl.IoControlCode == VAR_2)
    {
        FUNC_7(VAR_16);
        VAR_19 = FUNC_4(VAR_18->NextDeviceObject, VAR_16);
        return VAR_19;
    }
    else if (VAR_17->Parameters.DeviceIoControl.IoControlCode == VAR_3)
    {
        FUNC_7(VAR_16);
        VAR_19 = FUNC_4(VAR_18->NextDeviceObject, VAR_16);
        return VAR_19;
    }
    else if (VAR_17->Parameters.DeviceIoControl.IoControlCode == VAR_1)
    {
        FUNC_7(VAR_16);
        VAR_19 = FUNC_4(VAR_18->NextDeviceObject, VAR_16);
        return VAR_19;
    }

    FUNC_2("IOCTL %x\n", VAR_17->Parameters.DeviceIoControl.IoControlCode);
    FUNC_2("InputBufferLength %lu\n", VAR_17->Parameters.DeviceIoControl.InputBufferLength);
    FUNC_2("OutputBufferLength %lu\n", VAR_17->Parameters.DeviceIoControl.OutputBufferLength);
    FUNC_2("Type3InputBuffer %p\n", VAR_17->Parameters.DeviceIoControl.Type3InputBuffer);

    FUNC_0(VAR_0);

    VAR_16->IoStatus.Status = VAR_8;
    FUNC_5(VAR_16, VAR_5);
    return VAR_8;
}

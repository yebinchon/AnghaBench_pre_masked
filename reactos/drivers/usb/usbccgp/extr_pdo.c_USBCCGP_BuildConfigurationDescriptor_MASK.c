
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_12__ ;
typedef struct TYPE_21__ TYPE_11__ ;
typedef struct TYPE_20__ TYPE_10__ ;


typedef scalar_t__ USHORT ;
typedef int USB_CONFIGURATION_DESCRIPTOR ;
typedef scalar_t__ ULONG_PTR ;
typedef size_t ULONG ;
typedef scalar_t__ UCHAR ;
struct TYPE_26__ {size_t TransferBufferLength; TYPE_5__* TransferBuffer; } ;
struct TYPE_28__ {TYPE_4__ UrbControlDescriptorRequest; } ;
struct TYPE_27__ {scalar_t__ bInterfaceNumber; size_t bLength; scalar_t__ wTotalLength; scalar_t__ bDescriptorType; size_t bNumInterfaces; int bAlternateSetting; } ;
struct TYPE_24__ {scalar_t__ Argument1; } ;
struct TYPE_25__ {TYPE_2__ Others; } ;
struct TYPE_23__ {size_t NumberOfInterfaces; TYPE_5__** InterfaceDescriptorList; } ;
struct TYPE_22__ {scalar_t__ DeviceExtension; } ;
struct TYPE_21__ {TYPE_3__ Parameters; } ;
struct TYPE_20__ {TYPE_1__* FunctionDescriptor; TYPE_5__* ConfigurationDescriptor; } ;
typedef TYPE_5__* PVOID ;
typedef TYPE_5__* PUSB_INTERFACE_DESCRIPTOR ;
typedef TYPE_5__* PUSB_CONFIGURATION_DESCRIPTOR ;
typedef TYPE_8__* PURB ;
typedef TYPE_5__* PUCHAR ;
typedef TYPE_10__* PPDO_DEVICE_EXTENSION ;
typedef int PIRP ;
typedef TYPE_11__* PIO_STACK_LOCATION ;
typedef TYPE_12__* PDEVICE_OBJECT ;
typedef int NTSTATUS ;


 int FUNC_0 (TYPE_8__*) ;
 TYPE_5__* FUNC_1 (int ,size_t) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,size_t) ;
 int FUNC_4 (TYPE_5__*) ;
 TYPE_11__* FUNC_5 (int ) ;
 int VAR_0 ;
 int FUNC_6 (TYPE_5__*,TYPE_5__*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t FUNC_7 (size_t,size_t) ;

NTSTATUS
FUNC_8(
    PDEVICE_OBJECT VAR_6,
    PIRP VAR_7)
{
    PIO_STACK_LOCATION VAR_8;
    PPDO_DEVICE_EXTENSION VAR_9;
    PUSB_CONFIGURATION_DESCRIPTOR VAR_10;
    PUSB_INTERFACE_DESCRIPTOR VAR_11;
    ULONG VAR_12, VAR_13;
    ULONG VAR_14;
    PURB VAR_15;
    PVOID VAR_16;
    PUCHAR VAR_17;
    UCHAR VAR_18;




    VAR_8 = FUNC_5(VAR_7);

    FUNC_2("USBCCGP_BuildConfigurationDescriptor\n");




    VAR_9 = (PPDO_DEVICE_EXTENSION)VAR_6->DeviceExtension;




    VAR_10 = VAR_9->ConfigurationDescriptor;




    VAR_12 = sizeof(USB_CONFIGURATION_DESCRIPTOR);

    for (VAR_13 = 0; VAR_13 < VAR_9->FunctionDescriptor->NumberOfInterfaces; VAR_13++)
    {



        VAR_11 = VAR_9->FunctionDescriptor->InterfaceDescriptorList[VAR_13];
        VAR_18 = VAR_11->bInterfaceNumber;




        VAR_12 += VAR_11->bLength;
        VAR_11 = (PUSB_INTERFACE_DESCRIPTOR)((ULONG_PTR)VAR_11 + VAR_11->bLength);

        do
        {
            if ((ULONG_PTR)VAR_11 >= ((ULONG_PTR)VAR_10 + VAR_10->wTotalLength))
            {



                break;
            }




            if (VAR_11->bDescriptorType != VAR_4)
            {
                if (VAR_11->bDescriptorType == VAR_5)
                {
                    if (VAR_18 != VAR_11->bInterfaceNumber)
                    {



                        break;
                    }




                }




                VAR_12 += VAR_11->bLength;
            }




            VAR_11 = (PUSB_INTERFACE_DESCRIPTOR)((ULONG_PTR)VAR_11 + VAR_11->bLength);
        } while(VAR_3);
    }




    VAR_16 = FUNC_1(VAR_0, VAR_12);
    if (!VAR_16)
    {



        FUNC_3("[USBCCGP] Failed to allocate %lu Bytes\n", VAR_12);
        return VAR_1;
    }




    FUNC_6(VAR_16, VAR_10, sizeof(USB_CONFIGURATION_DESCRIPTOR));
    VAR_17 = (PUCHAR)((ULONG_PTR)VAR_16 + VAR_10->bLength);

    for (VAR_13 = 0; VAR_13 < VAR_9->FunctionDescriptor->NumberOfInterfaces; VAR_13++)
    {



        VAR_11 = VAR_9->FunctionDescriptor->InterfaceDescriptorList[VAR_13];
        VAR_18 = VAR_11->bInterfaceNumber;




        FUNC_6(VAR_17, VAR_11, VAR_11->bLength);
        VAR_17 += VAR_11->bLength;
        VAR_11 = (PUSB_INTERFACE_DESCRIPTOR)((ULONG_PTR)VAR_11 + VAR_11->bLength);

        do
        {
            if ((ULONG_PTR)VAR_11 >= ((ULONG_PTR)VAR_10 + VAR_10->wTotalLength))
            {



                break;
            }




            if (VAR_11->bDescriptorType != VAR_4)
            {
                if (VAR_11->bDescriptorType == VAR_5)
                {
                    if (VAR_18 != VAR_11->bInterfaceNumber)
                    {



                        break;
                    }




                    FUNC_2("InterfaceDescriptor %p Alternate %x InterfaceNumber %x\n", VAR_11, VAR_11->bAlternateSetting, VAR_11->bInterfaceNumber);
                }




                FUNC_6(VAR_17, VAR_11, VAR_11->bLength);
                VAR_17 += VAR_11->bLength;
            }




            VAR_11 = (PUSB_INTERFACE_DESCRIPTOR)((ULONG_PTR)VAR_11 + VAR_11->bLength);
        } while(VAR_3);
    }




    VAR_10 = VAR_16;
    VAR_10->wTotalLength = (USHORT)VAR_12;
    VAR_10->bNumInterfaces = VAR_9->FunctionDescriptor->NumberOfInterfaces;




    VAR_15 = (PURB)VAR_8->Parameters.Others.Argument1;
    FUNC_0(VAR_15);




    VAR_14 = FUNC_7(VAR_12, VAR_15->UrbControlDescriptorRequest.TransferBufferLength);
    FUNC_6(VAR_15->UrbControlDescriptorRequest.TransferBuffer, VAR_16, VAR_14);




    VAR_15->UrbControlDescriptorRequest.TransferBufferLength = VAR_14;




    FUNC_4(VAR_16);




    return VAR_2;
}

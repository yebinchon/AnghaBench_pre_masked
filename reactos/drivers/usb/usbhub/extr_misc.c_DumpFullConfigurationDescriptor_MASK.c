
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
typedef int USB_INTERFACE_DESCRIPTOR ;
typedef int USB_ENDPOINT_DESCRIPTOR ;
typedef int USB_CONFIGURATION_DESCRIPTOR ;
typedef scalar_t__ ULONG_PTR ;
struct TYPE_7__ {TYPE_1__* bInterval; TYPE_1__* wMaxPacketSize; TYPE_1__* bmAttributes; TYPE_1__* bEndpointAddress; TYPE_1__* bDescriptorType; TYPE_1__* bLength; } ;
struct TYPE_6__ {scalar_t__ bNumInterfaces; scalar_t__ bNumEndpoints; struct TYPE_6__* iInterface; struct TYPE_6__* bInterfaceProtocol; struct TYPE_6__* bInterfaceSubClass; struct TYPE_6__* bInterfaceClass; struct TYPE_6__* bAlternateSetting; struct TYPE_6__* bInterfaceNumber; struct TYPE_6__* bDescriptorType; struct TYPE_6__* bLength; struct TYPE_6__* MaxPower; struct TYPE_6__* bmAttributes; struct TYPE_6__* iConfiguration; struct TYPE_6__* bConfigurationValue; struct TYPE_6__* wTotalLength; } ;
typedef TYPE_1__* PUSB_INTERFACE_DESCRIPTOR ;
typedef TYPE_2__* PUSB_ENDPOINT_DESCRIPTOR ;
typedef TYPE_1__* PUSB_CONFIGURATION_DESCRIPTOR ;
typedef scalar_t__ LONG ;


 int FUNC_0 (char*,TYPE_1__*) ;

VOID
FUNC_1(PUSB_CONFIGURATION_DESCRIPTOR VAR_0)
{
    PUSB_INTERFACE_DESCRIPTOR VAR_1;
    PUSB_ENDPOINT_DESCRIPTOR VAR_2;
    LONG VAR_3, VAR_4;

    FUNC_0("Dumping ConfigurationDescriptor %x\n", VAR_0);
    FUNC_0("bLength %x\n", VAR_0->bLength);
    FUNC_0("bDescriptorType %x\n", VAR_0->bDescriptorType);
    FUNC_0("wTotalLength %x\n", VAR_0->wTotalLength);
    FUNC_0("bNumInterfaces %x\n", VAR_0->bNumInterfaces);
    FUNC_0("bConfigurationValue %x\n", VAR_0->bConfigurationValue);
    FUNC_0("iConfiguration %x\n", VAR_0->iConfiguration);
    FUNC_0("bmAttributes %x\n", VAR_0->bmAttributes);
    FUNC_0("MaxPower %x\n", VAR_0->MaxPower);

    VAR_1 = (PUSB_INTERFACE_DESCRIPTOR) ((ULONG_PTR)VAR_0 + sizeof(USB_CONFIGURATION_DESCRIPTOR));

    for (VAR_3=0; VAR_3 < VAR_0->bNumInterfaces; VAR_3++)
    {
        FUNC_0("- Dumping InterfaceDescriptor %x\n", VAR_1);
        FUNC_0("  bLength %x\n", VAR_1->bLength);
        FUNC_0("  bDescriptorType %x\n", VAR_1->bDescriptorType);
        FUNC_0("  bInterfaceNumber %x\n", VAR_1->bInterfaceNumber);
        FUNC_0("  bAlternateSetting %x\n", VAR_1->bAlternateSetting);
        FUNC_0("  bNumEndpoints %x\n", VAR_1->bNumEndpoints);
        FUNC_0("  bInterfaceClass %x\n", VAR_1->bInterfaceClass);
        FUNC_0("  bInterfaceSubClass %x\n", VAR_1->bInterfaceSubClass);
        FUNC_0("  bInterfaceProtocol %x\n", VAR_1->bInterfaceProtocol);
        FUNC_0("  iInterface %x\n", VAR_1->iInterface);

        VAR_2 = (PUSB_ENDPOINT_DESCRIPTOR) ((ULONG_PTR)VAR_1 + sizeof(USB_INTERFACE_DESCRIPTOR));

        for (VAR_4=0; VAR_4 < VAR_1->bNumEndpoints; VAR_4++)
        {
            FUNC_0("   bLength %x\n", VAR_2->bLength);
            FUNC_0("   bDescriptorType %x\n", VAR_2->bDescriptorType);
            FUNC_0("   bEndpointAddress %x\n", VAR_2->bEndpointAddress);
            FUNC_0("   bmAttributes %x\n", VAR_2->bmAttributes);
            FUNC_0("   wMaxPacketSize %x\n", VAR_2->wMaxPacketSize);
            FUNC_0("   bInterval %x\n", VAR_2->bInterval);
            VAR_2 = (PUSB_ENDPOINT_DESCRIPTOR) ((ULONG_PTR)VAR_2 + sizeof(USB_ENDPOINT_DESCRIPTOR));
        }
        VAR_1 = (PUSB_INTERFACE_DESCRIPTOR)(ULONG_PTR)VAR_2;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_4__ {struct TYPE_4__* bNumConfigurations; struct TYPE_4__* iSerialNumber; struct TYPE_4__* iProduct; struct TYPE_4__* iManufacturer; struct TYPE_4__* bcdDevice; struct TYPE_4__* idProduct; struct TYPE_4__* idVendor; struct TYPE_4__* bMaxPacketSize0; struct TYPE_4__* bDeviceProtocol; struct TYPE_4__* bDeviceSubClass; struct TYPE_4__* bDeviceClass; struct TYPE_4__* bcdUSB; struct TYPE_4__* bDescriptorType; struct TYPE_4__* bLength; } ;
typedef TYPE_1__* PUSB_DEVICE_DESCRIPTOR ;


 int FUNC_0 (char*,TYPE_1__*) ;

VOID
FUNC_1(PUSB_DEVICE_DESCRIPTOR VAR_0)
{
    FUNC_0("Dumping Device Descriptor %p\n", VAR_0);
    FUNC_0("bLength %x\n", VAR_0->bLength);
    FUNC_0("bDescriptorType %x\n", VAR_0->bDescriptorType);
    FUNC_0("bcdUSB %x\n", VAR_0->bcdUSB);
    FUNC_0("bDeviceClass %x\n", VAR_0->bDeviceClass);
    FUNC_0("bDeviceSubClass %x\n", VAR_0->bDeviceSubClass);
    FUNC_0("bDeviceProtocol %x\n", VAR_0->bDeviceProtocol);
    FUNC_0("bMaxPacketSize0 %x\n", VAR_0->bMaxPacketSize0);
    FUNC_0("idVendor %x\n", VAR_0->idVendor);
    FUNC_0("idProduct %x\n", VAR_0->idProduct);
    FUNC_0("bcdDevice %x\n", VAR_0->bcdDevice);
    FUNC_0("iManufacturer %x\n", VAR_0->iManufacturer);
    FUNC_0("iProduct %x\n", VAR_0->iProduct);
    FUNC_0("iSerialNumber %x\n", VAR_0->iSerialNumber);
    FUNC_0("bNumConfigurations %x\n", VAR_0->bNumConfigurations);
}

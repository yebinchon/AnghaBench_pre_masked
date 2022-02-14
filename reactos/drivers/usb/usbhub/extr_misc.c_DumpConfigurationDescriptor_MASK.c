
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_4__ {struct TYPE_4__* MaxPower; struct TYPE_4__* bmAttributes; struct TYPE_4__* iConfiguration; struct TYPE_4__* bConfigurationValue; struct TYPE_4__* bNumInterfaces; struct TYPE_4__* wTotalLength; struct TYPE_4__* bDescriptorType; struct TYPE_4__* bLength; } ;
typedef TYPE_1__* PUSB_CONFIGURATION_DESCRIPTOR ;


 int FUNC_0 (char*,TYPE_1__*) ;

VOID
FUNC_1(PUSB_CONFIGURATION_DESCRIPTOR VAR_0)
{
    FUNC_0("Dumping ConfigurationDescriptor %x\n", VAR_0);
    FUNC_0("bLength %x\n", VAR_0->bLength);
    FUNC_0("bDescriptorType %x\n", VAR_0->bDescriptorType);
    FUNC_0("wTotalLength %x\n", VAR_0->wTotalLength);
    FUNC_0("bNumInterfaces %x\n", VAR_0->bNumInterfaces);
    FUNC_0("bConfigurationValue %x\n", VAR_0->bConfigurationValue);
    FUNC_0("iConfiguration %x\n", VAR_0->iConfiguration);
    FUNC_0("bmAttributes %x\n", VAR_0->bmAttributes);
    FUNC_0("MaxPower %x\n", VAR_0->MaxPower);
}

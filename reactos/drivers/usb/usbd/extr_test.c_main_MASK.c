
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bLength; int bNumEndpoints; int bDescriptorType; int iInterface; } ;
typedef TYPE_1__ USB_INTERFACE_DESCRIPTOR ;
typedef int (* USBD_GetInterfaceLengthTYPE ) (TYPE_1__*,int ) ;
typedef int PUCHAR ;
typedef int InterfaceDescriptor ;
typedef int HMODULE ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int *,int ) ;
 int FUNC_3 (char*,int) ;

int FUNC_4()
{
    HMODULE VAR_1;
    USB_INTERFACE_DESCRIPTOR VAR_2;
    USBD_GetInterfaceLengthTYPE VAR_3;

    VAR_2.bLength = 10;
    VAR_2.bNumEndpoints = 2;
    VAR_2.bDescriptorType = 2;
    VAR_2.iInterface = 0x1;

    VAR_1 = FUNC_2("usbd.sys", ((void*)0), VAR_0);
    VAR_3 = (USBD_GetInterfaceLengthTYPE)FUNC_1(VAR_1, "USBD_GetInterfaceLength");
    FUNC_3("%X\n", VAR_3(&VAR_2, (PUCHAR)((DWORD)&VAR_2 + sizeof(VAR_2))));
    FUNC_0(VAR_1);

    VAR_1 = FUNC_2("usbd.ms", ((void*)0), VAR_0);
    VAR_3 = (USBD_GetInterfaceLengthTYPE)FUNC_1(VAR_1, "USBD_GetInterfaceLength");
    FUNC_3("%X\n", VAR_3(&VAR_2, (PUCHAR)((DWORD)&VAR_2 + sizeof(VAR_2))));
    FUNC_0(VAR_1);
    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbip_usb_interface {int bInterfaceProtocol; int bInterfaceSubClass; int bInterfaceClass; } ;
typedef int buff ;


 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (char*,int,int ,int ,int ) ;

void FUNC_2(struct usbip_usb_interface *VAR_0)
{
 char VAR_1[100];

 FUNC_1(VAR_1, sizeof(VAR_1),
   VAR_0->bInterfaceClass,
   VAR_0->bInterfaceSubClass,
   VAR_0->bInterfaceProtocol);
 FUNC_0("%-20s = %s", "Interface(C/SC/P)", VAR_1);
}

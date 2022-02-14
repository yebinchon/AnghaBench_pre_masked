
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbip_usb_device {int bcdDevice; int idProduct; int idVendor; int speed; int devnum; int busnum; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;

void FUNC_2(int VAR_0, struct usbip_usb_device *VAR_1)
{
 FUNC_1(VAR_0, &VAR_1->busnum);
 FUNC_1(VAR_0, &VAR_1->devnum);
 FUNC_1(VAR_0, &VAR_1->speed);

 FUNC_0(VAR_0, &VAR_1->idVendor);
 FUNC_0(VAR_0, &VAR_1->idProduct);
 FUNC_0(VAR_0, &VAR_1->bcdDevice);
}

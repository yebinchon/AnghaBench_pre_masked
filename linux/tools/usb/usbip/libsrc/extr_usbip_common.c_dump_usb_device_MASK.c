
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbip_usb_device {char* path; char* busid; int speed; int idProduct; int idVendor; int bDeviceProtocol; int bDeviceSubClass; int bDeviceClass; } ;
typedef int buff ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,char*,char*) ;
 int VAR_4 ;
 int FUNC_2 (char*,int,int ,int ,int ) ;
 int FUNC_3 (char*,int,int ,int ) ;
 char* FUNC_4 (int ) ;

void FUNC_5(struct usbip_usb_device *VAR_5)
{
 char VAR_6[100];

 FUNC_1("%-20s = %s", "path", VAR_5->path);
 FUNC_1("%-20s = %s", "busid", VAR_5->busid);

 FUNC_2(VAR_6, sizeof(VAR_6),
   VAR_5->bDeviceClass,
   VAR_5->bDeviceSubClass,
   VAR_5->bDeviceProtocol);
 FUNC_1("%-20s = %s", "Device(C/SC/P)", VAR_6);

 FUNC_0(VAR_2);

 FUNC_3(VAR_6, sizeof(VAR_6),
   VAR_5->idVendor,
   VAR_5->idProduct);
 FUNC_1("%-20s = %s", "Vendor/Product", VAR_6);

 FUNC_0(VAR_0);
 FUNC_0(VAR_1);

 FUNC_1("%-20s = %s", "speed",
   FUNC_4(VAR_5->speed));

 FUNC_0(VAR_3);
 FUNC_0(VAR_4);
}

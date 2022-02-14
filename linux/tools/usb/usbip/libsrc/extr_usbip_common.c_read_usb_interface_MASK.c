
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbip_usb_interface {int dummy; } ;
struct usbip_usb_device {char* busid; int bConfigurationValue; } ;
struct udev_device {int dummy; } ;
typedef int busid ;


 int FUNC_0 (struct usbip_usb_interface*,int ,struct udev_device*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int,char*,char*,int,int) ;
 int VAR_4 ;
 struct udev_device* FUNC_3 (int ,char*,char*) ;
 int VAR_5 ;

int FUNC_4(struct usbip_usb_device *VAR_6, int VAR_7,
         struct usbip_usb_interface *VAR_8)
{
 char VAR_9[VAR_0];
 int VAR_10;
 struct udev_device *VAR_11;

 VAR_10 = FUNC_2(VAR_9, sizeof(VAR_9), "%s:%d.%d",
   VAR_6->busid, VAR_6->bConfigurationValue, VAR_7);
 if (VAR_10 < 0 || (unsigned int)VAR_10 >= sizeof(VAR_9)) {
  FUNC_1("busid length %i >= %lu or < 0", VAR_10,
      (long unsigned)sizeof(VAR_9));
  return -1;
 }

 VAR_11 = FUNC_3(VAR_4, "usb", VAR_9);
 if (!VAR_11) {
  FUNC_1("udev_device_new_from_subsystem_sysname %s failed", VAR_9);
  return -1;
 }

 FUNC_0(VAR_8, VAR_5, VAR_11, VAR_1, "%02x\n");
 FUNC_0(VAR_8, VAR_5, VAR_11, VAR_3, "%02x\n");
 FUNC_0(VAR_8, VAR_5, VAR_11, VAR_2, "%02x\n");

 return 0;
}

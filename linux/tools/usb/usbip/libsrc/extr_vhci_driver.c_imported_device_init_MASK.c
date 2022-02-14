
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbip_imported_device {int udev; } ;
struct udev_device {int dummy; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (struct udev_device*,int *) ;
 int VAR_0 ;
 struct udev_device* FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (struct udev_device*) ;

__attribute__((used)) static struct usbip_imported_device *
FUNC_4(struct usbip_imported_device *VAR_1, char *VAR_2)
{
 struct udev_device *VAR_3;

 VAR_3 = FUNC_2(VAR_0,
             "usb", VAR_2);
 if (!VAR_3) {
  FUNC_0("udev_device_new_from_subsystem_sysname failed: %s", VAR_2);
  goto err;
 }
 FUNC_1(VAR_3, &VAR_1->udev);
 FUNC_3(VAR_3);

 return VAR_1;

err:
 return ((void*)0);
}

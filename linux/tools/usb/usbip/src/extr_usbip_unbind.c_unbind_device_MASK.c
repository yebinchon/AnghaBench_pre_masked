
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unbind_attr_path ;
struct udev_device {int dummy; } ;
struct udev {int dummy; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int,char*,char*,char*,char*,char*,char*,char*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (struct udev_device*) ;
 struct udev_device* FUNC_7 (struct udev*,char*,char*) ;
 int FUNC_8 (struct udev_device*) ;
 struct udev* FUNC_9 () ;
 int FUNC_10 (struct udev*) ;
 int FUNC_11 (char*,char*,int ) ;

__attribute__((used)) static int FUNC_12(char *VAR_5)
{
 char VAR_6[] = "usb";
 int VAR_7, VAR_8 = -1;

 char VAR_9[] = "unbind";
 char VAR_10[VAR_3];
 char VAR_11[] = "rebind";
 char VAR_12[VAR_3];

 struct udev *VAR_13;
 struct udev_device *VAR_14;
 const char *VAR_15;


 VAR_13 = FUNC_9();


 VAR_14 = FUNC_7(VAR_13, "usb", VAR_5);
 if (!VAR_14) {
  FUNC_0("device with the specified bus ID does not exist");
  goto err_close_udev;
 }


 VAR_15 = FUNC_6(VAR_14);
 if (!VAR_15 || FUNC_4(VAR_15, "usbip-host")) {
  FUNC_0("device is not bound to usbip-host driver");
  goto err_close_udev;
 }


 FUNC_3(VAR_10, sizeof(VAR_10), "%s/%s/%s/%s/%s/%s",
   VAR_2, VAR_0, VAR_6, VAR_1,
   VAR_4, VAR_9);

 VAR_7 = FUNC_11(VAR_10, VAR_5, FUNC_5(VAR_5));
 if (VAR_7 < 0) {
  FUNC_0("error unbinding device %s from driver", VAR_5);
  goto err_close_udev;
 }


 VAR_7 = FUNC_2(VAR_5, 0);
 if (VAR_7 < 0) {
  FUNC_0("unable to unbind device on %s", VAR_5);
  goto err_close_udev;
 }


 FUNC_3(VAR_12, sizeof(VAR_10), "%s/%s/%s/%s/%s/%s",
   VAR_2, VAR_0, VAR_6, VAR_1,
   VAR_4, VAR_11);

 VAR_7 = FUNC_11(VAR_12, VAR_5, FUNC_5(VAR_5));
 if (VAR_7 < 0) {
  FUNC_0("error rebinding");
  goto err_close_udev;
 }

 VAR_8 = 0;
 FUNC_1("unbind device on busid %s: complete", VAR_5);

err_close_udev:
 FUNC_8(VAR_14);
 FUNC_10(VAR_13);

 return VAR_8;
}

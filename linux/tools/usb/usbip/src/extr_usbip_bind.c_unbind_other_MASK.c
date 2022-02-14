
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unbind_attr_path ;
struct udev_device {int dummy; } ;
struct udev {int dummy; } ;
typedef enum unbind_status { ____Placeholder_unbind_status } unbind_status ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,char*,char*,char*,char*,char*,char const*,char*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*,char const*,int ) ;
 char* FUNC_5 (struct udev_device*) ;
 char* FUNC_6 (struct udev_device*,char*) ;
 struct udev_device* FUNC_7 (struct udev*,char*,char*) ;
 int FUNC_8 (struct udev_device*) ;
 struct udev* FUNC_9 () ;
 int FUNC_10 (struct udev*) ;
 int FUNC_11 (char*,char*,int ) ;

__attribute__((used)) static int FUNC_12(char *VAR_9)
{
 enum unbind_status VAR_10 = VAR_6;

 char VAR_11[] = "unbind";
 char VAR_12[VAR_4];
 int VAR_13 = -1;

 struct udev *VAR_14;
 struct udev_device *VAR_15;
 const char *VAR_16;
 const char *VAR_17;


 VAR_14 = FUNC_9();


 VAR_15 = FUNC_7(VAR_14, "usb", VAR_9);
 if (!VAR_15) {
  FUNC_0("unable to find device with bus ID %s", VAR_9);
  goto err_close_busid_dev;
 }


 VAR_17 = FUNC_6(VAR_15, "bDeviceClass");
 if (!VAR_17) {
  FUNC_0("unable to get bDevClass device attribute");
  goto err_close_busid_dev;
 }

 if (!FUNC_4(VAR_17, "09", FUNC_3(VAR_17))) {
  FUNC_0("skip unbinding of hub");
  goto err_close_busid_dev;
 }


 VAR_16 = FUNC_5(VAR_15);
 if (!VAR_16) {

  goto out;
 }

 if (!FUNC_4(VAR_8, VAR_16,
    FUNC_3(VAR_8))) {

  VAR_10 = VAR_7;
  goto out;
 }


 FUNC_2(VAR_12, sizeof(VAR_12), "%s/%s/%s/%s/%s/%s",
   VAR_3, VAR_0, VAR_1,
   VAR_2, VAR_16, VAR_11);

 VAR_13 = FUNC_11(VAR_12, VAR_9, FUNC_3(VAR_9));
 if (VAR_13 < 0) {
  FUNC_1("error unbinding device %s from driver", VAR_9);
  goto err_close_busid_dev;
 }

 goto out;

err_close_busid_dev:
 VAR_10 = VAR_5;
out:
 FUNC_8(VAR_15);
 FUNC_10(VAR_14);

 return VAR_10;
}

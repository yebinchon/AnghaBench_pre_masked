
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udev_device {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char const*,char const*,int*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 char* FUNC_3 (struct udev_device*,char const*) ;

int FUNC_4(struct udev_device *VAR_0, const char *VAR_1,
      const char *VAR_2)
{
 const char *VAR_3;
 int VAR_4 = 0;
 int VAR_5;

 VAR_3 = FUNC_3(VAR_0, VAR_1);
 if (!VAR_3) {
  FUNC_0("udev_device_get_sysattr_value failed");
  goto err;
 }
 VAR_5 = FUNC_1(VAR_3, VAR_2, &VAR_4);
 if (VAR_5 < 1) {
  if (FUNC_2(VAR_1, "bConfigurationValue") &&
    FUNC_2(VAR_1, "bNumInterfaces")) {
   FUNC_0("sscanf failed for attribute %s", VAR_1);
   goto err;
  }
 }

err:

 return VAR_4;
}

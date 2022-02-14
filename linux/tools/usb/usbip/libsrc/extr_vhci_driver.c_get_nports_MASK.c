
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udev_device {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,int *,int) ;
 char* FUNC_2 (struct udev_device*,char*) ;

__attribute__((used)) static int FUNC_3(struct udev_device *VAR_0)
{
 const char *VAR_1;

 VAR_1 = FUNC_2(VAR_0, "nports");
 if (!VAR_1) {
  FUNC_0("udev_device_get_sysattr_value nports failed");
  return -1;
 }

 return (int)FUNC_1(VAR_1, ((void*)0), 10);
}

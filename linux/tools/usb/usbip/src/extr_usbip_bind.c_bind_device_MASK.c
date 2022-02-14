
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udev_device {int dummy; } ;
struct udev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (char const*,int ) ;
 char* FUNC_5 (struct udev_device*) ;
 struct udev_device* FUNC_6 (struct udev*,char*,char*) ;
 struct udev* FUNC_7 () ;
 int FUNC_8 (struct udev*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(char *VAR_4)
{
 int VAR_5;
 struct udev *VAR_6;
 struct udev_device *VAR_7;
 const char *VAR_8;


 VAR_6 = FUNC_7();
 VAR_7 = FUNC_6(VAR_6, "usb", VAR_4);
 if (!VAR_7) {
  FUNC_1("device with the specified bus ID does not exist");
  return -1;
 }
 VAR_8 = FUNC_5(VAR_7);
 FUNC_8(VAR_6);


 if (FUNC_4(VAR_8, VAR_3)) {
  FUNC_1("bind loop detected: device: %s is attached to %s\n",
      VAR_8, VAR_3);
  return -1;
 }

 VAR_5 = FUNC_9(VAR_4);
 if (VAR_5 == VAR_0) {
  FUNC_1("could not unbind driver from device on busid %s", VAR_4);
  return -1;
 } else if (VAR_5 == VAR_1) {
  FUNC_1("device on busid %s is already bound to %s", VAR_4,
      VAR_2);
  return -1;
 }

 VAR_5 = FUNC_3(VAR_4, 1);
 if (VAR_5 < 0) {
  FUNC_1("unable to bind device on %s", VAR_4);
  return -1;
 }

 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5 < 0) {
  FUNC_1("could not bind device to %s", VAR_2);
  FUNC_3(VAR_4, 0);
  return -1;
 }

 FUNC_2("bind device on busid %s: complete", VAR_4);

 return 0;
}

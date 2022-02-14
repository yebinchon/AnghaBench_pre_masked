
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct usbip_usb_device {char* path; char* busid; int busnum; int speed; } ;
struct udev_device {int dummy; } ;


 int FUNC_0 (struct usbip_usb_device*,int ,struct udev_device*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct udev_device*) ;
 int FUNC_2 (char const*,char*,int *,int *) ;
 int FUNC_3 (char*,char const*,int) ;
 char* FUNC_4 (struct udev_device*) ;
 char* FUNC_5 (struct udev_device*) ;
 int VAR_11 ;
 int VAR_12 ;

int FUNC_6(struct udev_device *VAR_13, struct usbip_usb_device *VAR_14)
{
 uint32_t VAR_15, VAR_16;
 const char *VAR_17, *VAR_18;

 FUNC_0(VAR_14, VAR_12, VAR_13, VAR_3, "%02x\n");
 FUNC_0(VAR_14, VAR_12, VAR_13, VAR_5, "%02x\n");
 FUNC_0(VAR_14, VAR_12, VAR_13, VAR_4, "%02x\n");

 FUNC_0(VAR_14, VAR_11, VAR_13, VAR_10, "%04x\n");
 FUNC_0(VAR_14, VAR_11, VAR_13, VAR_9, "%04x\n");
 FUNC_0(VAR_14, VAR_11, VAR_13, VAR_8, "%04x\n");

 FUNC_0(VAR_14, VAR_12, VAR_13, VAR_2, "%02x\n");
 FUNC_0(VAR_14, VAR_12, VAR_13, VAR_6, "%02x\n");
 FUNC_0(VAR_14, VAR_12, VAR_13, VAR_7, "%02x\n");

 FUNC_0(VAR_14, VAR_12, VAR_13, VAR_16, "%d\n");
 VAR_14->speed = FUNC_1(VAR_13);

 VAR_17 = FUNC_5(VAR_13);
 VAR_18 = FUNC_4(VAR_13);

 FUNC_3(VAR_14->path, VAR_17, VAR_1 - 1);
 VAR_14->path[VAR_1 - 1] = '\0';
 FUNC_3(VAR_14->busid, VAR_18, VAR_0 - 1);
 VAR_14->busid[VAR_0 - 1] = '\0';

 FUNC_2(VAR_18, "%u-%u", &VAR_15, &VAR_16);
 VAR_14->busnum = VAR_15;

 return 0;
}

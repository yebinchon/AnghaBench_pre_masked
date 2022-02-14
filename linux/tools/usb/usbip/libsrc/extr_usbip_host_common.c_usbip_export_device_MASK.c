
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int busid; char* path; } ;
struct usbip_exported_device {int status; TYPE_1__ udev; } ;
typedef int sockfd_buff ;
typedef int sockfd_attr_path ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int,char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int ) ;

int FUNC_6(struct usbip_exported_device *VAR_4, int VAR_5)
{
 char VAR_6[] = "usbip_sockfd";
 char VAR_7[VAR_3];
 int VAR_8;
 char VAR_9[30];
 int VAR_10;

 if (VAR_4->status != VAR_0) {
  FUNC_0("device not available: %s", VAR_4->udev.busid);
  switch (VAR_4->status) {
  case 129:
   FUNC_0("status SDEV_ST_ERROR");
   VAR_10 = VAR_2;
   break;
  case 128:
   FUNC_0("status SDEV_ST_USED");
   VAR_10 = VAR_1;
   break;
  default:
   FUNC_0("status unknown: 0x%x", VAR_4->status);
   VAR_10 = -1;
  }
  return VAR_10;
 }


 VAR_8 = FUNC_3(VAR_7, sizeof(VAR_7), "%s/%s",
   VAR_4->udev.path, VAR_6);
 if (VAR_8 < 0 || (unsigned int)VAR_8 >= sizeof(VAR_7)) {
  FUNC_1("exported device path length %i >= %lu or < 0", VAR_8,
      (long unsigned)sizeof(VAR_7));
  return -1;
 }

 VAR_8 = FUNC_3(VAR_9, sizeof(VAR_9), "%d\n", VAR_5);
 if (VAR_8 < 0 || (unsigned int)VAR_8 >= sizeof(VAR_9)) {
  FUNC_1("socket length %i >= %lu or < 0", VAR_8,
      (long unsigned)sizeof(VAR_9));
  return -1;
 }

 VAR_10 = FUNC_5(VAR_7, VAR_9,
        FUNC_4(VAR_9));
 if (VAR_10 < 0) {
  FUNC_1("write_sysfs_attribute failed: sockfd %s to %s",
      VAR_9, VAR_7);
  return VAR_10;
 }

 FUNC_2("connect: %s", VAR_4->udev.busid);

 return VAR_10;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbip_usb_device {char* path; } ;
typedef int status_attr_path ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (char*,int,char*,char*) ;

__attribute__((used)) static int32_t FUNC_6(struct usbip_usb_device *VAR_2)
{
 char VAR_3[VAR_1];
 int VAR_4;
 int VAR_5;
 int VAR_6;
 char VAR_7[2] = { 0 };
 int VAR_8 = 0;

 VAR_4 = FUNC_5(VAR_3, sizeof(VAR_3),
   "%s/usbip_status", VAR_2->path);
 if (VAR_4 < 0 || (unsigned int)VAR_4 >= sizeof(VAR_3)) {
  FUNC_2("usbip_status path length %i >= %lu or < 0", VAR_4,
      (long unsigned)sizeof(VAR_3));
  return -1;
 }


 VAR_5 = FUNC_3(VAR_3, VAR_0);
 if (VAR_5 < 0) {
  FUNC_2("error opening attribute %s", VAR_3);
  return -1;
 }

 VAR_6 = FUNC_4(VAR_5, VAR_7, 1);
 if (VAR_6 < 0) {
  FUNC_2("error reading attribute %s", VAR_3);
  FUNC_1(VAR_5);
  return -1;
 }

 VAR_8 = FUNC_0(VAR_7);

 return VAR_8;
}

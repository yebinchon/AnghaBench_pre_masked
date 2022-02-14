
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_event_data {int dummy; } ;
typedef int event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char**,char*,int) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,int ,int*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct iio_event_data*) ;
 int FUNC_9 (char*,char const*,int) ;
 int FUNC_10 (int,struct iio_event_data*,int) ;
 int VAR_6 ;
 char* FUNC_11 (char const*) ;

int FUNC_12(int VAR_7, char **VAR_8)
{
 struct iio_event_data VAR_9;
 const char *VAR_10;
 char *VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14, VAR_15;

 if (VAR_7 <= 1) {
  FUNC_3(VAR_6, "Usage: %s <device_name>\n", VAR_8[0]);
  return -1;
 }

 VAR_10 = VAR_8[1];

 VAR_13 = FUNC_2(VAR_10, "iio:device");
 if (VAR_13 >= 0) {
  FUNC_9("Found IIO device with name %s with device number %d\n",
         VAR_10, VAR_13);
  VAR_12 = FUNC_0(&VAR_11, "/dev/iio:device%d", VAR_13);
  if (VAR_12 < 0)
   return -VAR_3;
 } else {




  VAR_11 = FUNC_11(VAR_10);
  if (!VAR_11)
   return -VAR_3;
 }

 VAR_14 = FUNC_6(VAR_11, 0);
 if (VAR_14 == -1) {
  VAR_12 = -VAR_5;
  FUNC_3(VAR_6, "Failed to open %s\n", VAR_11);
  goto error_free_chrdev_name;
 }

 VAR_12 = FUNC_5(VAR_14, VAR_4, &VAR_15);
 if (VAR_12 == -1 || VAR_15 == -1) {
  VAR_12 = -VAR_5;
  if (VAR_12 == -VAR_2)
   FUNC_3(VAR_6,
    "This device does not support events\n");
  else
   FUNC_3(VAR_6, "Failed to retrieve event fd\n");
  if (FUNC_1(VAR_14) == -1)
   FUNC_7("Failed to close character device file");

  goto error_free_chrdev_name;
 }

 if (FUNC_1(VAR_14) == -1) {
  VAR_12 = -VAR_5;
  goto error_free_chrdev_name;
 }

 while (1) {
  VAR_12 = FUNC_10(VAR_15, &VAR_9, sizeof(VAR_9));
  if (VAR_12 == -1) {
   if (VAR_5 == VAR_0) {
    FUNC_3(VAR_6, "nothing available\n");
    continue;
   } else {
    VAR_12 = -VAR_5;
    FUNC_7("Failed to read event from device");
    break;
   }
  }

  if (VAR_12 != sizeof(VAR_9)) {
   FUNC_3(VAR_6, "Reading event failed!\n");
   VAR_12 = -VAR_1;
   break;
  }

  FUNC_8(&VAR_9);
 }

 if (FUNC_1(VAR_15) == -1)
  FUNC_7("Failed to close event file");

error_free_chrdev_name:
 FUNC_4(VAR_11);

 return VAR_12;
}

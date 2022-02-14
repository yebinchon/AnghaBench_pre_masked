
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct gpiohandle_data {unsigned int lineoffset; int fd; int* values; int consumer_label; void* eventflags; void* handleflags; } ;
struct gpioevent_request {unsigned int lineoffset; int fd; int* values; int consumer_label; void* eventflags; void* handleflags; } ;
struct gpioevent_data {int id; int timestamp; } ;
typedef int event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char**,char*,char const*) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int ,struct gpiohandle_data*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,struct gpioevent_data*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int ,char*) ;

int FUNC_9(const char *VAR_8,
     unsigned int VAR_9,
     uint32_t VAR_10,
     uint32_t VAR_11,
     unsigned int VAR_12)
{
 struct gpioevent_request VAR_13;
 struct gpiohandle_data VAR_14;
 char *VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18 = 0;

 VAR_17 = FUNC_0(&VAR_15, "/dev/%s", VAR_8);
 if (VAR_17 < 0)
  return -VAR_2;

 VAR_16 = FUNC_5(VAR_15, 0);
 if (VAR_16 == -1) {
  VAR_17 = -VAR_5;
  FUNC_2(VAR_6, "Failed to open %s\n", VAR_15);
  goto exit_close_error;
 }

 VAR_13.lineoffset = VAR_9;
 VAR_13.handleflags = VAR_10;
 VAR_13.eventflags = VAR_11;
 FUNC_8(VAR_13.consumer_label, "gpio-event-mon");

 VAR_17 = FUNC_4(VAR_16, VAR_4, &VAR_13);
 if (VAR_17 == -1) {
  VAR_17 = -VAR_5;
  FUNC_2(VAR_6, "Failed to issue GET EVENT "
   "IOCTL (%d)\n",
   VAR_17);
  goto exit_close_error;
 }


 VAR_17 = FUNC_4(VAR_13.fd, VAR_3, &VAR_14);
 if (VAR_17 == -1) {
  VAR_17 = -VAR_5;
  FUNC_2(VAR_6, "Failed to issue GPIOHANDLE GET LINE "
   "VALUES IOCTL (%d)\n",
   VAR_17);
  goto exit_close_error;
 }

 FUNC_2(VAR_7, "Monitoring line %d on %s\n", VAR_9, VAR_8);
 FUNC_2(VAR_7, "Initial line value: %d\n", VAR_14.values[0]);

 while (1) {
  struct gpioevent_data VAR_19;

  VAR_17 = FUNC_7(VAR_13.fd, &VAR_19, sizeof(VAR_19));
  if (VAR_17 == -1) {
   if (VAR_5 == -VAR_0) {
    FUNC_2(VAR_6, "nothing available\n");
    continue;
   } else {
    VAR_17 = -VAR_5;
    FUNC_2(VAR_6, "Failed to read event (%d)\n",
     VAR_17);
    break;
   }
  }

  if (VAR_17 != sizeof(VAR_19)) {
   FUNC_2(VAR_6, "Reading event failed\n");
   VAR_17 = -VAR_1;
   break;
  }
  FUNC_2(VAR_7, "GPIO EVENT %d: ", VAR_19.timestamp);
  switch (VAR_19.id) {
  case 128:
   FUNC_2(VAR_7, "rising edge");
   break;
  case 129:
   FUNC_2(VAR_7, "falling edge");
   break;
  default:
   FUNC_2(VAR_7, "unknown event");
  }
  FUNC_2(VAR_7, "\n");

  VAR_18++;
  if (VAR_18 == VAR_12)
   break;
 }

exit_close_error:
 if (FUNC_1(VAR_16) == -1)
  FUNC_6("Failed to close GPIO character device file");
 FUNC_3(VAR_15);
 return VAR_17;
}

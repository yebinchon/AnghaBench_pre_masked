
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiohandle_request {unsigned int* lineoffsets; unsigned int flags; unsigned int lines; int fd; int default_values; int consumer_label; } ;
struct gpiohandle_data {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char**,char*,char const*) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int ,struct gpiohandle_request*) ;
 int FUNC_5 (int ,struct gpiohandle_data*,int) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*) ;
 int VAR_4 ;
 int FUNC_8 (int ,char const*) ;
 char* FUNC_9 (int) ;

int FUNC_10(const char *VAR_5, unsigned int *VAR_6,
     unsigned int VAR_7, unsigned int VAR_8,
     struct gpiohandle_data *VAR_9,
     const char *VAR_10)
{
 struct gpiohandle_request VAR_11;
 char *VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_15 = FUNC_0(&VAR_12, "/dev/%s", VAR_5);
 if (VAR_15 < 0)
  return -VAR_0;

 VAR_13 = FUNC_6(VAR_12, 0);
 if (VAR_13 == -1) {
  VAR_15 = -VAR_3;
  FUNC_2(VAR_4, "Failed to open %s, %s\n",
   VAR_12, FUNC_9(VAR_3));
  goto exit_close_error;
 }

 for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++)
  VAR_11.lineoffsets[VAR_14] = VAR_6[VAR_14];

 VAR_11.flags = VAR_8;
 FUNC_8(VAR_11.consumer_label, VAR_10);
 VAR_11.lines = VAR_7;
 if (VAR_8 & VAR_1)
  FUNC_5(VAR_11.default_values, VAR_9, sizeof(VAR_11.default_values));

 VAR_15 = FUNC_4(VAR_13, VAR_2, &VAR_11);
 if (VAR_15 == -1) {
  VAR_15 = -VAR_3;
  FUNC_2(VAR_4, "Failed to issue %s (%d), %s\n",
   "GPIO_GET_LINEHANDLE_IOCTL", VAR_15, FUNC_9(VAR_3));
 }

exit_close_error:
 if (FUNC_1(VAR_13) == -1)
  FUNC_7("Failed to close GPIO character device file");
 FUNC_3(VAR_12);
 return VAR_15 < 0 ? VAR_15 : VAR_11.fd;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_dev ;
struct v4l2_tuner {char* driver; int type; int rangelow; int rangehigh; } ;
struct v4l2_capability {char* driver; int type; int rangelow; int rangehigh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char**,char*) ;
 int FUNC_2 (int,int ,struct v4l2_tuner*) ;
 int FUNC_3 (char*,int ) ;
 int VAR_4 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (unsigned int) ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (char*,int ,int) ;
 scalar_t__ FUNC_10 (int *) ;

int FUNC_11(int VAR_5, char **VAR_6)
{
 int VAR_7;
 char VAR_8[256];
 int VAR_9;
 struct v4l2_tuner VAR_10;
 struct v4l2_capability VAR_11;
 int VAR_12;
 int VAR_13;

 if (VAR_5 < 2) {
  FUNC_4("Usage: %s [-d </dev/videoX>]\n", VAR_6[0]);
  FUNC_0(-1);
 }


 while ((VAR_7 = FUNC_1(VAR_5, VAR_6, "d:")) != -1) {
  switch (VAR_7) {
  case 'd':
   FUNC_9(VAR_8, VAR_4, sizeof(VAR_8) - 1);
   VAR_8[sizeof(VAR_8)-1] = '\0';
   break;
  default:
   FUNC_4("Usage: %s [-d </dev/videoX>]\n", VAR_6[0]);
   FUNC_0(-1);
  }
 }


 FUNC_7((unsigned int) FUNC_10(((void*)0)));
 VAR_9 = FUNC_5();


 VAR_13 = FUNC_3(VAR_8, VAR_0);
 if (VAR_13 == -1) {
  FUNC_4("Video Device open errno %s\n", FUNC_8(VAR_3));
  FUNC_0(-1);
 }

 FUNC_4("\nNote:\n"
        "While test is running, remove the device or unbind\n"
        "driver and ensure there are no use after free errors\n"
        "and other Oops in the dmesg. When possible, enable KaSan\n"
        "kernel config option for use-after-free error detection.\n\n");

 while (VAR_9 > 0) {
  VAR_12 = FUNC_2(VAR_13, VAR_2, &VAR_11);
  if (VAR_12 < 0)
   FUNC_4("VIDIOC_QUERYCAP errno %s\n", FUNC_8(VAR_3));
  else
   FUNC_4("Video device driver %s\n", VAR_11.driver);

  VAR_12 = FUNC_2(VAR_13, VAR_1, &VAR_10);
  if (VAR_12 < 0)
   FUNC_4("VIDIOC_G_TUNER, errno %s\n", FUNC_8(VAR_3));
  else
   FUNC_4("type %d rangelow %d rangehigh %d\n",
    VAR_10.type, VAR_10.rangelow, VAR_10.rangehigh);
  FUNC_6(10);
  VAR_9--;
 }
}

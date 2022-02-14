
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uleds_dev ;
struct uleds_user_dev {int max_brightness; int name; } ;
struct timespec {int tv_nsec; int tv_sec; } ;
typedef int brightness ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int ,int ,int) ;
 int FUNC_6 (int,int*,int) ;
 int VAR_3 ;
 int FUNC_7 (int ,char const*,int ) ;
 int FUNC_8 (int,struct uleds_user_dev*,int) ;

int FUNC_9(int VAR_4, char const *VAR_5[])
{
 struct uleds_user_dev VAR_6;
 int VAR_7, VAR_8;
 int VAR_9;
 struct timespec VAR_10;

 if (VAR_4 != 2) {
  FUNC_2(VAR_3, "Requires <device-name> argument\n");
  return 1;
 }

 FUNC_7(VAR_6.name, VAR_5[1], VAR_1);
 VAR_6.max_brightness = 100;

 VAR_7 = FUNC_3("/dev/uleds", VAR_2);
 if (VAR_7 == -1) {
  FUNC_4("Failed to open /dev/uleds");
  return 1;
 }

 VAR_8 = FUNC_8(VAR_7, &VAR_6, sizeof(VAR_6));
 if (VAR_8 == -1) {
  FUNC_4("Failed to write to /dev/uleds");
  FUNC_1(VAR_7);
  return 1;
 }

 while (1) {
  VAR_8 = FUNC_6(VAR_7, &VAR_9, sizeof(VAR_9));
  if (VAR_8 == -1) {
   FUNC_4("Failed to read from /dev/uleds");
   FUNC_1(VAR_7);
   return 1;
  }
  FUNC_0(VAR_0, &VAR_10);
  FUNC_5("[%ld.%09ld] %u\n", VAR_10.tv_sec, VAR_10.tv_nsec, VAR_9);
 }

 FUNC_1(VAR_7);

 return 0;
}

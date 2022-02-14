
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_mday; int tm_mon; int tm_year; int tm_hour; int tm_min; int tm_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int,int ,struct rtc_time*) ;
 int FUNC_4 (char const*,int ) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char const*,char*,int*,int*,int*) ;
 int VAR_5 ;

int FUNC_7(int VAR_6, char **VAR_7)
{
 int VAR_8, VAR_9;
 struct rtc_time VAR_10, VAR_11;
 const char *VAR_12, *VAR_13;
 const char *VAR_14 = VAR_3;

 switch (VAR_6) {
 case 4:
  VAR_14 = VAR_7[3];

 case 3:
  VAR_13 = VAR_7[2];
  VAR_12 = VAR_7[1];
  break;
 default:
  FUNC_2(VAR_5, "usage: rtctest_setdate <rtcdev> <DD-MM-YYYY> [HH:MM:SS]\n");
  return 1;
 }

 VAR_8 = FUNC_4(VAR_12, VAR_0);
 if (VAR_8 == -1) {
  FUNC_5(VAR_12);
  FUNC_1(VAR_4);
 }

 FUNC_6(VAR_13, "%d-%d-%d", &VAR_10.tm_mday, &VAR_10.tm_mon, &VAR_10.tm_year);
 VAR_10.tm_mon -= 1;
 VAR_10.tm_year -= 1900;
 FUNC_6(VAR_14, "%d:%d:%d", &VAR_10.tm_hour, &VAR_10.tm_min, &VAR_10.tm_sec);

 FUNC_2(VAR_5, "Test will set RTC date/time to %d-%d-%d, %02d:%02d:%02d.\n",
  VAR_10.tm_mday, VAR_10.tm_mon + 1, VAR_10.tm_year + 1900,
  VAR_10.tm_hour, VAR_10.tm_min, VAR_10.tm_sec);


 VAR_9 = FUNC_3(VAR_8, VAR_2, &VAR_10);
 if (VAR_9 == -1) {
  FUNC_5("RTC_SET_TIME ioctl");
  FUNC_0(VAR_8);
  FUNC_1(VAR_4);
 }


 VAR_9 = FUNC_3(VAR_8, VAR_1, &VAR_11);
 if (VAR_9 == -1) {
  FUNC_5("RTC_RD_TIME ioctl");
  FUNC_1(VAR_4);
 }

 FUNC_2(VAR_5, "\n\nCurrent RTC date/time is %d-%d-%d, %02d:%02d:%02d.\n",
  VAR_11.tm_mday, VAR_11.tm_mon + 1, VAR_11.tm_year + 1900,
  VAR_11.tm_hour, VAR_11.tm_min, VAR_11.tm_sec);

 FUNC_0(VAR_8);
 return 0;
}

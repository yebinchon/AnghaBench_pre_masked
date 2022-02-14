
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ time_t ;
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_wday; int tm_mday; scalar_t__ tm_mon; } ;
struct rtc_timeval {scalar_t__ tv_sec; int tv_usec; } ;


 int FUNC_0 (scalar_t__,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__*,struct tm*) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (struct rtc_timeval*) ;

__attribute__((used)) static void FUNC_4() {
  struct rtc_timeval VAR_1;
  FUNC_3(&VAR_1);
  if (VAR_1.tv_sec == 0) {
    FUNC_2(&VAR_0, 1000, 0);
    return;
  }
  time_t VAR_2 = VAR_1.tv_sec;
  struct tm VAR_3;
  FUNC_1(&VAR_2, &VAR_3);
  uint32_t VAR_4 = 60000 - VAR_3.tm_sec * 1000 - VAR_1.tv_usec / 1000;
  if (VAR_3.tm_sec == 59) {
    VAR_2++;
    VAR_4 += 60000;
    FUNC_1(&VAR_2, &VAR_3);
  }
  FUNC_2(&VAR_0, VAR_4, 0);
  FUNC_0(VAR_3.tm_mon + 1, VAR_3.tm_mday, VAR_3.tm_wday, VAR_3.tm_hour, VAR_3.tm_min);
}

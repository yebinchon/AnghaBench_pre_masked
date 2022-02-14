
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_isdst; } ;


 int FUNC_0 (struct tm) ;
 struct tm* FUNC_1 (scalar_t__*) ;
 scalar_t__ FUNC_2 (struct tm*) ;

__attribute__((used)) static
time_t FUNC_3(int VAR_0, int VAR_1)
{
 struct tm VAR_2, VAR_3, *VAR_4;
 time_t VAR_5, VAR_6, VAR_7;

 FUNC_0(VAR_2);
 FUNC_0(VAR_3);
 VAR_7 = 0;

 VAR_2.tm_year = 94;
 VAR_2.tm_mon = VAR_0;
 VAR_2.tm_mday = VAR_1;
 VAR_2.tm_hour = 12;
 VAR_2.tm_isdst = -1;
 VAR_5 = FUNC_2(&VAR_2);

 if (VAR_5 != (time_t) -1) {
  VAR_4 = FUNC_1(&VAR_5);
  VAR_3.tm_year = VAR_4->tm_year;
  VAR_3.tm_mon = VAR_4->tm_mon;
  VAR_3.tm_mday = VAR_4->tm_mday;
  VAR_3.tm_hour = VAR_4->tm_hour;
  VAR_3.tm_isdst = -1;
  VAR_6 = FUNC_2(&VAR_3);

  if (VAR_6 != (time_t) -1)
   VAR_7 = (VAR_5 - VAR_6);
 }
 return (VAR_7);
}

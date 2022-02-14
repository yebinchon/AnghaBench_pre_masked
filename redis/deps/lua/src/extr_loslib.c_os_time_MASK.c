
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct tm {int tm_isdst; void* tm_year; void* tm_mon; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
typedef int lua_State ;
typedef int lua_Number ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 void* FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int,int ) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (struct tm*) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9 (lua_State *VAR_1) {
  time_t VAR_2;
  if (FUNC_3(VAR_1, 1))
    VAR_2 = FUNC_8(((void*)0));
  else {
    struct tm VAR_3;
    FUNC_2(VAR_1, 1, VAR_0);
    FUNC_6(VAR_1, 1);
    VAR_3.tm_sec = FUNC_1(VAR_1, "sec", 0);
    VAR_3.tm_min = FUNC_1(VAR_1, "min", 0);
    VAR_3.tm_hour = FUNC_1(VAR_1, "hour", 12);
    VAR_3.tm_mday = FUNC_1(VAR_1, "day", -1);
    VAR_3.tm_mon = FUNC_1(VAR_1, "month", -1) - 1;
    VAR_3.tm_year = FUNC_1(VAR_1, "year", -1) - 1900;
    VAR_3.tm_isdst = FUNC_0(VAR_1, "isdst");
    VAR_2 = FUNC_7(&VAR_3);
  }
  if (VAR_2 == (time_t)(-1))
    FUNC_4(VAR_1);
  else
    FUNC_5(VAR_1, (lua_Number)VAR_2);
  return 1;
}

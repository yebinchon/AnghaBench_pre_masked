
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_isdst; scalar_t__ tm_yday; scalar_t__ tm_wday; scalar_t__ tm_year; scalar_t__ tm_mon; scalar_t__ tm_mday; scalar_t__ tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; } ;
typedef int lua_State ;
typedef int luaL_Buffer ;
typedef int buff ;


 struct tm* FUNC_0 (int *) ;
 struct tm* FUNC_1 (int *) ;
 int FUNC_2 (int *,char const) ;
 int FUNC_3 (int *,char*,size_t) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int *,int ,int,int ) ;
 char* FUNC_6 (int *,int,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char*,int ) ;
 int FUNC_11 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_12 (char const*,char*) ;
 size_t FUNC_13 (char*,int,char*,struct tm*) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15 (lua_State *VAR_1) {
  const char *VAR_2 = FUNC_6(VAR_1, 1, "%c");
  time_t VAR_3 = FUNC_5(VAR_1, (time_t)VAR_0, 2, FUNC_14(((void*)0)));
  struct tm *VAR_4;
  if (*VAR_2 == '!') {
    VAR_4 = FUNC_0(&VAR_3);
    VAR_2++;
  }
  else
    VAR_4 = FUNC_1(&VAR_3);
  if (VAR_4 == ((void*)0))
    FUNC_9(VAR_1);
  else if (FUNC_12(VAR_2, "*t") == 0) {
    FUNC_8(VAR_1, 0, 9);
    FUNC_11(VAR_1, "sec", VAR_4->tm_sec);
    FUNC_11(VAR_1, "min", VAR_4->tm_min);
    FUNC_11(VAR_1, "hour", VAR_4->tm_hour);
    FUNC_11(VAR_1, "day", VAR_4->tm_mday);
    FUNC_11(VAR_1, "month", VAR_4->tm_mon+1);
    FUNC_11(VAR_1, "year", VAR_4->tm_year+1900);
    FUNC_11(VAR_1, "wday", VAR_4->tm_wday+1);
    FUNC_11(VAR_1, "yday", VAR_4->tm_yday+1);
    FUNC_10(VAR_1, "isdst", VAR_4->tm_isdst);
  }
  else {
    char VAR_5[3];
    luaL_Buffer VAR_6;
    VAR_5[0] = '%'; VAR_5[2] = '\0';
    FUNC_4(VAR_1, &VAR_6);
    for (; *VAR_2; VAR_2++) {
      if (*VAR_2 != '%' || *(VAR_2 + 1) == '\0')
        FUNC_2(&VAR_6, *VAR_2);
      else {
        size_t VAR_7;
        char VAR_8[200];
        VAR_5[1] = *(++VAR_2);
        VAR_7 = FUNC_13(VAR_8, sizeof(VAR_8), VAR_5, VAR_4);
        FUNC_3(&VAR_6, VAR_8, VAR_7);
      }
    }
    FUNC_7(&VAR_6);
  }
  return 1;
}

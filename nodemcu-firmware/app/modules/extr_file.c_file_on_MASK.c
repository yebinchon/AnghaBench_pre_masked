
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (int *,int,char*,char const* const*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int VAR_5 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(lua_State *VAR_6)
{
  enum events{
    ON_RTC = 0
  };
  const char *const VAR_7[] = {"rtc", ((void*)0)};

  int VAR_8 = FUNC_0(VAR_6, 1, "rtc", VAR_7);

  switch (VAR_8) {
  case ON_RTC:
    FUNC_2(VAR_6, VAR_1, VAR_5);

    if ((FUNC_4(VAR_6, 2) == VAR_2) ||
        (FUNC_4(VAR_6, 2) == VAR_3)) {
      FUNC_3(VAR_6, 2);
      VAR_5 = FUNC_1(VAR_6, VAR_1);
      FUNC_5(VAR_4);
    } else {
      VAR_5 = VAR_0;
      FUNC_5(((void*)0));
    }
    break;
  default:
    break;
  }

  return 0;
}

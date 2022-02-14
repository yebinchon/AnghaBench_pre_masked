
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int const VAR_0 ;
 int FUNC_0 (int *,int,int,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int const,int const,int const,int const,int const) ;

__attribute__((used)) static int FUNC_6(lua_State *VAR_1, const bool VAR_2) {
  if (FUNC_4()) {
    return FUNC_1(VAR_1, "pwm2 : already started, stop it before setting up pins.");
  }
  const int VAR_3 = FUNC_3(VAR_1, 1);
  const int VAR_4 = FUNC_3(VAR_1, 2);
  const int VAR_5 = FUNC_3(VAR_1, 3);
  const int VAR_6 = FUNC_3(VAR_1, 4);
  const int VAR_7 = FUNC_2(VAR_1, 5, 1);

  FUNC_0(VAR_1, VAR_3 > 0 && VAR_3 <= VAR_0, 1, "invalid pin number");
  FUNC_0(VAR_1, VAR_4 > 0, 2, "invalid frequency");
  FUNC_0(VAR_1, VAR_5 > 0, 3, "invalid frequency resolution");
  FUNC_0(VAR_1, VAR_6 >= 0 && VAR_6 <= VAR_5, 4, "invalid duty");
  FUNC_0(VAR_1, VAR_7 > 0, 5, "invalid frequency fractions");

  if (VAR_2) {
    FUNC_5(VAR_3, VAR_7, VAR_4, VAR_5, VAR_6);
  } else {
    FUNC_5(VAR_3, VAR_4, VAR_7, VAR_5, VAR_6);
  }
  return 0;
}

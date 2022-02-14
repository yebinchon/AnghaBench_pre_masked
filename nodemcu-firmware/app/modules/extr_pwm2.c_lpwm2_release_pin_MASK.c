
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int,int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(lua_State *VAR_1) {
  if (FUNC_3()) {
    return FUNC_1(VAR_1, "pwm2 : pwm is started, stop it first.");
  }
  int VAR_2 = 0;
  while (1) {
    int VAR_3 = FUNC_2(VAR_1, ++VAR_2, -1);
    if (VAR_3 == -1) {
      break;
    }
    FUNC_0(VAR_1, VAR_3 > 0 && VAR_3 <= VAR_0, VAR_2, "invalid pin number");
    FUNC_4(2);
  }
  return 0;
}

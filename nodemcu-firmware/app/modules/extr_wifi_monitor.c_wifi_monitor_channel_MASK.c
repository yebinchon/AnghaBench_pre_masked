
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(lua_State *VAR_1) {
  FUNC_2(VAR_1, FUNC_4());
  if (FUNC_3(VAR_1, 1) == VAR_0) {
    int VAR_2 = FUNC_0(VAR_1, 1);

    if (VAR_2 < 1 || VAR_2 > 15) {
      return FUNC_1(VAR_1, "Channel number (%d) is out of range", VAR_2);
    }
    FUNC_5(VAR_2);
  }

  return 1;
}

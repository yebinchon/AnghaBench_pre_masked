
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int ENC_DATA ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *,int) ;

__attribute__((used)) static int FUNC_4(lua_State *VAR_1) {
  ENC_DATA *VAR_2 = (ENC_DATA *)FUNC_0(VAR_1, 1, "sjson.encoder");

  int VAR_3 = 1024;
  if (FUNC_2(VAR_1, 2) == VAR_0) {
    VAR_3 = FUNC_1(VAR_1, 2);
    if (VAR_3 < 1) {
      VAR_3 = 1;
    }
  }

  return FUNC_3(VAR_1, VAR_2, VAR_3);
}

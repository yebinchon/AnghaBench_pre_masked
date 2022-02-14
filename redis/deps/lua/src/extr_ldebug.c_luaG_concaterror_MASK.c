
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int StkId ;


 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

void FUNC_4 (lua_State *VAR_0, StkId VAR_1, StkId VAR_2) {
  if (FUNC_3(VAR_1) || FUNC_2(VAR_1)) VAR_1 = VAR_2;
  FUNC_1(!FUNC_3(VAR_1) && !FUNC_2(VAR_1));
  FUNC_0(VAR_0, VAR_1, "concatenate");
}

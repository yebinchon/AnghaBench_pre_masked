
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctrl {scalar_t__ update; } ;
typedef int lua_State ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,scalar_t__) ;
 struct ctrl* FUNC_2 (int *,int) ;

__attribute__((used)) static int
FUNC_3(lua_State *VAR_0) {
 struct ctrl * VAR_1 = FUNC_2(VAR_0, 1);
 if (VAR_1->update) {
  FUNC_1(VAR_0, VAR_1->update);
  FUNC_0(VAR_0, 1);
  return 2;
 }
 return 0;
}

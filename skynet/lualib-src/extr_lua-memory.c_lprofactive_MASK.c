
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (char*,int*) ;

__attribute__((used)) static int
FUNC_4(lua_State *VAR_0) {
 bool *VAR_1, VAR_2;
 if (FUNC_0(VAR_0, 1)) {
  VAR_1 = ((void*)0);
 } else {
  VAR_2 = FUNC_2(VAR_0, 1) ? 1 : 0;
  VAR_1 = &VAR_2;
 }
 bool VAR_3 = FUNC_3("prof.active", VAR_1);
 FUNC_1(VAR_0, VAR_3);
 return 1;
}

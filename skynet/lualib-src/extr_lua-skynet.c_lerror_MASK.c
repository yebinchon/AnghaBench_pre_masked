
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_context {int dummy; } ;
typedef int lua_State ;
typedef int luaL_Buffer ;


 int FUNC_0 (int *,char) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *,int,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 char const* FUNC_7 (int *,int) ;
 struct skynet_context* FUNC_8 (int *,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct skynet_context*,char*,char const*) ;

__attribute__((used)) static int
FUNC_11(lua_State *VAR_0) {
 struct skynet_context * VAR_1 = FUNC_8(VAR_0, FUNC_9(1));
 int VAR_2 = FUNC_5(VAR_0);
 if (VAR_2 <= 1) {
  FUNC_6(VAR_0, 1);
  const char * VAR_3 = FUNC_4(VAR_0, 1, ((void*)0));
  FUNC_10(VAR_1, "%s", VAR_3);
  return 0;
 }
 luaL_Buffer VAR_4;
 FUNC_2(VAR_0, &VAR_4);
 int VAR_5;
 for (VAR_5=1; VAR_5<=VAR_2; VAR_5++) {
  FUNC_4(VAR_0, VAR_5, ((void*)0));
  FUNC_1(&VAR_4);
  if (VAR_5<VAR_2) {
   FUNC_0(&VAR_4, ' ');
  }
 }
 FUNC_3(&VAR_4);
 FUNC_10(VAR_1, "%s", FUNC_7(VAR_0, -1));
 return 0;
}

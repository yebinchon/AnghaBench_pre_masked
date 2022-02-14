
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_context {int dummy; } ;
typedef int lua_State ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 struct skynet_context* FUNC_2 (int *,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct skynet_context*,int) ;

__attribute__((used)) static int
FUNC_5(lua_State *VAR_0) {
 struct skynet_context * VAR_1 = FUNC_2(VAR_0, FUNC_3(1));
 int VAR_2 = FUNC_0(VAR_0, 1);
 int VAR_3 = FUNC_4(VAR_1,VAR_2);
 FUNC_1(VAR_0,VAR_3);
 return 1;
}

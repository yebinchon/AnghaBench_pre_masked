
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_context {int dummy; } ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 struct skynet_context* FUNC_1 (int *,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct skynet_context*,int ,int ,int ,int ,int *,int ) ;

__attribute__((used)) static int
FUNC_4(lua_State *VAR_1) {
 struct skynet_context * VAR_2 = FUNC_1(VAR_1, FUNC_2(1));
 int VAR_3 = FUNC_3(VAR_2, 0, 0, VAR_0 , 0 , ((void*)0), 0);
 FUNC_0(VAR_1, VAR_3);
 return 1;
}

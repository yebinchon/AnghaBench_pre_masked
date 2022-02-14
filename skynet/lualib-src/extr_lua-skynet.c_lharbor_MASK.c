
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct skynet_context {int dummy; } ;
typedef int lua_State ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 struct skynet_context* FUNC_3 (int *,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct skynet_context*,int ,int*) ;

__attribute__((used)) static int
FUNC_6(lua_State *VAR_0) {
 struct skynet_context * VAR_1 = FUNC_3(VAR_0, FUNC_4(1));
 uint32_t VAR_2 = (uint32_t)FUNC_0(VAR_0,1);
 int VAR_3 = 0;
 int VAR_4 = FUNC_5(VAR_1, VAR_2, &VAR_3);
 FUNC_2(VAR_0,VAR_3);
 FUNC_1(VAR_0, VAR_4);

 return 2;
}

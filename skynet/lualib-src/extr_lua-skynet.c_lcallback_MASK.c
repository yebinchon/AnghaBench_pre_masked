
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_context {int dummy; } ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int * FUNC_5 (int *,int) ;
 struct skynet_context* FUNC_6 (int *,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct skynet_context*,int *,int ) ;

__attribute__((used)) static int
FUNC_9(lua_State *VAR_5) {
 struct skynet_context * VAR_6 = FUNC_6(VAR_5, FUNC_7(1));
 int VAR_7 = FUNC_4(VAR_5, 2);
 FUNC_0(VAR_5,1,VAR_2);
 FUNC_3(VAR_5,1);
 FUNC_2(VAR_5, VAR_0, VAR_3);

 FUNC_1(VAR_5, VAR_0, VAR_1);
 lua_State *VAR_8 = FUNC_5(VAR_5,-1);

 if (VAR_7) {
  FUNC_8(VAR_6, VAR_8, VAR_4);
 } else {
  FUNC_8(VAR_6, VAR_8, VAR_3);
 }

 return 0;
}

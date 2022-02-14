
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_context {int dummy; } ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int) ;
 struct skynet_context* FUNC_5 (int *,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct skynet_context*,char const*,int,int) ;

__attribute__((used)) static int
FUNC_8(lua_State *VAR_1) {
 const char * VAR_2 = FUNC_1(VAR_1,1);
 int VAR_3 = FUNC_0(VAR_1,2);
 int VAR_4 = FUNC_3(VAR_1,3,VAR_0);
 struct skynet_context * VAR_5 = FUNC_5(VAR_1, FUNC_6(1));
 int VAR_6 = FUNC_7(VAR_5, VAR_2,VAR_3,VAR_4);
 if (VAR_6 < 0) {
  return FUNC_2(VAR_1, "Listen error");
 }

 FUNC_4(VAR_1,VAR_6);
 return 1;
}

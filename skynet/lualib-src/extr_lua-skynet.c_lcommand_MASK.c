
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_context {int dummy; } ;
typedef int lua_State ;


 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*) ;
 struct skynet_context* FUNC_3 (int *,int ) ;
 int FUNC_4 (int) ;
 char* FUNC_5 (struct skynet_context*,char const*,char const*) ;

__attribute__((used)) static int
FUNC_6(lua_State *VAR_0) {
 struct skynet_context * VAR_1 = FUNC_3(VAR_0, FUNC_4(1));
 const char * VAR_2 = FUNC_0(VAR_0,1);
 const char * VAR_3;
 const char * VAR_4 = ((void*)0);
 if (FUNC_1(VAR_0) == 2) {
  VAR_4 = FUNC_0(VAR_0,2);
 }

 VAR_3 = FUNC_5(VAR_1, VAR_2, VAR_4);
 if (VAR_3) {
  FUNC_2(VAR_0, VAR_3);
  return 1;
 }
 return 0;
}

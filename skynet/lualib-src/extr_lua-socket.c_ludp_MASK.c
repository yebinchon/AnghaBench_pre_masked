
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_context {int dummy; } ;
typedef int lua_State ;


 char* FUNC_0 (int *,char*,char const*,int,int*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,int,size_t*) ;
 struct skynet_context* FUNC_4 (int *,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct skynet_context*,char const*,int) ;

__attribute__((used)) static int
FUNC_7(lua_State *VAR_0) {
 struct skynet_context * VAR_1 = FUNC_4(VAR_0, FUNC_5(1));
 size_t VAR_2 = 0;
 const char * VAR_3 = FUNC_3(VAR_0,1,&VAR_2);
 char VAR_4[VAR_2];
 int VAR_5 = 0;
 const char * VAR_6 = ((void*)0);
 if (VAR_3) {
  VAR_6 = FUNC_0(VAR_0, VAR_4, VAR_3, 2, &VAR_5);
 }

 int VAR_7 = FUNC_6(VAR_1, VAR_6, VAR_5);
 if (VAR_7 < 0) {
  return FUNC_1(VAR_0, "udp init failed");
 }
 FUNC_2(VAR_0, VAR_7);
 return 1;
}

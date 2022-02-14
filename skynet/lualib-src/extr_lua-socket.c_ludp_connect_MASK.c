
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_context {int dummy; } ;
typedef int lua_State ;


 char* FUNC_0 (int *,char*,char const*,int,int*) ;
 int FUNC_1 (int *,int) ;
 char* FUNC_2 (int *,int,size_t*) ;
 int FUNC_3 (int *,char*) ;
 struct skynet_context* FUNC_4 (int *,int ) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct skynet_context*,int,char const*,int) ;

__attribute__((used)) static int
FUNC_7(lua_State *VAR_0) {
 struct skynet_context * VAR_1 = FUNC_4(VAR_0, FUNC_5(1));
 int VAR_2 = FUNC_1(VAR_0, 1);
 size_t VAR_3 = 0;
 const char * VAR_4 = FUNC_2(VAR_0,2,&VAR_3);
 char VAR_5[VAR_3];
 int VAR_6 = 0;
 const char * VAR_7 = ((void*)0);
 if (VAR_4) {
  VAR_7 = FUNC_0(VAR_0, VAR_5, VAR_4, 3, &VAR_6);
 }

 if (FUNC_6(VAR_1, VAR_2, VAR_7, VAR_6)) {
  return FUNC_3(VAR_0, "udp connect failed");
 }

 return 0;
}

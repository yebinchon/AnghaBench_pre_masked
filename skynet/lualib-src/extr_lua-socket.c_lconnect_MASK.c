
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_context {int dummy; } ;
typedef int lua_State ;


 char* FUNC_0 (int *,char*,char const*,int,int*) ;
 char* FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int) ;
 struct skynet_context* FUNC_4 (int *,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct skynet_context*,char const*,int) ;

__attribute__((used)) static int
FUNC_7(lua_State *VAR_0) {
 size_t VAR_1 = 0;
 const char * VAR_2 = FUNC_1(VAR_0,1,&VAR_1);
 char VAR_3[VAR_1];
 int VAR_4 = 0;
 const char * VAR_5 = FUNC_0(VAR_0, VAR_3, VAR_2, 2, &VAR_4);
 if (VAR_4 == 0) {
  return FUNC_2(VAR_0, "Invalid port");
 }
 struct skynet_context * VAR_6 = FUNC_4(VAR_0, FUNC_5(1));
 int VAR_7 = FUNC_6(VAR_6, VAR_5, VAR_4);
 FUNC_3(VAR_0, VAR_7);

 return 1;
}

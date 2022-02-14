
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snlua {size_t mem_limit; struct skynet_context* ctx; int * L; } ;
struct skynet_context {int dummy; } ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int ,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 scalar_t__ FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int,int ,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,struct skynet_context*) ;
 int FUNC_12 (int *,char const*,size_t) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,char const*) ;
 int FUNC_15 (int *,int ,char*) ;
 int FUNC_16 (int *,char*) ;
 int FUNC_17 (int *,int ) ;
 size_t FUNC_18 (int *,int) ;
 float FUNC_19 (int *,int) ;
 char* FUNC_20 (struct skynet_context*,char*,char*) ;
 int FUNC_21 (struct skynet_context*) ;
 char* FUNC_22 (struct skynet_context*,char*,char*) ;
 int FUNC_23 (struct skynet_context*,char*,...) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_24(struct snlua *VAR_7, struct skynet_context *VAR_8, const char * VAR_9, size_t VAR_10) {
 lua_State *VAR_11 = VAR_7->L;
 VAR_7->ctx = VAR_8;
 FUNC_4(VAR_11, VAR_1, 0);
 FUNC_9(VAR_11, 1);
 FUNC_15(VAR_11, VAR_3, "LUA_NOENV");
 FUNC_2(VAR_11);
 FUNC_11(VAR_11, VAR_8);
 FUNC_15(VAR_11, VAR_3, "skynet_context");
 FUNC_3(VAR_11, "skynet.codecache", VAR_5 , 0);
 FUNC_8(VAR_11,1);

 const char *VAR_12 = FUNC_20(VAR_8, "lua_path","./lualib/?.lua;./lualib/?/init.lua");
 FUNC_14(VAR_11, VAR_12);
 FUNC_16(VAR_11, "LUA_PATH");
 const char *VAR_13 = FUNC_20(VAR_8, "lua_cpath","./luaclib/?.so");
 FUNC_14(VAR_11, VAR_13);
 FUNC_16(VAR_11, "LUA_CPATH");
 const char *VAR_14 = FUNC_20(VAR_8, "luaservice", "./service/?.lua");
 FUNC_14(VAR_11, VAR_14);
 FUNC_16(VAR_11, "LUA_SERVICE");
 const char *VAR_15 = FUNC_22(VAR_8, "GETENV", "preload");
 FUNC_14(VAR_11, VAR_15);
 FUNC_16(VAR_11, "LUA_PRELOAD");

 FUNC_10(VAR_11, VAR_6);
 FUNC_0(FUNC_6(VAR_11) == 1);

 const char * VAR_16 = FUNC_20(VAR_8, "lualoader", "./lualib/loader.lua");

 int VAR_17 = FUNC_1(VAR_11,VAR_16);
 if (VAR_17 != VAR_2) {
  FUNC_23(VAR_8, "Can't load %s : %s", VAR_16, FUNC_19(VAR_11, -1));
  FUNC_21(VAR_8);
  return 1;
 }
 FUNC_12(VAR_11, VAR_9, VAR_10);
 VAR_17 = FUNC_7(VAR_11,1,0,1);
 if (VAR_17 != VAR_2) {
  FUNC_23(VAR_8, "lua loader error : %s", FUNC_19(VAR_11, -1));
  FUNC_21(VAR_8);
  return 1;
 }
 FUNC_17(VAR_11,0);
 if (FUNC_5(VAR_11, VAR_3, "memlimit") == VAR_4) {
  size_t VAR_18 = FUNC_18(VAR_11, -1);
  VAR_7->mem_limit = VAR_18;
  FUNC_23(VAR_8, "Set memory limit to %.2f M", (float)VAR_18 / (1024 * 1024));
  FUNC_13(VAR_11);
  FUNC_15(VAR_11, VAR_3, "memlimit");
 }
 FUNC_8(VAR_11, 1);

 FUNC_4(VAR_11, VAR_0, 0);

 return 0;
}

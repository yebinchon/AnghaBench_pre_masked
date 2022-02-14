
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skynet_config {int profile; void* logservice; void* logger; void* daemon; void* bootstrap; void* harbor; void* module_path; void* thread; } ;
struct lua_State {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct lua_State*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (struct lua_State*,int ,int ,char*,char*) ;
 struct lua_State* FUNC_5 () ;
 int FUNC_6 (struct lua_State*) ;
 int FUNC_7 (struct lua_State*) ;
 int FUNC_8 (struct lua_State*,int,int,int ) ;
 int FUNC_9 (struct lua_State*,char const*) ;
 char* FUNC_10 (struct lua_State*,int) ;
 int FUNC_11 (char*,int) ;
 void* FUNC_12 (char*,int) ;
 void* FUNC_13 (char*,char*) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (struct skynet_config*) ;
 int VAR_2 ;
 int FUNC_19 (int ) ;

int
FUNC_20(int VAR_3, char *VAR_4[]) {
 const char * VAR_5 = ((void*)0) ;
 if (VAR_3 > 1) {
  VAR_5 = VAR_4[1];
 } else {
  FUNC_2(VAR_2, "Need a config file. Please read skynet wiki : https://github.com/cloudwu/skynet/wiki/Config\n"
   "usage: skynet configfilename\n");
  return 1;
 }

 FUNC_17();
 FUNC_15();

 FUNC_14();

 struct skynet_config VAR_6;






 struct lua_State *VAR_7 = FUNC_5();
 FUNC_6(VAR_7);

 int VAR_8 = FUNC_4(VAR_7, VAR_1, FUNC_19(VAR_1), "=[skynet config]", "t");
 FUNC_1(VAR_8 == VAR_0);
 FUNC_9(VAR_7, VAR_5);

 VAR_8 = FUNC_8(VAR_7, 1, 1, 0);
 if (VAR_8) {
  FUNC_2(VAR_2,"%s\n",FUNC_10(VAR_7,-1));
  FUNC_7(VAR_7);
  return 1;
 }
 FUNC_0(VAR_7);

 VAR_6.thread = FUNC_12("thread",8);
 VAR_6.module_path = FUNC_13("cpath","./cservice/?.so");
 VAR_6.harbor = FUNC_12("harbor", 1);
 VAR_6.bootstrap = FUNC_13("bootstrap","snlua bootstrap");
 VAR_6.daemon = FUNC_13("daemon", ((void*)0));
 VAR_6.logger = FUNC_13("logger", ((void*)0));
 VAR_6.logservice = FUNC_13("logservice", "logger");
 VAR_6.profile = FUNC_11("profile", 1);

 FUNC_7(VAR_7);

 FUNC_18(&VAR_6);
 FUNC_16();

 return 0;
}

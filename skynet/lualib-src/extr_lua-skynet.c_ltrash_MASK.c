
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;




 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*,int ) ;
 void* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (void*) ;

__attribute__((used)) static int
FUNC_6(lua_State *VAR_0) {
 int VAR_1 = FUNC_3(VAR_0,1);
 switch (VAR_1) {
 case 128: {
  break;
 }
 case 129: {
  void * VAR_2 = FUNC_2(VAR_0,1);
  FUNC_0(VAR_0,2);
  FUNC_5(VAR_2);
  break;
 }
 default:
  FUNC_1(VAR_0, "skynet.trash invalid param %s", FUNC_4(VAR_0,VAR_1));
 }

 return 0;
}

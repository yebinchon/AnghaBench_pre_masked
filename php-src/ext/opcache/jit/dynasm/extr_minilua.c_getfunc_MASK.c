
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Debug ;


 int FUNC_0 (int *,int,int,char*) ;
 int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,char*,int *) ;
 scalar_t__ FUNC_6 (int *,int,int *) ;
 scalar_t__ FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;

__attribute__((used)) static void FUNC_10(lua_State*VAR_0,int VAR_1){
if(FUNC_7(VAR_0,1))FUNC_9(VAR_0,1);
else{
lua_Debug VAR_2;
int VAR_3=VAR_1?FUNC_4(VAR_0,1,1):FUNC_2(VAR_0,1);
FUNC_0(VAR_0,VAR_3>=0,1,"level must be non-negative");
if(FUNC_6(VAR_0,VAR_3,&VAR_2)==0)
FUNC_1(VAR_0,1,"invalid level");
FUNC_5(VAR_0,"f",&VAR_2);
if(FUNC_8(VAR_0,-1))
FUNC_3(VAR_0,"no function environment for tail call at level %d",
VAR_3);
}
}

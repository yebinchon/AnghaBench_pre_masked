
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,int ,int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char const*,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 char* FUNC_9 (char const*,char) ;
 int FUNC_10 (char const*) ;

__attribute__((used)) static const char*FUNC_11(lua_State*VAR_0,int VAR_1,
const char*VAR_2,int VAR_3){
const char*VAR_4;
FUNC_5(VAR_0,VAR_1);
do{
VAR_4=FUNC_9(VAR_2,'.');
if(VAR_4==((void*)0))VAR_4=VAR_2+FUNC_10(VAR_2);
FUNC_4(VAR_0,VAR_2,VAR_4-VAR_2);
FUNC_6(VAR_0,-2);
if(FUNC_1(VAR_0,-1)){
FUNC_3(VAR_0,1);
FUNC_0(VAR_0,0,(*VAR_4=='.'?1:VAR_3));
FUNC_4(VAR_0,VAR_2,VAR_4-VAR_2);
FUNC_5(VAR_0,-2);
FUNC_8(VAR_0,-4);
}
else if(!FUNC_2(VAR_0,-1)){
FUNC_3(VAR_0,2);
return VAR_2;
}
FUNC_7(VAR_0,-2);
VAR_2=VAR_4+1;
}while(*VAR_4=='.');
return ((void*)0);
}

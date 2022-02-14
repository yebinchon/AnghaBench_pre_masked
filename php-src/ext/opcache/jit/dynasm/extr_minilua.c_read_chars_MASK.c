
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int luaL_Buffer ;
typedef int FILE ;


 size_t VAR_0 ;
 size_t FUNC_0 (char*,int,size_t,int *) ;
 int FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *,int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6(lua_State*VAR_1,FILE*VAR_2,size_t VAR_3){
size_t VAR_4;
size_t VAR_5;
luaL_Buffer VAR_6;
FUNC_2(VAR_1,&VAR_6);
VAR_4=VAR_0;
do{
char*VAR_7=FUNC_3(&VAR_6);
if(VAR_4>VAR_3)VAR_4=VAR_3;
VAR_5=FUNC_0(VAR_7,sizeof(char),VAR_4,VAR_2);
FUNC_1(&VAR_6,VAR_5);
VAR_3-=VAR_5;
}while(VAR_3>0&&VAR_5==VAR_4);
FUNC_4(&VAR_6);
return(VAR_3==0||FUNC_5(VAR_1,-1)>0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int lvl; int * L; } ;
typedef TYPE_1__ luaL_Buffer ;


 int FUNC_0 (int *,int) ;
 size_t FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(luaL_Buffer*VAR_0){
if(VAR_0->lvl>1){
lua_State*VAR_1=VAR_0->L;
int VAR_2=1;
size_t VAR_3=FUNC_1(VAR_1,-1);
do{
size_t VAR_4=FUNC_1(VAR_1,-(VAR_2+1));
if(VAR_0->lvl-VAR_2+1>=(20/2)||VAR_3>VAR_4){
VAR_3+=VAR_4;
VAR_2++;
}
else break;
}while(VAR_2<VAR_0->lvl);
FUNC_0(VAR_1,VAR_2);
VAR_0->lvl=VAR_0->lvl-VAR_2+1;
}
}

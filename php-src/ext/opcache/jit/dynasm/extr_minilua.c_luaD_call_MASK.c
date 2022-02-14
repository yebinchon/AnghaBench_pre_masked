
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int nCcalls; } ;
typedef TYPE_1__ lua_State ;
typedef int StkId ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_5(lua_State*VAR_0,StkId VAR_1,int VAR_2){
if(++VAR_0->nCcalls>=200){
if(VAR_0->nCcalls==200)
FUNC_3(VAR_0,"C stack overflow");
else if(VAR_0->nCcalls>=(200+(200>>3)))
FUNC_2(VAR_0,5);
}
if(FUNC_1(VAR_0,VAR_1,VAR_2)==0)
FUNC_4(VAR_0,1);
VAR_0->nCcalls--;
FUNC_0(VAR_0);
}

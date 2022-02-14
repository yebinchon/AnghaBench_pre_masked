
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {scalar_t__ flags; int metatable; } ;
typedef TYPE_1__ Table ;
typedef int const TValue ;
typedef int const* StkId ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,int const*,int const*,int const*) ;
 int const* FUNC_1 (int *,int ,int ) ;
 TYPE_1__* FUNC_2 (int const*) ;
 int FUNC_3 (int *,TYPE_1__*,int const*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int const*,char*) ;
 int const* FUNC_6 (int *,TYPE_1__*,int const*) ;
 int const* FUNC_7 (int *,int const*,int ) ;
 int FUNC_8 (int *,int const*,int const*) ;
 scalar_t__ FUNC_9 (int const*) ;
 scalar_t__ FUNC_10 (int const*) ;
 scalar_t__ FUNC_11 (int const*) ;

__attribute__((used)) static void FUNC_12(lua_State*VAR_1,const TValue*VAR_2,TValue*VAR_3,StkId VAR_4){
int VAR_5;
TValue VAR_6;
for(VAR_5=0;VAR_5<100;VAR_5++){
const TValue*VAR_7;
if(FUNC_11(VAR_2)){
Table*VAR_8=FUNC_2(VAR_2);
TValue*VAR_9=FUNC_6(VAR_1,VAR_8,VAR_3);
if(!FUNC_10(VAR_9)||
(VAR_7=FUNC_1(VAR_1,VAR_8->metatable,VAR_0))==((void*)0)){
FUNC_8(VAR_1,VAR_9,VAR_4);
VAR_8->flags=0;
FUNC_3(VAR_1,VAR_8,VAR_4);
return;
}
}
else if(FUNC_10(VAR_7=FUNC_7(VAR_1,VAR_2,VAR_0)))
FUNC_5(VAR_1,VAR_2,"index");
if(FUNC_9(VAR_7)){
FUNC_0(VAR_1,VAR_7,VAR_2,VAR_3,VAR_4);
return;
}
FUNC_8(VAR_1,&VAR_6,VAR_7);
VAR_2=&VAR_6;
}
FUNC_4(VAR_1,"loop in settable");
}

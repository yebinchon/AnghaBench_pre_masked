
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;


struct TYPE_18__ {int * top; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_19__ {struct TYPE_19__* metatable; } ;
typedef TYPE_2__ Table ;
struct TYPE_20__ {TYPE_2__* metatable; } ;
struct TYPE_17__ {TYPE_2__** mt; } ;
typedef int TValue ;


 TYPE_15__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 TYPE_2__* FUNC_3 (int *) ;
 int * FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 size_t FUNC_11 (int *) ;
 TYPE_3__* FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(lua_State*VAR_0,int VAR_1){
TValue*VAR_2;
Table*VAR_3;
FUNC_1(VAR_0,1);
VAR_2=FUNC_4(VAR_0,VAR_1);
FUNC_2(VAR_0,VAR_2);
if(FUNC_9(VAR_0->top-1))
VAR_3=((void*)0);
else{
FUNC_7(VAR_0,FUNC_10(VAR_0->top-1));
VAR_3=FUNC_3(VAR_0->top-1);
}
switch(FUNC_11(VAR_2)){
case 5:{
FUNC_3(VAR_2)->metatable=VAR_3;
if(VAR_3)
FUNC_6(VAR_0,FUNC_3(VAR_2),VAR_3);
break;
}
case 7:{
FUNC_12(VAR_2)->metatable=VAR_3;
if(VAR_3)
FUNC_5(VAR_0,FUNC_8(VAR_2),VAR_3);
break;
}
default:{
FUNC_0(VAR_0)->mt[FUNC_11(VAR_2)]=VAR_3;
break;
}
}
VAR_0->top--;
return 1;
}

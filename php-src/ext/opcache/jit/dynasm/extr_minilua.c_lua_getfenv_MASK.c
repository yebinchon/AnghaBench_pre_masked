
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int top; } ;
typedef TYPE_2__ lua_State ;
struct TYPE_11__ {int env; } ;
struct TYPE_14__ {TYPE_1__ c; } ;
struct TYPE_13__ {int env; } ;
typedef int StkId ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_8__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 TYPE_3__* FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(lua_State*VAR_0,int VAR_1){
StkId VAR_2;
VAR_2=FUNC_4(VAR_0,VAR_1);
FUNC_0(VAR_0,VAR_2);
switch(FUNC_9(VAR_2)){
case 6:
FUNC_5(VAR_0,VAR_0->top,FUNC_2(VAR_2)->c.env);
break;
case 7:
FUNC_5(VAR_0,VAR_0->top,FUNC_10(VAR_2)->env);
break;
case 8:
FUNC_7(VAR_0,VAR_0->top,FUNC_3(FUNC_8(VAR_2)));
break;
default:
FUNC_6(VAR_0->top);
break;
}
FUNC_1(VAR_0);
}

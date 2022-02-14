
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ top; } ;
typedef TYPE_2__ lua_State ;
struct TYPE_12__ {void* env; } ;
struct TYPE_15__ {TYPE_1__ c; } ;
struct TYPE_14__ {void* env; } ;
typedef int StkId ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 TYPE_9__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*,int ,void*) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*,int ,void*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int ) ;
 TYPE_3__* FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(lua_State*VAR_0,int VAR_1){
StkId VAR_2;
int VAR_3=1;
FUNC_0(VAR_0,1);
VAR_2=FUNC_6(VAR_0,VAR_1);
FUNC_1(VAR_0,VAR_2);
FUNC_8(VAR_0,FUNC_11(VAR_0->top-1));
switch(FUNC_12(VAR_2)){
case 6:
FUNC_2(VAR_2)->c.env=FUNC_5(VAR_0->top-1);
break;
case 7:
FUNC_13(VAR_2)->env=FUNC_5(VAR_0->top-1);
break;
case 8:
FUNC_9(VAR_0,FUNC_4(FUNC_10(VAR_2)),FUNC_5(VAR_0->top-1));
break;
default:
VAR_3=0;
break;
}
if(VAR_3)FUNC_7(VAR_0,FUNC_3(VAR_2),FUNC_5(VAR_0->top-1));
VAR_0->top--;
return VAR_3;
}

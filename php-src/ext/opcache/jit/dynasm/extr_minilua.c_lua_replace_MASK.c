
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ ci; scalar_t__ base_ci; scalar_t__ top; } ;
typedef TYPE_2__ lua_State ;
struct TYPE_15__ {int env; } ;
struct TYPE_17__ {TYPE_1__ c; } ;
typedef int StkId ;
typedef TYPE_3__ Closure ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 TYPE_3__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*,scalar_t__) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static void FUNC_10(lua_State*VAR_0,int VAR_1){
StkId VAR_2;
if(VAR_1==(-10001)&&VAR_0->ci==VAR_0->base_ci)
FUNC_6(VAR_0,"no calling environment");
FUNC_0(VAR_0,1);
VAR_2=FUNC_4(VAR_0,VAR_1);
FUNC_1(VAR_0,VAR_2);
if(VAR_1==(-10001)){
Closure*VAR_3=FUNC_2(VAR_0);
FUNC_7(VAR_0,FUNC_9(VAR_0->top-1));
VAR_3->c.env=FUNC_3(VAR_0->top-1);
FUNC_5(VAR_0,VAR_3,VAR_0->top-1);
}
else{
FUNC_8(VAR_0,VAR_2,VAR_0->top-1);
if(VAR_1<(-10002))
FUNC_5(VAR_0,FUNC_2(VAR_0),VAR_0->top-1);
}
VAR_0->top--;
}

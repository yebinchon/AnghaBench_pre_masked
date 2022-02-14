
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ top; } ;
typedef TYPE_2__ lua_State ;
typedef int lua_CFunction ;
struct TYPE_14__ {int * upvalue; int f; } ;
struct TYPE_16__ {TYPE_1__ c; } ;
typedef TYPE_3__ Closure ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_3__* FUNC_4 (TYPE_2__*,int,int ) ;
 int FUNC_5 (TYPE_2__*,scalar_t__,TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_7(lua_State*VAR_0,lua_CFunction VAR_1,int VAR_2){
Closure*VAR_3;
FUNC_3(VAR_0);
FUNC_0(VAR_0,VAR_2);
VAR_3=FUNC_4(VAR_0,VAR_2,FUNC_2(VAR_0));
VAR_3->c.f=VAR_1;
VAR_0->top-=VAR_2;
while(VAR_2--)
FUNC_6(VAR_0,&VAR_3->c.upvalue[VAR_2],VAR_0->top+VAR_2);
FUNC_5(VAR_0,VAR_0->top,VAR_3);
FUNC_1(VAR_0);
}

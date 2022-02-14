
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ top; scalar_t__ base; } ;
typedef TYPE_1__ lua_State ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*,int ) ;
 int FUNC_5 (TYPE_1__*,int,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_7(lua_State*VAR_0,int VAR_1){
FUNC_0(VAR_0,VAR_1);
if(VAR_1>=2){
FUNC_3(VAR_0);
FUNC_5(VAR_0,VAR_1,FUNC_2(VAR_0->top-VAR_0->base)-1);
VAR_0->top-=(VAR_1-1);
}
else if(VAR_1==0){
FUNC_6(VAR_0,VAR_0->top,FUNC_4(VAR_0,"",0));
FUNC_1(VAR_0);
}
}

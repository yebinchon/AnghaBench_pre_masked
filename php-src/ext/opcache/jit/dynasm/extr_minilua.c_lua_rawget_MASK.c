
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ top; } ;
typedef TYPE_1__ lua_State ;
typedef int StkId ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(lua_State*VAR_0,int VAR_1){
StkId VAR_2;
VAR_2=FUNC_1(VAR_0,VAR_1);
FUNC_3(VAR_0,FUNC_5(VAR_2));
FUNC_4(VAR_0,VAR_0->top-1,FUNC_2(FUNC_0(VAR_2),VAR_0->top-1));
}

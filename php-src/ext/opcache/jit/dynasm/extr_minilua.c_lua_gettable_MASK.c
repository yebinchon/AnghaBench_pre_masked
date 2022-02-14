
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ top; } ;
typedef TYPE_1__ lua_State ;
typedef int StkId ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(lua_State*VAR_0,int VAR_1){
StkId VAR_2;
VAR_2=FUNC_1(VAR_0,VAR_1);
FUNC_0(VAR_0,VAR_2);
FUNC_2(VAR_0,VAR_2,VAR_0->top-1,VAR_0->top-1);
}

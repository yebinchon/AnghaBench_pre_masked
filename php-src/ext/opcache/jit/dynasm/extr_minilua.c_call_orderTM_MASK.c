
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int top; } ;
typedef TYPE_1__ lua_State ;
typedef int TValue ;
typedef int TMS ;


 int FUNC_0 (TYPE_1__*,int ,int const*,int const*,int const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int const*,int const*) ;
 int * FUNC_3 (TYPE_1__*,int const*,int ) ;
 scalar_t__ FUNC_4 (int const*) ;

__attribute__((used)) static int FUNC_5(lua_State*VAR_0,const TValue*VAR_1,const TValue*VAR_2,
TMS VAR_3){
const TValue*VAR_4=FUNC_3(VAR_0,VAR_1,VAR_3);
const TValue*VAR_5;
if(FUNC_4(VAR_4))return-1;
VAR_5=FUNC_3(VAR_0,VAR_2,VAR_3);
if(!FUNC_2(VAR_4,VAR_5))
return-1;
FUNC_0(VAR_0,VAR_0->top,VAR_4,VAR_1,VAR_2);
return!FUNC_1(VAR_0->top);
}

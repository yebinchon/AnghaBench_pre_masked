
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
typedef int * lua_CFunction ;
struct TYPE_3__ {int * f; } ;
struct TYPE_4__ {TYPE_1__ c; } ;
typedef int StkId ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static lua_CFunction FUNC_3(lua_State*VAR_0,int VAR_1){
StkId VAR_2=FUNC_1(VAR_0,VAR_1);
return(!FUNC_2(VAR_2))?((void*)0):FUNC_0(VAR_2)->c.f;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int allowhook; int * errorJmp; scalar_t__ errfunc; int baseCcalls; int nCcalls; int base; TYPE_1__* ci; TYPE_1__* base_ci; } ;
typedef TYPE_2__ lua_State ;
struct TYPE_7__ {int base; } ;


 int FUNC_0 (TYPE_2__*,int,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(lua_State*VAR_0,int VAR_1){
VAR_0->ci=VAR_0->base_ci;
VAR_0->base=VAR_0->ci->base;
FUNC_1(VAR_0,VAR_0->base);
FUNC_0(VAR_0,VAR_1,VAR_0->base);
VAR_0->nCcalls=VAR_0->baseCcalls;
VAR_0->allowhook=1;
FUNC_2(VAR_0);
VAR_0->errfunc=0;
VAR_0->errorJmp=((void*)0);
}

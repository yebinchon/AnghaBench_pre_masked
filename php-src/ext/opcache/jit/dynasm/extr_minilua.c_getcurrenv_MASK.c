
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ ci; scalar_t__ base_ci; } ;
typedef TYPE_2__ lua_State ;
typedef int Table ;
struct TYPE_8__ {int * env; } ;
struct TYPE_10__ {TYPE_1__ c; } ;
typedef TYPE_3__ Closure ;


 TYPE_3__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (int ) ;

__attribute__((used)) static Table*FUNC_3(lua_State*VAR_0){
if(VAR_0->ci==VAR_0->base_ci)
return FUNC_2(FUNC_1(VAR_0));
else{
Closure*VAR_1=FUNC_0(VAR_0);
return VAR_1->c.env;
}
}

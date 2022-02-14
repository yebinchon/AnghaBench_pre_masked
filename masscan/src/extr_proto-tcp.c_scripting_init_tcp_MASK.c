
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lua_State {int dummy; } ;
struct TCP_ConnectionTable {TYPE_1__* banner1; } ;
struct TYPE_4__ {int (* init ) (TYPE_1__*) ;} ;
struct TYPE_3__ {struct lua_State* L; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(struct TCP_ConnectionTable *VAR_1, struct lua_State *VAR_2)
{
    VAR_1->banner1->L = VAR_2;

    VAR_0.init(VAR_1->banner1);
}

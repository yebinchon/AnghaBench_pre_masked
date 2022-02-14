
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* value; struct TYPE_7__* name; TYPE_1__* pmod; } ;
struct TYPE_6__ {int links; int (* finish ) (TYPE_2__*) ;} ;
typedef TYPE_2__ CONF_IMODULE ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(CONF_IMODULE *VAR_0)
{
    if (!VAR_0)
        return;
    if (VAR_0->pmod->finish)
        VAR_0->pmod->finish(VAR_0);
    VAR_0->pmod->links--;
    FUNC_0(VAR_0->name);
    FUNC_0(VAR_0->value);
    FUNC_0(VAR_0);
}

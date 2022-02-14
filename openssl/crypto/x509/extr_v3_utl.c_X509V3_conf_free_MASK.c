
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* section; struct TYPE_4__* value; struct TYPE_4__* name; } ;
typedef TYPE_1__ CONF_VALUE ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(CONF_VALUE *VAR_0)
{
    if (!VAR_0)
        return;
    FUNC_0(VAR_0->name);
    FUNC_0(VAR_0->value);
    FUNC_0(VAR_0->section);
    FUNC_0(VAR_0);
}

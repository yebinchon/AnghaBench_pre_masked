
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* modifier; struct TYPE_4__* new_name; struct TYPE_4__* name; } ;
typedef TYPE_1__ DiffEntry ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1 (DiffEntry *VAR_0)
{
    FUNC_0 (VAR_0->name);
    if (VAR_0->new_name)
        FUNC_0 (VAR_0->new_name);

    FUNC_0 (VAR_0->modifier);

    FUNC_0 (VAR_0);
}

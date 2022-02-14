
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ subdir; struct TYPE_4__* modifier; struct TYPE_4__* name; } ;
typedef TYPE_1__ ChangeSetDirent ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2 (ChangeSetDirent *VAR_0)
{
    if (!VAR_0)
        return;

    FUNC_1 (VAR_0->name);
    FUNC_1 (VAR_0->modifier);

    if (VAR_0->subdir)
        FUNC_0 (VAR_0->subdir);
    FUNC_1 (VAR_0);
}

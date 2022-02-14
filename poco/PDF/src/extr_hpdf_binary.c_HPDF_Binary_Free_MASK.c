
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mmgr; struct TYPE_4__* value; } ;
typedef TYPE_1__* HPDF_Binary ;


 int FUNC_0 (int ,TYPE_1__*) ;

void
FUNC_1 (HPDF_Binary VAR_0)
{
    if (!VAR_0)
        return;

    if (VAR_0->value)
        FUNC_0 (VAR_0->mmgr, VAR_0->value);

    FUNC_0 (VAR_0->mmgr, VAR_0);
}

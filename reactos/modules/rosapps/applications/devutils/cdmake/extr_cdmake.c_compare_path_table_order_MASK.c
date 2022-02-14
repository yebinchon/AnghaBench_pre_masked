
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int level; struct TYPE_6__* parent; } ;
typedef TYPE_1__* PDIR_RECORD ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(PDIR_RECORD VAR_0, PDIR_RECORD VAR_1)
{
    int VAR_2 = VAR_0->level - VAR_1->level;
    if (VAR_0 == VAR_1)
        return 0;
    if (VAR_2 == 0)
    {
        VAR_2 = FUNC_1(VAR_0->parent, VAR_1->parent);
        if (VAR_2 == 0)
            VAR_2 = FUNC_0(VAR_0, VAR_1);
    }
    return VAR_2;
}

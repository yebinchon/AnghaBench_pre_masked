
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* phead; } ;
struct TYPE_5__ {struct TYPE_5__* pnext; int name; } ;
typedef TYPE_1__* PLIST_MEMBER ;
typedef TYPE_2__* PLIST ;


 scalar_t__ FUNC_0 (char*,int ) ;

PLIST_MEMBER
FUNC_1(PLIST VAR_0, char *VAR_1)
{
    PLIST_MEMBER VAR_2 = ((void*)0);
    PLIST_MEMBER VAR_3;

    if (!VAR_1 || !VAR_1[0])
        return ((void*)0);

    VAR_3 = VAR_0->phead;
    while (VAR_3 != ((void*)0))
    {
        if (FUNC_0(VAR_1, VAR_3->name) == 0)
        {
            if (VAR_2)
            {
                VAR_2->pnext = VAR_3->pnext;
                VAR_3->pnext = VAR_0->phead;
                VAR_0->phead = VAR_3;
            }
            return VAR_3;
        }
        VAR_2 = VAR_3;
        VAR_3 = VAR_3->pnext;
    }
    return ((void*)0);
}

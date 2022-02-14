
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* ptail; TYPE_1__* phead; } ;
struct TYPE_6__ {struct TYPE_6__* pnext; } ;
typedef TYPE_1__* PLIST_MEMBER ;
typedef TYPE_2__* PLIST ;



PLIST_MEMBER
FUNC_0(PLIST VAR_0, PLIST_MEMBER VAR_1)
{
    if (!VAR_1)
        return ((void*)0);

    VAR_1->pnext = VAR_0->phead;
    VAR_0->phead = VAR_1;
    if (!VAR_0->ptail)
        VAR_0->ptail = VAR_1;
    return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * ptail; TYPE_1__* phead; } ;
struct TYPE_5__ {struct TYPE_5__* pnext; } ;
typedef TYPE_1__* PLIST_MEMBER ;
typedef TYPE_2__* PLIST ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(PLIST VAR_0)
{
    PLIST_MEMBER VAR_1 = VAR_0->phead;
    PLIST_MEMBER VAR_2;
    while (VAR_1)
    {
        VAR_2 = VAR_1->pnext;
        FUNC_0(VAR_1);
        VAR_1 = VAR_2;
    }
    VAR_0->phead = VAR_0->ptail = ((void*)0);
}

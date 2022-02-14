
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int pStorage; } ;
struct TYPE_9__ {TYPE_2__* root; int hwndList; } ;
struct TYPE_11__ {TYPE_1__ search; TYPE_4__* pCHMInfo; } ;
struct TYPE_10__ {int next; } ;
typedef TYPE_2__ SearchItem ;
typedef TYPE_3__ HHInfo ;
typedef TYPE_4__ CHMInfo ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*,int ,char const*) ;
 TYPE_2__* FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(HHInfo *VAR_0, const char *VAR_1)
{
    CHMInfo *VAR_2 = VAR_0->pCHMInfo;
    SearchItem *VAR_3 = FUNC_2(((void*)0), ((void*)0));

    FUNC_1(VAR_3, VAR_2->pStorage, VAR_1);
    FUNC_3(VAR_0->search.hwndList, VAR_3->next);
    if(VAR_0->search.root)
        FUNC_0(VAR_0);
    VAR_0->search.root = VAR_3;
}

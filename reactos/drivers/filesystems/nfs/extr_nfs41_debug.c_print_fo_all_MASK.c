
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int pVNetRoot; } ;
struct TYPE_6__ {int pNetRoot; int OpenCount; } ;
struct TYPE_5__ {TYPE_3__* pFcb; TYPE_4__* pRelevantSrvOpen; int pFobx; } ;
typedef TYPE_1__* PRX_CONTEXT ;


 int FUNC_0 (char*,int ,TYPE_3__*,TYPE_4__*,int ,int ,int ) ;

void FUNC_1(int VAR_0, PRX_CONTEXT VAR_1)
{
    if (!VAR_0) return;
    if (VAR_1->pFcb && VAR_1->pRelevantSrvOpen)
        FUNC_0("OpenCount %d FCB %p SRV %p FOBX %p VNET %p NET %p\n",
            VAR_1->pFcb->OpenCount, VAR_1->pFcb, VAR_1->pRelevantSrvOpen, VAR_1->pFobx,
            VAR_1->pRelevantSrvOpen->pVNetRoot, VAR_1->pFcb->pNetRoot);
}

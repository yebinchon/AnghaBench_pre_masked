
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pDirtyTail; int pSynced; TYPE_1__* pDirty; } ;
struct TYPE_4__ {int flags; struct TYPE_4__* pDirtyNext; } ;
typedef TYPE_1__ PgHdr ;
typedef TYPE_2__ PCache ;


 int VAR_0 ;

void FUNC_0(PCache *VAR_1){
  PgHdr *VAR_2;
  for(VAR_2=VAR_1->pDirty; VAR_2; VAR_2=VAR_2->pDirtyNext){
    VAR_2->flags &= ~VAR_0;
  }
  VAR_1->pSynced = VAR_1->pDirtyTail;
}


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
 int VAR_1 ;
 int FUNC_0 (char*) ;

void FUNC_1(PCache *VAR_2){
  PgHdr *VAR_3;
  FUNC_0(("%p.CLEAR-WRITEABLE\n",VAR_2));
  for(VAR_3=VAR_2->pDirty; VAR_3; VAR_3=VAR_3->pDirtyNext){
    VAR_3->flags &= ~(VAR_0|VAR_1);
  }
  VAR_2->pSynced = VAR_2->pDirtyTail;
}

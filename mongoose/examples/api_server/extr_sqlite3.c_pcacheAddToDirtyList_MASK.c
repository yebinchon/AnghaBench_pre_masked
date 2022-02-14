
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pSynced; TYPE_1__* pDirtyTail; TYPE_1__* pDirty; } ;
struct TYPE_5__ {scalar_t__ pDirtyPrev; int flags; struct TYPE_5__* pDirtyNext; TYPE_2__* pCache; } ;
typedef TYPE_1__ PgHdr ;
typedef TYPE_2__ PCache ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(PgHdr *VAR_1){
  PCache *VAR_2 = VAR_1->pCache;

  FUNC_0( VAR_1->pDirtyNext==0 && VAR_1->pDirtyPrev==0 && VAR_2->pDirty!=VAR_1 );

  VAR_1->pDirtyNext = VAR_2->pDirty;
  if( VAR_1->pDirtyNext ){
    FUNC_0( VAR_1->pDirtyNext->pDirtyPrev==0 );
    VAR_1->pDirtyNext->pDirtyPrev = VAR_1;
  }
  VAR_2->pDirty = VAR_1;
  if( !VAR_2->pDirtyTail ){
    VAR_2->pDirtyTail = VAR_1;
  }
  if( !VAR_2->pSynced && 0==(VAR_1->flags&VAR_0) ){
    VAR_2->pSynced = VAR_1;
  }
  FUNC_1( FUNC_2(VAR_2) );
}

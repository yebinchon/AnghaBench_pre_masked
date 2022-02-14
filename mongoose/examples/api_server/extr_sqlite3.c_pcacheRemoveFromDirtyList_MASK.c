
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pDirty; TYPE_1__* pDirtyTail; TYPE_1__* pSynced; } ;
struct TYPE_5__ {int flags; struct TYPE_5__* pDirtyPrev; struct TYPE_5__* pDirtyNext; TYPE_2__* pCache; } ;
typedef TYPE_1__ PgHdr ;
typedef TYPE_2__ PCache ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(PgHdr *VAR_1){
  PCache *VAR_2 = VAR_1->pCache;

  FUNC_0( VAR_1->pDirtyNext || VAR_1==VAR_2->pDirtyTail );
  FUNC_0( VAR_1->pDirtyPrev || VAR_1==VAR_2->pDirty );


  if( VAR_2->pSynced==VAR_1 ){
    PgHdr *VAR_3 = VAR_1->pDirtyPrev;
    while( VAR_3 && (VAR_3->flags&VAR_0) ){
      VAR_3 = VAR_3->pDirtyPrev;
    }
    VAR_2->pSynced = VAR_3;
  }

  if( VAR_1->pDirtyNext ){
    VAR_1->pDirtyNext->pDirtyPrev = VAR_1->pDirtyPrev;
  }else{
    FUNC_0( VAR_1==VAR_2->pDirtyTail );
    VAR_2->pDirtyTail = VAR_1->pDirtyPrev;
  }
  if( VAR_1->pDirtyPrev ){
    VAR_1->pDirtyPrev->pDirtyNext = VAR_1->pDirtyNext;
  }else{
    FUNC_0( VAR_1==VAR_2->pDirty );
    VAR_2->pDirty = VAR_1->pDirtyNext;
  }
  VAR_1->pDirtyNext = 0;
  VAR_1->pDirtyPrev = 0;

  FUNC_1( FUNC_2(VAR_2) );
}

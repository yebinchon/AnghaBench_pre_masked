
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ nPage; scalar_t__ pFree; scalar_t__ pBulk; TYPE_4__* pGroup; } ;
struct TYPE_9__ {TYPE_3__* pLruPrev; } ;
struct TYPE_12__ {scalar_t__ nCurrentPage; scalar_t__ nMaxPage; TYPE_1__ lru; int mutex; } ;
struct TYPE_11__ {scalar_t__ isAnchor; scalar_t__ isPinned; TYPE_2__* pCache; } ;
struct TYPE_10__ {TYPE_4__* pGroup; } ;
typedef TYPE_3__ PgHdr1 ;
typedef TYPE_4__ PGroup ;
typedef TYPE_5__ PCache1 ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(PCache1 *VAR_0){
  PGroup *VAR_1 = VAR_0->pGroup;
  PgHdr1 *VAR_2;
  FUNC_0( FUNC_4(VAR_1->mutex) );
  while( VAR_1->nCurrentPage>VAR_1->nMaxPage
      && (VAR_2=VAR_1->lru.pLruPrev)->isAnchor==0
  ){
    FUNC_0( VAR_2->pCache->pGroup==VAR_1 );
    FUNC_0( VAR_2->isPinned==0 );
    FUNC_1(VAR_2);
    FUNC_2(VAR_2, 1);
  }
  if( VAR_0->nPage==0 && VAR_0->pBulk ){
    FUNC_3(VAR_0->pBulk);
    VAR_0->pBulk = VAR_0->pFree = 0;
  }
}

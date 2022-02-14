
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* pGroup; scalar_t__ bPurgeable; TYPE_3__* pFree; } ;
struct TYPE_7__ {int pBuf; } ;
struct TYPE_9__ {TYPE_1__ page; struct TYPE_9__* pNext; scalar_t__ isBulkLocal; TYPE_4__* pCache; } ;
struct TYPE_8__ {int nCurrentPage; int mutex; } ;
typedef TYPE_3__ PgHdr1 ;
typedef TYPE_4__ PCache1 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(PgHdr1 *VAR_0){
  PCache1 *VAR_1;
  FUNC_0( VAR_0!=0 );
  VAR_1 = VAR_0->pCache;
  FUNC_0( FUNC_3(VAR_0->pCache->pGroup->mutex) );
  if( VAR_0->isBulkLocal ){
    VAR_0->pNext = VAR_1->pFree;
    VAR_1->pFree = VAR_0;
  }else{
    FUNC_1(VAR_0->page.pBuf);



  }
  if( VAR_1->bPurgeable ){
    VAR_1->pGroup->nCurrentPage--;
  }
}

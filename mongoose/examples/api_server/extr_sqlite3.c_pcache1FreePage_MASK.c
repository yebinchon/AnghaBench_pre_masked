
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* pGroup; scalar_t__ bPurgeable; } ;
struct TYPE_8__ {int pBuf; } ;
struct TYPE_10__ {TYPE_1__ page; TYPE_4__* pCache; } ;
struct TYPE_9__ {int nCurrentPage; int mutex; } ;
typedef TYPE_3__ PgHdr1 ;
typedef TYPE_4__ PCache1 ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(PgHdr1 *VAR_0){
  if( FUNC_0(VAR_0) ){
    PCache1 *VAR_1 = VAR_0->pCache;
    FUNC_1( FUNC_4(VAR_0->pCache->pGroup->mutex) );
    FUNC_2(VAR_0->page.pBuf);



    if( VAR_1->bPurgeable ){
      VAR_1->pGroup->nCurrentPage--;
    }
  }
}

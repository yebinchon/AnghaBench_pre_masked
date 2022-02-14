
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_13__ {int nCurrentPage; int mutex; } ;
struct TYPE_12__ {int szPage; int szExtra; TYPE_6__* pGroup; scalar_t__ bPurgeable; } ;
struct TYPE_10__ {TYPE_2__* pExtra; void* pBuf; } ;
struct TYPE_11__ {TYPE_1__ page; } ;
typedef TYPE_2__ PgHdr1 ;
typedef TYPE_3__ PCache1 ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (TYPE_6__*) ;
 TYPE_2__* FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static PgHdr1 *FUNC_8(PCache1 *VAR_0){
  PgHdr1 *VAR_1 = 0;
  void *VAR_2;




  FUNC_0( FUNC_7(VAR_0->pGroup->mutex) );
  FUNC_4(VAR_0->pGroup);
  VAR_2 = FUNC_1(sizeof(PgHdr1) + VAR_0->szPage + VAR_0->szExtra);
  VAR_1 = (PgHdr1 *)&((u8 *)VAR_2)[VAR_0->szPage];

  FUNC_2(VAR_0->pGroup);

  if( VAR_2 ){
    VAR_1->page.pBuf = VAR_2;
    VAR_1->page.pExtra = &VAR_1[1];
    if( VAR_0->bPurgeable ){
      VAR_0->pGroup->nCurrentPage++;
    }
    return VAR_1;
  }
  return 0;
}

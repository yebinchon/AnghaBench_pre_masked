
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t u8 ;
typedef int i64 ;
struct TYPE_12__ {scalar_t__ eState; size_t iPage; TYPE_2__** apPage; TYPE_1__* pPage; TYPE_4__* pBtree; } ;
struct TYPE_11__ {TYPE_3__* db; } ;
struct TYPE_10__ {int mutex; } ;
struct TYPE_9__ {int nCell; } ;
struct TYPE_8__ {scalar_t__ leaf; int nCell; } ;
typedef TYPE_5__ BtCursor ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ) ;

i64 FUNC_4(BtCursor *VAR_1){
  i64 VAR_2;
  u8 VAR_3;

  FUNC_1( FUNC_2(VAR_1) );
  FUNC_1( FUNC_3(VAR_1->pBtree->db->mutex) );




  if( FUNC_0(VAR_1->eState!=VAR_0) ) return -1;
  if( FUNC_0(VAR_1->pPage->leaf==0) ) return -1;

  VAR_2 = VAR_1->pPage->nCell;
  for(VAR_3=0; VAR_3<VAR_1->iPage; VAR_3++){
    VAR_2 *= VAR_1->apPage[VAR_3]->nCell;
  }
  return VAR_2;
}

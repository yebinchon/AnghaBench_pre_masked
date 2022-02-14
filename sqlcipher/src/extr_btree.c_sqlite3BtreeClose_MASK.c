
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_19__ {int mutex; } ;
struct TYPE_18__ {TYPE_3__* pBtree; struct TYPE_18__* pNext; } ;
struct TYPE_17__ {scalar_t__ wantToLock; scalar_t__ locked; TYPE_2__* pPrev; TYPE_1__* pNext; scalar_t__ pSchema; int (* xFreeSchema ) (scalar_t__) ;TYPE_7__* db; int pPager; TYPE_5__* pCursor; int sharable; struct TYPE_17__* pBt; } ;
struct TYPE_16__ {TYPE_1__* pNext; } ;
struct TYPE_15__ {TYPE_2__* pPrev; } ;
typedef TYPE_3__ Btree ;
typedef TYPE_3__ BtShared ;
typedef TYPE_5__ BtCursor ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int,int ) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ,TYPE_7__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__) ;

int FUNC_12(Btree *VAR_1){
  BtShared *VAR_2 = VAR_1->pBt;
  BtCursor *VAR_3;


  FUNC_0( FUNC_10(VAR_1->db->mutex) );
  FUNC_4(VAR_1);
  VAR_3 = VAR_2->pCursor;
  while( VAR_3 ){
    BtCursor *VAR_4 = VAR_3;
    VAR_3 = VAR_3->pNext;
    if( VAR_4->pBtree==VAR_1 ){
      FUNC_3(VAR_4);
    }
  }





  FUNC_6(VAR_1, VAR_0, 0);
  FUNC_5(VAR_1);





  FUNC_0( VAR_1->wantToLock==0 && VAR_1->locked==0 );
  if( !VAR_1->sharable || FUNC_2(VAR_2) ){





    FUNC_0( !VAR_2->pCursor );
    FUNC_8(VAR_2->pPager, VAR_1->db);
    if( VAR_2->xFreeSchema && VAR_2->pSchema ){
      VAR_2->xFreeSchema(VAR_2->pSchema);
    }
    FUNC_7(0, VAR_2->pSchema);
    FUNC_1(VAR_2);
    FUNC_9(VAR_2);
  }


  FUNC_0( VAR_1->wantToLock==0 );
  FUNC_0( VAR_1->locked==0 );
  if( VAR_1->pPrev ) VAR_1->pPrev->pNext = VAR_1->pNext;
  if( VAR_1->pNext ) VAR_1->pNext->pPrev = VAR_1->pPrev;


  FUNC_9(VAR_1);
  return VAR_0;
}

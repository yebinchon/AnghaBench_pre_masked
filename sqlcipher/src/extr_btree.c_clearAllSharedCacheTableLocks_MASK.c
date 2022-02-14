
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ eLock; int iTable; struct TYPE_9__* pNext; TYPE_1__* pBtree; } ;
struct TYPE_8__ {int btsFlags; int nTransaction; TYPE_1__* pWriter; TYPE_3__* pLock; } ;
struct TYPE_7__ {scalar_t__ inTrans; TYPE_3__ lock; scalar_t__ sharable; TYPE_2__* pBt; } ;
typedef TYPE_1__ Btree ;
typedef TYPE_2__ BtShared ;
typedef TYPE_3__ BtLock ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(Btree *VAR_2){
  BtShared *VAR_3 = VAR_2->pBt;
  BtLock **VAR_4 = &VAR_3->pLock;

  FUNC_0( FUNC_1(VAR_2) );
  FUNC_0( VAR_2->sharable || 0==*VAR_4 );
  FUNC_0( VAR_2->inTrans>0 );

  while( *VAR_4 ){
    BtLock *VAR_5 = *VAR_4;
    FUNC_0( (VAR_3->btsFlags & VAR_0)==0 || VAR_3->pWriter==VAR_5->pBtree );
    FUNC_0( VAR_5->pBtree->inTrans>=VAR_5->eLock );
    if( VAR_5->pBtree==VAR_2 ){
      *VAR_4 = VAR_5->pNext;
      FUNC_0( VAR_5->iTable!=1 || VAR_5==&VAR_2->lock );
      if( VAR_5->iTable!=1 ){
        FUNC_2(VAR_5);
      }
    }else{
      VAR_4 = &VAR_5->pNext;
    }
  }

  FUNC_0( (VAR_3->btsFlags & VAR_1)==0 || VAR_3->pWriter );
  if( VAR_3->pWriter==VAR_2 ){
    VAR_3->pWriter = 0;
    VAR_3->btsFlags &= ~(VAR_0|VAR_1);
  }else if( VAR_3->nTransaction==2 ){
    VAR_3->btsFlags &= ~VAR_1;
  }
}

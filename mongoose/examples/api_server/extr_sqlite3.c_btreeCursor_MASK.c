
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct KeyInfo {int dummy; } ;
struct TYPE_14__ {int iPage; scalar_t__ cachedRowid; int eState; struct TYPE_14__* pPrev; struct TYPE_14__* pNext; scalar_t__ wrFlag; TYPE_3__* pBt; TYPE_2__* pBtree; struct KeyInfo* pKeyInfo; scalar_t__ pgnoRoot; } ;
struct TYPE_13__ {int btsFlags; TYPE_4__* pCursor; TYPE_1__* pPage1; } ;
struct TYPE_12__ {scalar_t__ inTrans; TYPE_3__* pBt; } ;
struct TYPE_11__ {scalar_t__ aData; } ;
typedef scalar_t__ Pgno ;
typedef TYPE_2__ Btree ;
typedef TYPE_3__ BtShared ;
typedef TYPE_4__ BtCursor ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int,int,int) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(
  Btree *VAR_6,
  int VAR_7,
  int VAR_8,
  struct KeyInfo *VAR_9,
  BtCursor *VAR_10
){
  BtShared *VAR_11 = VAR_6->pBt;

  FUNC_1( FUNC_5(VAR_6) );
  FUNC_1( VAR_8==0 || VAR_8==1 );





  FUNC_1( FUNC_4(VAR_6, VAR_7, VAR_9!=0, VAR_8+1) );
  FUNC_1( VAR_8==0 || !FUNC_3(VAR_6, VAR_7) );


  FUNC_1( VAR_6->inTrans>VAR_4 );
  FUNC_1( VAR_8==0 || VAR_6->inTrans==VAR_5 );
  FUNC_1( VAR_11->pPage1 && VAR_11->pPage1->aData );

  if( FUNC_0(VAR_8 && (VAR_11->btsFlags & VAR_0)!=0) ){
    return VAR_3;
  }
  if( VAR_7==1 && FUNC_2(VAR_11)==0 ){
    FUNC_1( VAR_8==0 );
    VAR_7 = 0;
  }



  VAR_10->pgnoRoot = (Pgno)VAR_7;
  VAR_10->iPage = -1;
  VAR_10->pKeyInfo = VAR_9;
  VAR_10->pBtree = VAR_6;
  VAR_10->pBt = VAR_11;
  VAR_10->wrFlag = (u8)VAR_8;
  VAR_10->pNext = VAR_11->pCursor;
  if( VAR_10->pNext ){
    VAR_10->pNext->pPrev = VAR_10;
  }
  VAR_11->pCursor = VAR_10;
  VAR_10->eState = VAR_1;
  VAR_10->cachedRowid = 0;
  return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ nSize; } ;
struct TYPE_14__ {scalar_t__ eState; int skipNext; scalar_t__ iPage; int pgnoRoot; scalar_t__ wrFlag; scalar_t__ pKeyInfo; scalar_t__ validNKey; scalar_t__ atLast; TYPE_1__ info; scalar_t__* aiIdx; TYPE_2__** apPage; TYPE_3__* pBtree; } ;
struct TYPE_13__ {int * pBt; } ;
struct TYPE_12__ {int intKey; int pgno; scalar_t__ nCell; int hdrOffset; int * aData; int leaf; scalar_t__ isInit; } ;
typedef int Pgno ;
typedef TYPE_2__ MemPage ;
typedef TYPE_3__ Btree ;
typedef int BtShared ;
typedef TYPE_4__ BtCursor ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,TYPE_2__**,int) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_7(BtCursor *VAR_6){
  MemPage *VAR_7;
  int VAR_8 = VAR_5;
  Btree *VAR_9 = VAR_6->pBtree;
  BtShared *VAR_10 = VAR_9->pBt;

  FUNC_0( FUNC_1(VAR_6) );
  FUNC_0( VAR_1 < VAR_2 );
  FUNC_0( VAR_3 < VAR_2 );
  FUNC_0( VAR_0 > VAR_2 );
  if( VAR_6->eState>=VAR_2 ){
    if( VAR_6->eState==VAR_0 ){
      FUNC_0( VAR_6->skipNext!=VAR_5 );
      return VAR_6->skipNext;
    }
    FUNC_6(VAR_6);
  }

  if( VAR_6->iPage>=0 ){
    int VAR_11;
    for(VAR_11=1; VAR_11<=VAR_6->iPage; VAR_11++){
      FUNC_5(VAR_6->apPage[VAR_11]);
    }
    VAR_6->iPage = 0;
  }else if( VAR_6->pgnoRoot==0 ){
    VAR_6->eState = VAR_1;
    return VAR_5;
  }else{
    VAR_8 = FUNC_3(VAR_10, VAR_6->pgnoRoot, &VAR_6->apPage[0], VAR_6->wrFlag==0);
    if( VAR_8!=VAR_5 ){
      VAR_6->eState = VAR_1;
      return VAR_8;
    }
    VAR_6->iPage = 0;





    FUNC_0( VAR_6->apPage[0]->intKey==1 || VAR_6->apPage[0]->intKey==0 );
    if( (VAR_6->pKeyInfo==0)!=VAR_6->apPage[0]->intKey ){
      return VAR_4;
    }
  }







  VAR_7 = VAR_6->apPage[0];
  FUNC_0( VAR_7->pgno==VAR_6->pgnoRoot );
  FUNC_0( VAR_7->isInit && (VAR_6->pKeyInfo==0)==VAR_7->intKey );

  VAR_6->aiIdx[0] = 0;
  VAR_6->info.nSize = 0;
  VAR_6->atLast = 0;
  VAR_6->validNKey = 0;

  if( VAR_7->nCell==0 && !VAR_7->leaf ){
    Pgno VAR_12;
    if( VAR_7->pgno!=1 ) return VAR_4;
    VAR_12 = FUNC_2(&VAR_7->aData[VAR_7->hdrOffset+8]);
    VAR_6->eState = VAR_3;
    VAR_8 = FUNC_4(VAR_6, VAR_12);
  }else{
    VAR_6->eState = ((VAR_7->nCell>0)?VAR_3:VAR_1);
  }
  return VAR_8;
}

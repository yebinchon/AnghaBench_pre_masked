
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ nSize; } ;
struct TYPE_14__ {scalar_t__ eState; int skipNext; int iPage; scalar_t__ pgnoRoot; int curIntKey; scalar_t__ pKeyInfo; int curFlags; TYPE_3__** apPage; TYPE_2__ info; scalar_t__ ix; int curPagerFlags; TYPE_1__* pBtree; } ;
struct TYPE_13__ {int intKey; int pgno; scalar_t__ isInit; scalar_t__ nCell; int hdrOffset; int * aData; int leaf; } ;
struct TYPE_11__ {int pBt; } ;
typedef int Pgno ;
typedef TYPE_3__ MemPage ;
typedef TYPE_4__ BtCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,scalar_t__,TYPE_3__**,int ,int ) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_7(BtCursor *VAR_9){
  MemPage *VAR_10;
  int VAR_11 = VAR_8;

  FUNC_0( FUNC_1(VAR_9) );
  FUNC_0( VAR_4 < VAR_5 );
  FUNC_0( VAR_6 < VAR_5 );
  FUNC_0( VAR_3 > VAR_5 );
  if( VAR_9->eState>=VAR_5 ){
    if( VAR_9->eState==VAR_3 ){
      FUNC_0( VAR_9->skipNext!=VAR_8 );
      return VAR_9->skipNext;
    }
    FUNC_6(VAR_9);
  }

  if( VAR_9->iPage>=0 ){
    if( VAR_9->iPage ){
      do{
        FUNC_0( VAR_9->apPage[VAR_9->iPage]!=0 );
        FUNC_5(VAR_9->apPage[VAR_9->iPage--]);
      }while( VAR_9->iPage);
      goto skip_init;
    }
  }else if( VAR_9->pgnoRoot==0 ){
    VAR_9->eState = VAR_4;
    return VAR_8;
  }else{
    FUNC_0( VAR_9->iPage==(-1) );
    VAR_11 = FUNC_3(VAR_9->pBtree->pBt, VAR_9->pgnoRoot, &VAR_9->apPage[0],
                        0, VAR_9->curPagerFlags);
    if( VAR_11!=VAR_8 ){
      VAR_9->eState = VAR_4;
       return VAR_11;
    }
    VAR_9->iPage = 0;
    VAR_9->curIntKey = VAR_9->apPage[0]->intKey;
  }
  VAR_10 = VAR_9->apPage[0];
  FUNC_0( VAR_10->pgno==VAR_9->pgnoRoot );
  FUNC_0( VAR_10->intKey==1 || VAR_10->intKey==0 );
  if( VAR_10->isInit==0 || (VAR_9->pKeyInfo==0)!=VAR_10->intKey ){
    return VAR_7;
  }

skip_init:
  VAR_9->ix = 0;
  VAR_9->info.nSize = 0;
  VAR_9->curFlags &= ~(VAR_0|VAR_1|VAR_2);

  VAR_10 = VAR_9->apPage[0];
  if( VAR_10->nCell>0 ){
    VAR_9->eState = VAR_6;
  }else if( !VAR_10->leaf ){
    Pgno VAR_12;
    if( VAR_10->pgno!=1 ) return VAR_7;
    VAR_12 = FUNC_2(&VAR_10->aData[VAR_10->hdrOffset+8]);
    VAR_9->eState = VAR_6;
    VAR_11 = FUNC_4(VAR_9, VAR_12);
  }else{
    VAR_9->eState = VAR_4;
  }
  return VAR_11;
}

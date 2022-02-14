
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int nRight; int * aRhs; int lhs; } ;
struct TYPE_13__ {int flags; int nPtr; scalar_t__ pBtCsr; TYPE_1__* aPtr; scalar_t__* apTreeCsr; scalar_t__ iFree; } ;
struct TYPE_12__ {scalar_t__ pKey; int * pSeg; scalar_t__ pPg; TYPE_3__* pLevel; } ;
typedef TYPE_1__ SegmentPtr ;
typedef TYPE_2__ MultiCursor ;
typedef TYPE_3__ Level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(MultiCursor *VAR_5, int VAR_6){
  int VAR_7 = VAR_3;
  int VAR_8;

  VAR_5->flags &= ~(VAR_0 | VAR_1 | VAR_2);
  VAR_5->flags |= (VAR_6 ? VAR_1 : VAR_0);
  VAR_5->iFree = 0;


  for(VAR_8=0; VAR_7==VAR_3 && VAR_8<2; VAR_8++){
    if( VAR_5->apTreeCsr[VAR_8] ){
      VAR_7 = FUNC_2(VAR_5->apTreeCsr[VAR_8], VAR_6);
    }
  }

  for(VAR_8=0; VAR_7==VAR_3 && VAR_8<VAR_5->nPtr; VAR_8++){
    SegmentPtr *VAR_9 = &VAR_5->aPtr[VAR_8];
    Level *VAR_10 = VAR_9->pLevel;
    int VAR_11;
    int VAR_12 = 0;

    if( VAR_6 ){
      for(VAR_11=0; VAR_11<VAR_10->nRight && VAR_7==VAR_3; VAR_11++){
        VAR_7 = FUNC_4(VAR_5, &VAR_9[VAR_11+1], 1);
        if( VAR_9[VAR_11+1].pPg ) VAR_12 = 1;
      }
      if( VAR_12==0 && VAR_7==VAR_3 ){
        VAR_7 = FUNC_4(VAR_5, VAR_9, 1);
      }else{
        FUNC_5(VAR_9, VAR_4);
      }
    }else{
      int VAR_13 = (VAR_9->pSeg==&VAR_10->lhs);
      FUNC_0( VAR_9->pSeg==&VAR_10->lhs || VAR_9->pSeg==&VAR_10->aRhs[0] );

      if( VAR_13 ){
        VAR_7 = FUNC_4(VAR_5, VAR_9, 0);
        if( VAR_9->pKey ) VAR_12 = 1;
      }
      for(VAR_11=0; VAR_11<VAR_10->nRight && VAR_7==VAR_3; VAR_11++){
        if( VAR_12 ){
          FUNC_5(&VAR_9[VAR_11+1], VAR_4);
        }else{
          VAR_7 = FUNC_6(VAR_5, VAR_10, &VAR_9[VAR_11+VAR_13]);
        }
      }
    }
    VAR_8 += VAR_10->nRight;
  }


  if( VAR_7==VAR_3 && VAR_5->pBtCsr ){
    FUNC_0( VAR_6==0 );
    VAR_7 = FUNC_1(VAR_5->pBtCsr);
  }

  if( VAR_7==VAR_3 ){
    VAR_7 = FUNC_3(VAR_5, VAR_6);
  }

  return VAR_7;
}

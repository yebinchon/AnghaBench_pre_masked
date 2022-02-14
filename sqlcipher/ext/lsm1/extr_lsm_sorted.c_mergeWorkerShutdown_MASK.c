
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;


typedef int u8 ;
struct TYPE_17__ {int iCell; int iPg; } ;
struct TYPE_23__ {int nInput; int iOutputOff; TYPE_15__ splitkey; TYPE_15__* aInput; } ;
struct TYPE_22__ {TYPE_4__* pCsr; scalar_t__ aGobble; TYPE_2__* pDb; scalar_t__ pPage; TYPE_1__* pLevel; } ;
struct TYPE_21__ {scalar_t__ pBtCsr; int nPtr; int* aTree; TYPE_3__* aPtr; } ;
struct TYPE_20__ {int iCell; scalar_t__ pPg; } ;
struct TYPE_19__ {int pEnv; int pFS; } ;
struct TYPE_18__ {scalar_t__ nRight; TYPE_6__* pMerge; } ;
typedef TYPE_3__ SegmentPtr ;
typedef TYPE_4__ MultiCursor ;
typedef TYPE_5__ MergeWorker ;
typedef TYPE_6__ Merge ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,TYPE_15__*) ;
 int FUNC_3 (scalar_t__,TYPE_15__*) ;
 int * FUNC_4 (scalar_t__,int*) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,int*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (TYPE_5__*) ;
 int FUNC_15 (TYPE_5__*) ;
 int FUNC_16 (int *,int) ;

__attribute__((used)) static void FUNC_17(MergeWorker *VAR_2, int *VAR_3){
  int VAR_4;
  int VAR_5 = *VAR_3;
  MultiCursor *VAR_6 = VAR_2->pCsr;




  if( VAR_5==VAR_1 && VAR_6 ){
    Merge *VAR_7 = VAR_2->pLevel->pMerge;
    if( FUNC_9(VAR_6) ){
      int VAR_8 = (VAR_6->pBtCsr!=0);
      int VAR_9;


      FUNC_1( VAR_7->nInput==0 || VAR_2->pLevel->nRight>0 );
      FUNC_1( VAR_7->nInput==0 || VAR_7->nInput==(VAR_6->nPtr+VAR_8) );

      for(VAR_4=0; VAR_4<(VAR_7->nInput-VAR_8); VAR_4++){
        SegmentPtr *VAR_10 = &VAR_6->aPtr[VAR_4];
        if( VAR_10->pPg ){
          VAR_7->aInput[VAR_4].iPg = FUNC_7(VAR_10->pPg);
          VAR_7->aInput[VAR_4].iCell = VAR_10->iCell;
        }else{
          VAR_7->aInput[VAR_4].iPg = 0;
          VAR_7->aInput[VAR_4].iCell = 0;
        }
      }
      if( VAR_8 && VAR_7->nInput ){
        FUNC_1( VAR_4==VAR_6->nPtr );
        FUNC_2(VAR_6->pBtCsr, &VAR_7->aInput[VAR_4]);
      }


      VAR_9 = VAR_6->aTree[1] - VAR_0;
      if( VAR_9<VAR_6->nPtr ){
        VAR_7->splitkey = VAR_7->aInput[VAR_9];
      }else{
        FUNC_3(VAR_6->pBtCsr, &VAR_7->splitkey);
      }
    }




    if( VAR_2->pPage ){
      int VAR_11;
      u8 *VAR_12 = FUNC_4(VAR_2->pPage, &VAR_11);
      int VAR_13 = VAR_7->iOutputOff;
      int VAR_14 = FUNC_0(VAR_11, FUNC_16(VAR_12, VAR_11));
      FUNC_10(&VAR_12[VAR_13], 0, VAR_14 - VAR_13);
    }

    VAR_7->iOutputOff = -1;
  }

  FUNC_8(VAR_6, 0);


  if( VAR_5==VAR_1 ) VAR_5 = FUNC_14(VAR_2);
  if( VAR_5==VAR_1 ) VAR_5 = FUNC_12(VAR_2);
  if( VAR_5==VAR_1 ) VAR_5 = FUNC_13(VAR_2);
  if( VAR_5==VAR_1 ) VAR_5 = FUNC_11(VAR_2);
  FUNC_6(VAR_2->pDb->pFS, &VAR_5);
  FUNC_15(VAR_2);

  FUNC_5(VAR_2->pDb->pEnv, VAR_2->aGobble);
  VAR_2->aGobble = 0;
  VAR_2->pCsr = 0;

  *VAR_3 = VAR_5;
}

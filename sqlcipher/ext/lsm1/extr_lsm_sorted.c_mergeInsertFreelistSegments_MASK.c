
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int pEnv; TYPE_1__* pWorker; } ;
typedef TYPE_2__ lsm_db ;
struct TYPE_18__ {struct TYPE_18__* pSeg; TYPE_7__* pLevel; } ;
struct TYPE_21__ {int nRight; TYPE_3__* aRhs; struct TYPE_21__* pNext; TYPE_3__ lhs; } ;
struct TYPE_20__ {TYPE_3__* aGobble; TYPE_7__* pLevel; TYPE_5__* pCsr; } ;
struct TYPE_19__ {int nPtr; TYPE_3__* aPtr; TYPE_3__* aTree; } ;
struct TYPE_16__ {TYPE_7__* pLevel; } ;
typedef TYPE_3__ SegmentPtr ;
typedef TYPE_3__ Segment ;
typedef TYPE_5__ MultiCursor ;
typedef TYPE_6__ MergeWorker ;
typedef TYPE_7__ Level ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ,int,int*) ;
 int FUNC_3 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_4 (TYPE_5__*,TYPE_3__*,int ) ;
 int FUNC_5 (int ,TYPE_7__*) ;

__attribute__((used)) static int FUNC_6(
  lsm_db *VAR_1,
  int VAR_2,
  MergeWorker *VAR_3
){
  int VAR_4 = VAR_0;
  if( VAR_2>0 ){
    MultiCursor *VAR_5 = VAR_3->pCsr;
    Level *VAR_6 = VAR_3->pLevel;
    SegmentPtr *VAR_7;
    Segment *VAR_8;

    Level *VAR_9;
    Level *VAR_10;
    int VAR_11 = 0;

    VAR_7 = (SegmentPtr *)FUNC_2(
        VAR_1->pEnv, sizeof(SegmentPtr) * (VAR_5->nPtr+VAR_2), &VAR_4
    );
    if( VAR_4 ) return VAR_4;
    FUNC_3(&VAR_7[VAR_2], VAR_5->aPtr, sizeof(SegmentPtr)*VAR_5->nPtr);
    VAR_5->nPtr += VAR_2;
    FUNC_1(VAR_1->pEnv, VAR_5->aTree);
    FUNC_1(VAR_1->pEnv, VAR_5->aPtr);
    VAR_5->aTree = 0;
    VAR_5->aPtr = VAR_7;

    VAR_8 = (Segment *)FUNC_2(
        VAR_1->pEnv, sizeof(Segment) * (VAR_6->nRight+VAR_2), &VAR_4
    );
    if( VAR_4 ) return VAR_4;
    FUNC_3(&VAR_8[VAR_2], VAR_6->aRhs, sizeof(Segment)*VAR_6->nRight);
    VAR_6->nRight += VAR_2;
    FUNC_1(VAR_1->pEnv, VAR_6->aRhs);
    VAR_6->aRhs = VAR_8;

    for(VAR_9=VAR_1->pWorker->pLevel; VAR_4==VAR_0 && VAR_9!=VAR_6; VAR_9=VAR_10){
      Segment *VAR_12 = &VAR_6->aRhs[VAR_11];
      FUNC_3(VAR_12, &VAR_9->lhs, sizeof(Segment));

      VAR_5->aPtr[VAR_11].pSeg = VAR_12;
      VAR_5->aPtr[VAR_11].pLevel = VAR_6;
      VAR_4 = FUNC_4(VAR_5, &VAR_5->aPtr[VAR_11], 0);

      VAR_1->pWorker->pLevel = VAR_10 = VAR_9->pNext;
      FUNC_5(VAR_1->pEnv, VAR_9);
      VAR_11++;
    }
    FUNC_0( VAR_11==VAR_2 );
    FUNC_0( VAR_4!=VAR_0 || VAR_1->pWorker->pLevel==VAR_6 );

    for(VAR_11=VAR_2; VAR_11<VAR_5->nPtr; VAR_11++){
      VAR_5->aPtr[VAR_11].pSeg = &VAR_6->aRhs[VAR_11];
    }

    FUNC_1(VAR_1->pEnv, VAR_3->aGobble);
    VAR_3->aGobble = 0;
  }
  return VAR_4;
}

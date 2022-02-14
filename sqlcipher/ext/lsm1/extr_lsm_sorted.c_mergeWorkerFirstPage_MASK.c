
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_21__ {scalar_t__ pPage; TYPE_6__* aSave; TYPE_5__* pDb; TYPE_3__* pLevel; TYPE_8__* pCsr; } ;
struct TYPE_20__ {int nPtr; int* pPrevMergePtr; TYPE_4__* aPtr; scalar_t__ pBtCsr; } ;
struct TYPE_19__ {int iFirst; } ;
struct TYPE_18__ {int bStore; } ;
struct TYPE_17__ {int pFS; } ;
struct TYPE_16__ {TYPE_7__* pSeg; } ;
struct TYPE_15__ {TYPE_2__* pNext; } ;
struct TYPE_13__ {scalar_t__ iFirst; } ;
struct TYPE_14__ {TYPE_1__ lhs; } ;
typedef TYPE_7__ Segment ;
typedef int Page ;
typedef TYPE_8__ MultiCursor ;
typedef TYPE_9__ MergeWorker ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int *,int*) ;
 int FUNC_2 (int ,TYPE_7__*,int ,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_9__*,int) ;
 scalar_t__ FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6(MergeWorker *VAR_1){
  int VAR_2 = VAR_0;
  Page *VAR_3 = 0;
  int VAR_4 = 0;
  MultiCursor *VAR_5 = VAR_1->pCsr;

  FUNC_0( VAR_1->pPage==0 );

  if( VAR_5->pBtCsr ){
    VAR_2 = VAR_0;
    VAR_4 = (int)VAR_1->pLevel->pNext->lhs.iFirst;
  }else if( VAR_5->nPtr>0 ){
    Segment *VAR_6;
    VAR_6 = VAR_5->aPtr[VAR_5->nPtr-1].pSeg;
    VAR_2 = FUNC_2(VAR_1->pDb->pFS, VAR_6, VAR_6->iFirst, &VAR_3);
    if( VAR_2==VAR_0 ){
      u8 *VAR_7;
      int VAR_8;
      VAR_7 = FUNC_1(VAR_3, &VAR_8);
      VAR_4 = (int)FUNC_5(VAR_7, VAR_8);
      FUNC_3(VAR_3);
    }
  }

  if( VAR_2==VAR_0 ){
    VAR_2 = FUNC_4(VAR_1, VAR_4);
    if( VAR_5->pPrevMergePtr ) *VAR_5->pPrevMergePtr = VAR_4;
    VAR_1->aSave[0].bStore = 1;
  }

  return VAR_2;
}

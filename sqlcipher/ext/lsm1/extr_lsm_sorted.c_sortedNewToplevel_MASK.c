
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_48__ TYPE_7__ ;
typedef struct TYPE_47__ TYPE_5__ ;
typedef struct TYPE_46__ TYPE_4__ ;
typedef struct TYPE_45__ TYPE_3__ ;
typedef struct TYPE_44__ TYPE_2__ ;
typedef struct TYPE_43__ TYPE_1__ ;
typedef struct TYPE_42__ TYPE_17__ ;


struct TYPE_43__ {int nChunk; } ;
struct TYPE_44__ {int bUseFreelist; int pEnv; TYPE_5__* pFreelist; TYPE_17__* pWorker; int pFS; TYPE_1__ treehdr; } ;
typedef TYPE_2__ lsm_db ;
typedef int freelist ;
struct TYPE_45__ {scalar_t__ iFirst; scalar_t__ iRoot; } ;
struct TYPE_48__ {scalar_t__ pMerge; int flags; TYPE_3__ lhs; struct TYPE_48__* pNext; } ;
struct TYPE_47__ {int bFlush; int nWork; scalar_t__ nEntry; scalar_t__ aEntry; TYPE_4__* pCsr; TYPE_7__* pLevel; TYPE_2__* pDb; } ;
struct TYPE_46__ {int * pPrevMergePtr; int pBtCsr; scalar_t__ aPtr; TYPE_2__* pDb; } ;
struct TYPE_42__ {int nWrite; TYPE_5__ freelist; } ;
typedef int SegmentPtr ;
typedef TYPE_3__ Segment ;
typedef TYPE_4__ MultiCursor ;
typedef TYPE_5__ MergeWorker ;
typedef TYPE_5__ Merge ;
typedef int LsmPgno ;
typedef TYPE_7__ Level ;
typedef TYPE_5__ Freelist ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,int *) ;
 TYPE_7__* FUNC_3 (TYPE_17__*) ;
 int FUNC_4 (TYPE_17__*,TYPE_7__*) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,TYPE_17__*,int,TYPE_3__*) ;
 int FUNC_7 (int ,TYPE_3__*) ;
 int FUNC_8 (TYPE_4__*,int ) ;
 int FUNC_9 (TYPE_4__*) ;
 scalar_t__ FUNC_10 (int ,int,int*) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 int FUNC_12 (TYPE_2__*,TYPE_17__*,int ,int ,char*) ;
 int FUNC_13 (TYPE_5__*,TYPE_5__*,int) ;
 int FUNC_14 (TYPE_5__*,int ,int) ;
 scalar_t__ FUNC_15 (TYPE_5__*) ;
 int FUNC_16 (TYPE_5__*,int*) ;
 int FUNC_17 (TYPE_5__*) ;
 int FUNC_18 (TYPE_4__*,TYPE_7__*,int*) ;
 int FUNC_19 (TYPE_4__*,TYPE_17__*,int) ;
 int FUNC_20 (TYPE_4__*) ;
 TYPE_4__* FUNC_21 (TYPE_2__*,int*) ;
 int FUNC_22 (TYPE_4__*) ;
 int FUNC_23 (int ,TYPE_7__*) ;
 int FUNC_24 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_25(
  lsm_db *VAR_5,
  int VAR_6,
  int *VAR_7
){
  int VAR_8 = VAR_3;
  MultiCursor *VAR_9 = 0;
  Level *VAR_10 = 0;
  Level *VAR_11;
  Segment *VAR_12 = 0;
  Level *VAR_13 = 0;
  int VAR_14 = 0;
  Freelist VAR_15;

  if( VAR_6!=VAR_4 ){
    VAR_8 = FUNC_11(VAR_5, VAR_5->treehdr.nChunk);
  }

  FUNC_0( VAR_5->bUseFreelist==0 );
  VAR_5->pFreelist = &VAR_15;
  VAR_5->bUseFreelist = 1;
  FUNC_14(&VAR_15, 0, sizeof(VAR_15));


  VAR_10 = FUNC_3(VAR_5->pWorker);
  VAR_11 = (Level *)FUNC_10(VAR_5->pEnv, sizeof(Level), &VAR_8);
  if( VAR_11 ){
    VAR_11->pNext = VAR_10;
    FUNC_4(VAR_5->pWorker, VAR_11);
  }




  VAR_9 = FUNC_21(VAR_5, &VAR_8);
  if( VAR_9 ){
    VAR_9->pDb = VAR_5;
    VAR_8 = FUNC_22(VAR_9);
    if( VAR_8==VAR_3 ){
      VAR_8 = FUNC_19(VAR_9, VAR_5->pWorker, VAR_6);
    }
    if( VAR_8==VAR_3 && VAR_10 && VAR_10->pMerge==0 ){
      if( (VAR_10->flags & VAR_0) ){
        VAR_13 = VAR_10;
        VAR_9->aPtr = FUNC_10(VAR_5->pEnv, sizeof(SegmentPtr), &VAR_8);
        FUNC_18(VAR_9, VAR_10, &VAR_8);
      }else if( VAR_6!=VAR_4 && VAR_10->lhs.iRoot ){
        VAR_12 = &VAR_10->lhs;
        VAR_8 = FUNC_2(VAR_5, VAR_12, &VAR_9->pBtCsr);
      }
    }



    if( VAR_10==0 ){
      FUNC_20(VAR_9);
    }
  }

  if( VAR_8!=VAR_3 ){
    FUNC_8(VAR_9, 0);
  }else{
    LsmPgno VAR_16 = 0;
    Merge VAR_17;
    MergeWorker VAR_18;

    FUNC_14(&VAR_17, 0, sizeof(Merge));
    FUNC_14(&VAR_18, 0, sizeof(MergeWorker));

    VAR_11->pMerge = &VAR_17;
    VAR_11->flags |= VAR_1;
    VAR_18.pDb = VAR_5;
    VAR_18.pLevel = VAR_11;
    VAR_18.pCsr = VAR_9;
    VAR_9->pPrevMergePtr = &VAR_16;


    VAR_18.bFlush = 1;


    if( VAR_8==VAR_3 ) VAR_8 = FUNC_9(VAR_9);
    while( VAR_8==VAR_3 && FUNC_15(&VAR_18)==0 ){
      VAR_8 = FUNC_17(&VAR_18);
    }
    FUNC_16(&VAR_18, &VAR_8);
    FUNC_0( VAR_8!=VAR_3 || VAR_18.nWork==0 || VAR_11->lhs.iFirst );
    if( VAR_8==VAR_3 && VAR_11->lhs.iFirst ){
      VAR_8 = FUNC_7(VAR_5->pFS, &VAR_11->lhs);
    }
    VAR_14 = VAR_18.nWork;
    VAR_11->flags &= ~VAR_1;
    if( VAR_6==VAR_4 ){
      VAR_11->flags |= VAR_0;
    }
    VAR_11->pMerge = 0;
  }

  if( VAR_8!=VAR_3 || VAR_11->lhs.iFirst==0 ){
    FUNC_0( VAR_8!=VAR_3 || VAR_5->pWorker->freelist.nEntry==0 );
    FUNC_4(VAR_5->pWorker, VAR_10);
    FUNC_23(VAR_5->pEnv, VAR_11);
  }else{
    if( VAR_12 ){
      VAR_12->iRoot = 0;
    }else if( VAR_13 ){
      FUNC_0( VAR_11->pNext==VAR_13 );
      VAR_11->pNext = VAR_13->pNext;
      FUNC_6(VAR_5->pFS, VAR_5->pWorker, 1, &VAR_13->lhs);
      FUNC_23(VAR_5->pEnv, VAR_13);
    }





    if( VAR_15.nEntry ){
      Freelist *VAR_19 = &VAR_5->pWorker->freelist;
      FUNC_5(VAR_5->pEnv, VAR_19->aEntry);
      FUNC_13(VAR_19, &VAR_15, sizeof(VAR_15));
      VAR_15.aEntry = 0;
    }else{
      VAR_5->pWorker->freelist.nEntry = 0;
    }

    FUNC_1(VAR_5, &VAR_11->lhs);
    FUNC_24(VAR_5);
  }

  if( VAR_7 ) *VAR_7 = VAR_14;
  VAR_5->pWorker->nWrite += VAR_14;
  VAR_5->pFreelist = 0;
  VAR_5->bUseFreelist = 0;
  FUNC_5(VAR_5->pEnv, VAR_15.aEntry);
  return VAR_8;
}

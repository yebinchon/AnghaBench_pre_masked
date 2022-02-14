
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_19__ {int iOutputOff; scalar_t__ nSkip; } ;
struct TYPE_18__ {TYPE_4__* pDb; TYPE_3__* aSave; int * pPage; TYPE_2__* pCsr; TYPE_1__* pLevel; } ;
struct TYPE_17__ {scalar_t__ iFirst; } ;
struct TYPE_16__ {int pFS; } ;
struct TYPE_15__ {int bStore; } ;
struct TYPE_14__ {scalar_t__* pPrevMergePtr; } ;
struct TYPE_13__ {TYPE_5__ lhs; TYPE_7__* pMerge; } ;
typedef TYPE_5__ Segment ;
typedef int Page ;
typedef TYPE_6__ MergeWorker ;
typedef TYPE_7__ Merge ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 size_t FUNC_2 (int) ;
 size_t FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__* FUNC_5 (int *,int*) ;
 scalar_t__ FUNC_6 (int ,int) ;
 int FUNC_7 (scalar_t__*,int ) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (scalar_t__*,int) ;
 int FUNC_10 (scalar_t__*,int ,int) ;
 int FUNC_11 (TYPE_6__*,int ,int,void*,int) ;
 int FUNC_12 (TYPE_6__*) ;
 int FUNC_13 (TYPE_6__*,int) ;
 int FUNC_14 (TYPE_6__*,int ,void*,int) ;
 int FUNC_15 (scalar_t__*,int) ;
 int FUNC_16 (scalar_t__*,int) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (int) ;

__attribute__((used)) static int FUNC_19(
  MergeWorker *VAR_3,
  int VAR_4,
  void *VAR_5, int VAR_6,
  void *VAR_7, int VAR_8,
  int VAR_9
){
  int VAR_10 = VAR_0;
  Merge *VAR_11;
  int VAR_12;
  Page *VAR_13;
  u8 *VAR_14;
  int VAR_15 = 0;
  int VAR_16 = 0;
  int VAR_17 = 0;
  int VAR_18 = 0;
  int VAR_19 = 0;
  Segment *VAR_20;
  int VAR_21 = 0;
  int VAR_22 = 0;

  VAR_11 = VAR_3->pLevel->pMerge;
  VAR_20 = &VAR_3->pLevel->lhs;

  if( VAR_20->iFirst==0 && VAR_3->pPage==0 ){
    VAR_10 = FUNC_12(VAR_3);
    VAR_22 = 1;
  }
  VAR_13 = VAR_3->pPage;
  if( VAR_13 ){
    VAR_14 = FUNC_5(VAR_13, &VAR_15);
    VAR_16 = FUNC_15(VAR_14, VAR_15);
    VAR_17 = (int)FUNC_16(VAR_14, VAR_15);
    VAR_18 = VAR_9 - VAR_17;
  }
  if( VAR_10==VAR_0 ){
    VAR_12 = 1 + FUNC_8(VAR_18) + FUNC_8(VAR_6);
    if( FUNC_17(VAR_4) ) VAR_12 += FUNC_8(VAR_8);



    VAR_19 = VAR_11->iOutputOff;
    if( VAR_19<0 || VAR_13==0 || VAR_19+VAR_12 > FUNC_1(VAR_15, VAR_16+1) ){
      if( VAR_19>=0 && VAR_13 ){

        FUNC_4( VAR_14 );
        FUNC_10(&VAR_14[VAR_19], 0, FUNC_1(VAR_15, VAR_16)-VAR_19);
      }
      VAR_17 = (int)*VAR_3->pCsr->pPrevMergePtr;
      VAR_18 = VAR_9 - VAR_17;
      VAR_19 = 0;
      VAR_16 = 0;
      VAR_10 = FUNC_13(VAR_3, VAR_17);
      VAR_13 = VAR_3->pPage;
    }
  }





  if( VAR_10==VAR_0 && VAR_16==0 && VAR_22==0 ){
    FUNC_4( VAR_11->nSkip>=0 );

    if( VAR_11->nSkip==0 ){
      VAR_10 = FUNC_14(VAR_3, FUNC_18(VAR_4), VAR_5, VAR_6);
      FUNC_4( VAR_3->aSave[0].bStore==0 );
      VAR_3->aSave[0].bStore = 1;
      VAR_11->nSkip = FUNC_6(VAR_3->pDb->pFS, VAR_6);
    }else{
      VAR_11->nSkip--;
      VAR_21 = VAR_2;
    }

    if( VAR_11->nSkip ) VAR_21 |= VAR_1;
  }


  if( VAR_10==VAR_0 ){
    VAR_14 = FUNC_5(VAR_13, &VAR_15);


    FUNC_7(&VAR_14[FUNC_3(VAR_15)], (u16)(VAR_16+1));
    FUNC_7(&VAR_14[FUNC_0(VAR_15, VAR_16)], (u16)VAR_19);
    if( VAR_21 ) FUNC_7(&VAR_14[FUNC_2(VAR_15)], (u16)VAR_21);


    VAR_14[VAR_19++] = (u8)VAR_4;
    VAR_19 += FUNC_9(&VAR_14[VAR_19], VAR_18);
    VAR_19 += FUNC_9(&VAR_14[VAR_19], VAR_6);
    if( FUNC_17(VAR_4) ) VAR_19 += FUNC_9(&VAR_14[VAR_19], VAR_8);
    VAR_11->iOutputOff = VAR_19;


    FUNC_4( VAR_17==FUNC_16(VAR_14, VAR_15) );
    VAR_10 = FUNC_11(VAR_3, 0, VAR_17+VAR_18, VAR_5, VAR_6);
    if( VAR_10==VAR_0 && FUNC_17(VAR_4) ){
      if( VAR_10==VAR_0 ){
        VAR_10 = FUNC_11(VAR_3, 0, VAR_17+VAR_18, VAR_7, VAR_8);
      }
    }
  }

  return VAR_10;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_22__ {int nAutockpt; scalar_t__ nTransOpen; scalar_t__ nMaxFreelist; TYPE_5__* pWorker; TYPE_1__* pShmhdr; } ;
typedef TYPE_4__ lsm_db ;
struct TYPE_20__ {scalar_t__ nEntry; } ;
struct TYPE_23__ {TYPE_3__* pLevel; TYPE_2__ freelist; } ;
struct TYPE_21__ {scalar_t__ nRight; scalar_t__ pNext; } ;
struct TYPE_19__ {int aSnap1; } ;
typedef TYPE_5__ Snapshot ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_4__*,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*,int ,int*) ;
 int FUNC_9 (TYPE_4__*,int) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (TYPE_4__*,int ,int*) ;
 scalar_t__ FUNC_15 (TYPE_4__*,int*) ;
 int FUNC_16 (TYPE_4__*,int,int,int,int*) ;

__attribute__((used)) static int FUNC_17(
  lsm_db *VAR_3,
  int VAR_4,
  int VAR_5,
  int VAR_6,
  int *VAR_7,
  int *VAR_8
){
  Snapshot *VAR_9;
  int VAR_10 = VAR_1;
  int VAR_11 = 0;
  int VAR_12 = VAR_6;
  int VAR_13 = VAR_6;
  int VAR_14 = 0;

  FUNC_2( VAR_6>0 );



  FUNC_2( VAR_3->pWorker==0 );
  VAR_10 = FUNC_3(VAR_3);
  if( VAR_10!=VAR_1 ) return VAR_10;
  VAR_9 = VAR_3->pWorker;




  if( VAR_4==0 && VAR_3->nAutockpt ){
    u32 VAR_15;
    u32 VAR_16;
    int VAR_17;

    FUNC_6(VAR_3, 0, 0, &VAR_15);
    VAR_16 = FUNC_4(VAR_3->pShmhdr->aSnap1, 0);
    VAR_17 = FUNC_5(VAR_3->pShmhdr->aSnap1);

    VAR_12 = (int)FUNC_1(VAR_12, (VAR_3->nAutockpt/VAR_17) - (int)(VAR_16-VAR_15));
    if( VAR_12<VAR_13 ){
      VAR_14 = 1;
      VAR_13 = FUNC_0(VAR_12, 0);
    }
  }



  if( VAR_3->nTransOpen==0 ){
    VAR_10 = FUNC_11(VAR_3, 0);
  }
  if( FUNC_15(VAR_3, &VAR_10) ){




    if( FUNC_12(VAR_3) ){
      int VAR_18 = 0;
      VAR_10 = FUNC_16(VAR_3, VAR_13, VAR_5, 1, &VAR_18);
      VAR_13 -= VAR_18;
      FUNC_2( VAR_10!=VAR_1 || VAR_13<=0 || !FUNC_12(VAR_3) );
      VAR_11 = 1;
    }

    if( VAR_10==VAR_1 && VAR_13>0 ){
      int VAR_19 = 0;
      VAR_10 = FUNC_14(VAR_3, VAR_2, &VAR_19);
      VAR_13 -= VAR_19;
      if( VAR_10==VAR_1 ){
        if( VAR_3->nTransOpen>0 ){
          FUNC_10(VAR_3);
        }
        VAR_10 = FUNC_9(VAR_3, 1);
        VAR_11 = 0;
      }
    }
  }


  if( VAR_10==VAR_1 && VAR_13>0 && VAR_4==0 ){
    int VAR_20 = 0;
    VAR_10 = FUNC_16(VAR_3, VAR_13, VAR_5, 0, &VAR_20);
    VAR_13 -= VAR_20;
    if( VAR_20 ) VAR_11 = 1;
  }



  if( VAR_10==VAR_1 && VAR_3->pWorker->freelist.nEntry > VAR_3->nMaxFreelist ){
    while( VAR_10==VAR_1 && FUNC_7(VAR_3) ){
      int VAR_21 = 0;
      VAR_10 = FUNC_16(VAR_3, 16, VAR_5, 1, &VAR_21);
      VAR_13 -= VAR_21;
    }
    if( VAR_10==VAR_1 ){
      VAR_10 = FUNC_13(VAR_3);
    }
    VAR_11 = 1;
  }

  if( VAR_10==VAR_1 ){
    *VAR_7 = (VAR_12 - VAR_13);
    *VAR_8 = (VAR_14 && VAR_13<=0);
    if( VAR_5==1 && VAR_3->nAutockpt>0 && *VAR_7>0
     && VAR_9->pLevel
     && VAR_9->pLevel->nRight==0
     && VAR_9->pLevel->pNext==0
    ){
      *VAR_8 = 1;
    }
  }

  if( VAR_10==VAR_1 && VAR_11 ){
    FUNC_8(VAR_3, 0, &VAR_10);
  }else{
    int VAR_22 = VAR_0;
    FUNC_8(VAR_3, 0, &VAR_22);
    *VAR_7 = 0;
  }
  FUNC_2( VAR_3->pWorker==0 );
  return VAR_10;
}

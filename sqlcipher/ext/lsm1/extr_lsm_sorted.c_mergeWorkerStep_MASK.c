
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int (* xCmp ) (scalar_t__,int ,void*,int) ;int pEnv; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_19__ {void* pData; } ;
struct TYPE_18__ {int eType; scalar_t__ iPtr; int nKey; scalar_t__ pKey; } ;
struct TYPE_17__ {TYPE_3__* pCsr; int * aGobble; TYPE_1__* pDb; } ;
struct TYPE_16__ {int eType; int nPtr; int* aTree; TYPE_6__ val; TYPE_2__* aPtr; TYPE_5__* pBtCsr; scalar_t__* pPrevMergePtr; } ;
struct TYPE_15__ {int flags; scalar_t__ pPg; scalar_t__ iPgPtr; scalar_t__ iPtr; int nKey; scalar_t__ pKey; } ;
typedef TYPE_2__ SegmentPtr ;
typedef TYPE_3__ MultiCursor ;
typedef TYPE_4__ MergeWorker ;
typedef scalar_t__ LsmPgno ;
typedef TYPE_5__ BtreeCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_3__*,void**,int*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int*,int*) ;
 int FUNC_6 (TYPE_4__*,int,void*,int,void*,int,int) ;
 int FUNC_7 (TYPE_3__*,int,void**,int*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,TYPE_6__*,void*,int) ;
 int FUNC_11 (scalar_t__,int ,void*,int) ;
 scalar_t__ FUNC_12 (scalar_t__,int ,void*,int) ;

__attribute__((used)) static int FUNC_13(MergeWorker *VAR_3){
  lsm_db *VAR_4 = VAR_3->pDb;
  MultiCursor *VAR_5;
  int VAR_6 = VAR_1;
  int VAR_7;
  void *VAR_8; int VAR_9;
  LsmPgno VAR_10;
  int VAR_11;

  VAR_5 = VAR_3->pCsr;


  FUNC_2(VAR_5, &VAR_8, &VAR_9);
  VAR_7 = VAR_5->eType;







  VAR_10 = (VAR_5->pPrevMergePtr ? *VAR_5->pPrevMergePtr : 0);
  if( VAR_5->pBtCsr ){
    BtreeCursor *VAR_12 = VAR_5->pBtCsr;
    if( VAR_12->pKey ){
      int VAR_13 = FUNC_9(VAR_12->eType) - FUNC_9(VAR_7);
      if( VAR_13==0 ) VAR_13 = VAR_4->xCmp(VAR_12->pKey, VAR_12->nKey, VAR_8, VAR_9);
      if( 0==VAR_13 ) VAR_10 = VAR_12->iPtr;
      FUNC_0( VAR_13>=0 );
    }
  }else if( VAR_5->nPtr ){
    SegmentPtr *VAR_14 = &VAR_5->aPtr[VAR_5->nPtr-1];
    if( VAR_14->pPg
     && 0==VAR_4->xCmp(VAR_14->pKey, VAR_14->nKey, VAR_8, VAR_9)
    ){
      VAR_10 = VAR_14->iPtr+VAR_14->iPgPtr;
    }
  }

  VAR_11 = VAR_5->aTree[1];
  FUNC_5(VAR_5, &VAR_11, &VAR_7);

  if( VAR_7!=0 ){
    if( VAR_3->aGobble ){
      int VAR_15 = VAR_5->aTree[1] - VAR_0;
      if( VAR_15<VAR_5->nPtr && VAR_15>=0 ){
        SegmentPtr *VAR_16 = &VAR_5->aPtr[VAR_15];
        if( (VAR_16->flags & VAR_2)==0 ){
          VAR_3->aGobble[VAR_15] = FUNC_1(VAR_16->pPg);
        }
      }
    }




    if( VAR_6==VAR_1 && (FUNC_8(VAR_7)==0 || VAR_10!=0) ){

      void *VAR_17; int VAR_18;
      VAR_6 = FUNC_7(VAR_5, VAR_11, &VAR_17, &VAR_18);
      if( VAR_17 && VAR_6==VAR_1 ){
        FUNC_0( VAR_18>=0 );
        VAR_6 = FUNC_10(VAR_4->pEnv, &VAR_5->val, VAR_17, VAR_18);
        VAR_17 = VAR_5->val.pData;
      }
      if( VAR_6==VAR_1 ){
        VAR_6 = FUNC_6(VAR_3, VAR_7, VAR_8, VAR_9, VAR_17, VAR_18, (int)VAR_10);
      }
    }
  }


  FUNC_0( FUNC_4(VAR_3->pCsr) );
  if( VAR_6==VAR_1 ) VAR_6 = FUNC_3(VAR_3->pCsr);

  return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_14__ ;


struct Vdbe {struct Vdbe* pNext; } ;
struct TYPE_21__ {int* anStat; TYPE_8__* pFree; TYPE_8__* pInit; } ;
struct TYPE_26__ {int nDb; int* pnBytesFreed; int mutex; int nDeferredCons; int nDeferredImmCons; TYPE_5__* aDb; struct Vdbe* pVdbe; TYPE_1__ lookaside; } ;
typedef TYPE_6__ sqlite3 ;
typedef int Trigger ;
typedef int Table ;
struct TYPE_29__ {int count; int ht; } ;
struct TYPE_28__ {struct TYPE_28__* pNext; } ;
struct TYPE_24__ {int count; int ht; } ;
struct TYPE_23__ {int count; int ht; } ;
struct TYPE_27__ {TYPE_9__ tblHash; TYPE_9__ trigHash; TYPE_4__ fkeyHash; TYPE_3__ idxHash; } ;
struct TYPE_25__ {int * pBt; TYPE_7__* pSchema; } ;
struct TYPE_22__ {int (* xRoundup ) (int) ;} ;
struct TYPE_20__ {TYPE_2__ m; } ;
typedef TYPE_7__ Schema ;
typedef int Pager ;
typedef TYPE_8__ LookasideSlot ;
typedef int HashElem ;
typedef int Btree ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (TYPE_6__*,struct Vdbe*) ;
 int FUNC_7 (TYPE_6__*,int *) ;
 int FUNC_8 (TYPE_6__*,int *) ;
 TYPE_14__ VAR_3 ;
 int FUNC_9 (TYPE_6__*,int*) ;
 int FUNC_10 (int *,int,int,int*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_6__*) ;
 int FUNC_13 (TYPE_6__*,struct Vdbe*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int *) ;
 int * FUNC_18 (TYPE_9__*) ;
 int * FUNC_19 (int *) ;
 int FUNC_20 (int) ;
 int FUNC_21 (int) ;

int FUNC_22(
  sqlite3 *VAR_4,
  int VAR_5,
  int *VAR_6,
  int *VAR_7,
  int VAR_8
){
  int VAR_9 = VAR_2;





  FUNC_15(VAR_4->mutex);
  switch( VAR_5 ){
    case 130: {
      *VAR_6 = FUNC_9(VAR_4, VAR_7);
      if( VAR_8 ){
        LookasideSlot *VAR_10 = VAR_4->lookaside.pFree;
        if( VAR_10 ){
          while( VAR_10->pNext ) VAR_10 = VAR_10->pNext;
          VAR_10->pNext = VAR_4->lookaside.pInit;
          VAR_4->lookaside.pInit = VAR_4->lookaside.pFree;
          VAR_4->lookaside.pFree = 0;
        }
      }
      break;
    }

    case 133:
    case 131:
    case 132: {
      FUNC_21( VAR_5==133 );
      FUNC_21( VAR_5==131 );
      FUNC_21( VAR_5==132 );
      FUNC_1( (VAR_5-133)>=0 );
      FUNC_1( (VAR_5-133)<3 );
      *VAR_6 = 0;
      *VAR_7 = VAR_4->lookaside.anStat[VAR_5 - 133];
      if( VAR_8 ){
        VAR_4->lookaside.anStat[VAR_5 - 133] = 0;
      }
      break;
    }






    case 136:
    case 137: {
      int VAR_11 = 0;
      int VAR_12;
      FUNC_3(VAR_4);
      for(VAR_12=0; VAR_12<VAR_4->nDb; VAR_12++){
        Btree *VAR_13 = VAR_4->aDb[VAR_12].pBt;
        if( VAR_13 ){
          Pager *VAR_14 = FUNC_5(VAR_13);
          int VAR_15 = FUNC_11(VAR_14);
          if( VAR_5==136 ){
            VAR_15 = VAR_15 / FUNC_2(VAR_13);
          }
          VAR_11 += VAR_15;
        }
      }
      FUNC_4(VAR_4);
      *VAR_6 = VAR_11;
      *VAR_7 = 0;
      break;
    }






    case 129: {
      int VAR_16;
      int VAR_17 = 0;

      FUNC_3(VAR_4);
      VAR_4->pnBytesFreed = &VAR_17;
      for(VAR_16=0; VAR_16<VAR_4->nDb; VAR_16++){
        Schema *VAR_18 = VAR_4->aDb[VAR_16].pSchema;
        if( FUNC_0(VAR_18!=0) ){
          HashElem *VAR_19;

          VAR_17 += VAR_3.m.xRoundup(sizeof(HashElem)) * (
              VAR_18->tblHash.count
            + VAR_18->trigHash.count
            + VAR_18->idxHash.count
            + VAR_18->fkeyHash.count
          );
          VAR_17 += FUNC_14(VAR_18->tblHash.ht);
          VAR_17 += FUNC_14(VAR_18->trigHash.ht);
          VAR_17 += FUNC_14(VAR_18->idxHash.ht);
          VAR_17 += FUNC_14(VAR_18->fkeyHash.ht);

          for(VAR_19=FUNC_18(&VAR_18->trigHash); VAR_19; VAR_19=FUNC_19(VAR_19)){
            FUNC_8(VAR_4, (Trigger*)FUNC_17(VAR_19));
          }
          for(VAR_19=FUNC_18(&VAR_18->tblHash); VAR_19; VAR_19=FUNC_19(VAR_19)){
            FUNC_7(VAR_4, (Table *)FUNC_17(VAR_19));
          }
        }
      }
      VAR_4->pnBytesFreed = 0;
      FUNC_4(VAR_4);

      *VAR_7 = 0;
      *VAR_6 = VAR_17;
      break;
    }






    case 128: {
      struct Vdbe *VAR_20;
      int VAR_21 = 0;

      VAR_4->pnBytesFreed = &VAR_21;
      for(VAR_20=VAR_4->pVdbe; VAR_20; VAR_20=VAR_20->pNext){
        FUNC_13(VAR_4, VAR_20);
        FUNC_6(VAR_4, VAR_20);
      }
      VAR_4->pnBytesFreed = 0;

      *VAR_7 = 0;
      *VAR_6 = VAR_21;

      break;
    }






    case 138:
      VAR_5 = 135 +1;

    case 140:
    case 139:
    case 135:{
      int VAR_22;
      int VAR_23 = 0;
      FUNC_1( 139==140 +1 );
      FUNC_1( 135==140 +2 );

      for(VAR_22=0; VAR_22<VAR_4->nDb; VAR_22++){
        if( VAR_4->aDb[VAR_22].pBt ){
          Pager *VAR_24 = FUNC_5(VAR_4->aDb[VAR_22].pBt);
          FUNC_10(VAR_24, VAR_5, VAR_8, &VAR_23);
        }
      }
      *VAR_7 = 0;


      *VAR_6 = VAR_23;
      break;
    }





    case 134: {
      *VAR_7 = 0;
      *VAR_6 = VAR_4->nDeferredImmCons>0 || VAR_4->nDeferredCons>0;
      break;
    }

    default: {
      VAR_9 = VAR_0;
    }
  }
  FUNC_16(VAR_4->mutex);
  return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_12__ ;


struct Vdbe {struct Vdbe* pNext; } ;
struct TYPE_19__ {int nOut; int mxOut; int* anStat; } ;
struct TYPE_24__ {int nDb; int* pnBytesFreed; int mutex; int nDeferredCons; int nDeferredImmCons; TYPE_5__* aDb; struct Vdbe* pVdbe; TYPE_1__ lookaside; } ;
typedef TYPE_6__ sqlite3 ;
typedef int Trigger ;
typedef int Table ;
struct TYPE_26__ {int count; int ht; } ;
struct TYPE_22__ {int count; int ht; } ;
struct TYPE_21__ {int count; int ht; } ;
struct TYPE_25__ {TYPE_8__ tblHash; TYPE_8__ trigHash; TYPE_4__ fkeyHash; TYPE_3__ idxHash; } ;
struct TYPE_23__ {int * pBt; TYPE_7__* pSchema; } ;
struct TYPE_20__ {int (* xRoundup ) (int) ;} ;
struct TYPE_18__ {TYPE_2__ m; } ;
typedef TYPE_7__ Schema ;
typedef int Pager ;
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
 TYPE_12__ VAR_3 ;
 int FUNC_9 (int *,int,int,int*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (TYPE_6__*,struct Vdbe*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int *) ;
 int * FUNC_17 (TYPE_8__*) ;
 int * FUNC_18 (int *) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int) ;

int FUNC_21(
  sqlite3 *VAR_4,
  int VAR_5,
  int *VAR_6,
  int *VAR_7,
  int VAR_8
){
  int VAR_9 = VAR_2;





  FUNC_14(VAR_4->mutex);
  switch( VAR_5 ){
    case 130: {
      *VAR_6 = VAR_4->lookaside.nOut;
      *VAR_7 = VAR_4->lookaside.mxOut;
      if( VAR_8 ){
        VAR_4->lookaside.mxOut = VAR_4->lookaside.nOut;
      }
      break;
    }

    case 133:
    case 131:
    case 132: {
      FUNC_20( VAR_5==133 );
      FUNC_20( VAR_5==131 );
      FUNC_20( VAR_5==132 );
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
      int VAR_10 = 0;
      int VAR_11;
      FUNC_3(VAR_4);
      for(VAR_11=0; VAR_11<VAR_4->nDb; VAR_11++){
        Btree *VAR_12 = VAR_4->aDb[VAR_11].pBt;
        if( VAR_12 ){
          Pager *VAR_13 = FUNC_5(VAR_12);
          int VAR_14 = FUNC_10(VAR_13);
          if( VAR_5==136 ){
            VAR_14 = VAR_14 / FUNC_2(VAR_12);
          }
          VAR_10 += VAR_14;
        }
      }
      FUNC_4(VAR_4);
      *VAR_6 = VAR_10;
      *VAR_7 = 0;
      break;
    }






    case 129: {
      int VAR_15;
      int VAR_16 = 0;

      FUNC_3(VAR_4);
      VAR_4->pnBytesFreed = &VAR_16;
      for(VAR_15=0; VAR_15<VAR_4->nDb; VAR_15++){
        Schema *VAR_17 = VAR_4->aDb[VAR_15].pSchema;
        if( FUNC_0(VAR_17!=0) ){
          HashElem *VAR_18;

          VAR_16 += VAR_3.m.xRoundup(sizeof(HashElem)) * (
              VAR_17->tblHash.count
            + VAR_17->trigHash.count
            + VAR_17->idxHash.count
            + VAR_17->fkeyHash.count
          );
          VAR_16 += FUNC_13(VAR_17->tblHash.ht);
          VAR_16 += FUNC_13(VAR_17->trigHash.ht);
          VAR_16 += FUNC_13(VAR_17->idxHash.ht);
          VAR_16 += FUNC_13(VAR_17->fkeyHash.ht);

          for(VAR_18=FUNC_17(&VAR_17->trigHash); VAR_18; VAR_18=FUNC_18(VAR_18)){
            FUNC_8(VAR_4, (Trigger*)FUNC_16(VAR_18));
          }
          for(VAR_18=FUNC_17(&VAR_17->tblHash); VAR_18; VAR_18=FUNC_18(VAR_18)){
            FUNC_7(VAR_4, (Table *)FUNC_16(VAR_18));
          }
        }
      }
      VAR_4->pnBytesFreed = 0;
      FUNC_4(VAR_4);

      *VAR_7 = 0;
      *VAR_6 = VAR_16;
      break;
    }






    case 128: {
      struct Vdbe *VAR_19;
      int VAR_20 = 0;

      VAR_4->pnBytesFreed = &VAR_20;
      for(VAR_19=VAR_4->pVdbe; VAR_19; VAR_19=VAR_19->pNext){
        FUNC_12(VAR_4, VAR_19);
        FUNC_6(VAR_4, VAR_19);
      }
      VAR_4->pnBytesFreed = 0;

      *VAR_7 = 0;
      *VAR_6 = VAR_20;

      break;
    }






    case 139:
    case 138:
    case 135:{
      int VAR_21;
      int VAR_22 = 0;
      FUNC_1( 138==139 +1 );
      FUNC_1( 135==139 +2 );

      for(VAR_21=0; VAR_21<VAR_4->nDb; VAR_21++){
        if( VAR_4->aDb[VAR_21].pBt ){
          Pager *VAR_23 = FUNC_5(VAR_4->aDb[VAR_21].pBt);
          FUNC_9(VAR_23, VAR_5, VAR_8, &VAR_22);
        }
      }
      *VAR_7 = 0;


      *VAR_6 = VAR_22;
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
  FUNC_15(VAR_4->mutex);
  return VAR_9;
}

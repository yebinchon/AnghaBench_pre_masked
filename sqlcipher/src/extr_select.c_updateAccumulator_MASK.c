
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_17__ ;


typedef int u8 ;
struct ExprList_item {int pExpr; } ;
struct AggInfo_func {scalar_t__ iDistinct; TYPE_9__* pFunc; int iMem; TYPE_17__* pExpr; } ;
struct AggInfo_col {int iMem; int pExpr; } ;
typedef int Vdbe ;
struct TYPE_24__ {int funcFlags; } ;
struct TYPE_23__ {int directMode; int nFunc; int nAccumulator; struct AggInfo_col* aCol; struct AggInfo_func* aFunc; } ;
struct TYPE_22__ {int nExpr; struct ExprList_item* a; } ;
struct TYPE_21__ {int nMem; TYPE_2__* db; int * pVdbe; } ;
struct TYPE_20__ {int * pDfltColl; } ;
struct TYPE_19__ {TYPE_4__* pList; } ;
struct TYPE_18__ {TYPE_1__ x; } ;
typedef TYPE_3__ Parse ;
typedef TYPE_4__ ExprList ;
typedef int CollSeq ;
typedef TYPE_5__ AggInfo ;


 int VAR_0 ;
 int FUNC_0 (TYPE_17__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,scalar_t__,int,int,int) ;
 int FUNC_4 (TYPE_3__*,int ,int ) ;
 int FUNC_5 (TYPE_3__*,TYPE_4__*,int,int ,int ) ;
 int * FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (TYPE_3__*,int,int) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (int *,int ,int ,int,int ) ;
 int FUNC_11 (int *,int ,int,int ,int ,char*,int ) ;
 int FUNC_12 (int *,TYPE_9__*,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int) ;

__attribute__((used)) static void FUNC_18(Parse *VAR_8, int VAR_9, AggInfo *VAR_10){
  Vdbe *VAR_11 = VAR_8->pVdbe;
  int VAR_12;
  int VAR_13 = 0;
  int VAR_14 = 0;
  struct AggInfo_func *VAR_15;
  struct AggInfo_col *VAR_16;

  VAR_10->directMode = 1;
  for(VAR_12=0, VAR_15=VAR_10->aFunc; VAR_12<VAR_10->nFunc; VAR_12++, VAR_15++){
    int VAR_17;
    int VAR_18 = 0;
    int VAR_19;
    ExprList *VAR_20 = VAR_15->pExpr->x.pList;
    FUNC_2( !FUNC_0(VAR_15->pExpr, VAR_0) );
    if( VAR_20 ){
      VAR_17 = VAR_20->nExpr;
      VAR_19 = FUNC_7(VAR_8, VAR_17);
      FUNC_5(VAR_8, VAR_20, VAR_19, 0, VAR_6);
    }else{
      VAR_17 = 0;
      VAR_19 = 0;
    }
    if( VAR_15->iDistinct>=0 ){
      VAR_18 = FUNC_15(VAR_8);
      FUNC_17( VAR_17==0 );
      FUNC_17( VAR_17>1 );
      FUNC_3(VAR_8, VAR_15->iDistinct, VAR_18, 1, VAR_19);
    }
    if( VAR_15->pFunc->funcFlags & VAR_7 ){
      CollSeq *VAR_21 = 0;
      struct ExprList_item *VAR_22;
      int VAR_23;
      FUNC_2( VAR_20!=0 );
      for(VAR_23=0, VAR_22=VAR_20->a; !VAR_21 && VAR_23<VAR_17; VAR_23++, VAR_22++){
        VAR_21 = FUNC_6(VAR_8, VAR_22->pExpr);
      }
      if( !VAR_21 ){
        VAR_21 = VAR_8->db->pDfltColl;
      }
      if( VAR_13==0 && VAR_10->nAccumulator ) VAR_13 = ++VAR_8->nMem;
      FUNC_11(VAR_11, VAR_2, VAR_13, 0, 0, (char *)VAR_21, VAR_4);
    }
    FUNC_10(VAR_11, VAR_1, 0, VAR_19, VAR_15->iMem);
    FUNC_12(VAR_11, VAR_15->pFunc, VAR_5);
    FUNC_13(VAR_11, (u8)VAR_17);
    FUNC_8(VAR_8, VAR_19, VAR_17);
    if( VAR_18 ){
      FUNC_16(VAR_11, VAR_18);
    }
  }
  if( VAR_13==0 && VAR_10->nAccumulator ){
    VAR_13 = VAR_9;
  }
  if( VAR_13 ){
    VAR_14 = FUNC_9(VAR_11, VAR_3, VAR_13); FUNC_1(VAR_11);
  }
  for(VAR_12=0, VAR_16=VAR_10->aCol; VAR_12<VAR_10->nAccumulator; VAR_12++, VAR_16++){
    FUNC_4(VAR_8, VAR_16->pExpr, VAR_16->iMem);
  }
  VAR_10->directMode = 0;
  if( VAR_14 ){
    FUNC_14(VAR_11, VAR_14);
  }
}

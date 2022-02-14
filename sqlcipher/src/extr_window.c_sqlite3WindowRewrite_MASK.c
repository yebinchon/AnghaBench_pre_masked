
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_52__ TYPE_8__ ;
typedef struct TYPE_51__ TYPE_7__ ;
typedef struct TYPE_50__ TYPE_6__ ;
typedef struct TYPE_49__ TYPE_5__ ;
typedef struct TYPE_48__ TYPE_4__ ;
typedef struct TYPE_47__ TYPE_3__ ;
typedef struct TYPE_46__ TYPE_36__ ;
typedef struct TYPE_45__ TYPE_2__ ;
typedef struct TYPE_44__ TYPE_1__ ;


struct TYPE_47__ {scalar_t__ mallocFailed; } ;
typedef TYPE_3__ sqlite3 ;
struct TYPE_48__ {scalar_t__ iEphCsr; scalar_t__ regAccum; scalar_t__ regResult; int pFilter; TYPE_2__* pOwner; scalar_t__ iArgCol; struct TYPE_48__* pNextWin; int pOrderBy; int pPartition; scalar_t__ nBufferCol; } ;
typedef TYPE_4__ Window ;
typedef int Vdbe ;
struct TYPE_52__ {scalar_t__ nExpr; } ;
struct TYPE_51__ {scalar_t__ nMem; scalar_t__ nTab; TYPE_3__* db; } ;
struct TYPE_50__ {scalar_t__ pPrior; int selFlags; TYPE_5__* pSrc; scalar_t__ pOrderBy; scalar_t__ pEList; int * pHaving; TYPE_8__* pGroupBy; int * pWhere; TYPE_4__* pWin; } ;
struct TYPE_49__ {TYPE_36__* a; } ;
struct TYPE_46__ {TYPE_6__* pSelect; } ;
struct TYPE_44__ {int pList; } ;
struct TYPE_45__ {TYPE_1__ x; } ;
typedef TYPE_5__ SrcList ;
typedef TYPE_6__ Select ;
typedef TYPE_7__ Parse ;
typedef TYPE_8__ ExprList ;
typedef int Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_8__* FUNC_0 (TYPE_7__*,TYPE_8__*,int ) ;
 int FUNC_1 (TYPE_7__*,TYPE_4__*,TYPE_5__*,scalar_t__,TYPE_8__**) ;
 scalar_t__ FUNC_2 (TYPE_7__*,TYPE_36__*) ;
 int * FUNC_3 (TYPE_3__*,int ,int *,int ) ;
 int * FUNC_4 (TYPE_3__*,int ,int ) ;
 TYPE_8__* FUNC_5 (TYPE_7__*,TYPE_8__*,int *) ;
 scalar_t__ FUNC_6 (TYPE_8__*,scalar_t__,int) ;
 int FUNC_7 (TYPE_3__*,scalar_t__) ;
 TYPE_8__* FUNC_8 (TYPE_3__*,int ,int ) ;
 int * FUNC_9 (TYPE_7__*) ;
 int * VAR_8 ;
 int FUNC_10 (TYPE_3__*,TYPE_6__*) ;
 TYPE_6__* FUNC_11 (TYPE_7__*,TYPE_8__*,TYPE_5__*,int *,TYPE_8__*,int *,TYPE_8__*,int ,int ) ;
 int FUNC_12 (TYPE_7__*,TYPE_6__*,int ) ;
 TYPE_5__* FUNC_13 (TYPE_7__*,int ,int ,int ) ;
 int FUNC_14 (TYPE_7__*,TYPE_5__*) ;
 int FUNC_15 (int *,int ,scalar_t__,scalar_t__) ;

int FUNC_16(Parse *VAR_9, Select *VAR_10){
  int VAR_11 = VAR_6;
  if( VAR_10->pWin && VAR_10->pPrior==0 ){
    Vdbe *VAR_12 = FUNC_9(VAR_9);
    sqlite3 *VAR_13 = VAR_9->db;
    Select *VAR_14 = 0;
    SrcList *VAR_15 = VAR_10->pSrc;
    Expr *VAR_16 = VAR_10->pWhere;
    ExprList *VAR_17 = VAR_10->pGroupBy;
    Expr *VAR_18 = VAR_10->pHaving;
    ExprList *VAR_19 = 0;

    ExprList *VAR_20 = 0;
    Window *VAR_21 = VAR_10->pWin;
    Window *VAR_22;

    VAR_10->pSrc = 0;
    VAR_10->pWhere = 0;
    VAR_10->pGroupBy = 0;
    VAR_10->pHaving = 0;




    VAR_19 = FUNC_8(VAR_13, VAR_21->pPartition, 0);
    VAR_19 = FUNC_0(VAR_9, VAR_19, VAR_21->pOrderBy);
    if( VAR_19 && VAR_10->pOrderBy ){
      if( FUNC_6(VAR_19, VAR_10->pOrderBy, -1)==0 ){
        FUNC_7(VAR_13, VAR_10->pOrderBy);
        VAR_10->pOrderBy = 0;
      }
    }




    VAR_21->iEphCsr = VAR_9->nTab++;
    VAR_9->nTab += 3;

    FUNC_1(VAR_9, VAR_21, VAR_15, VAR_10->pEList, &VAR_20);
    FUNC_1(VAR_9, VAR_21, VAR_15, VAR_10->pOrderBy, &VAR_20);
    VAR_21->nBufferCol = (VAR_20 ? VAR_20->nExpr : 0);




    VAR_20 = FUNC_0(VAR_9, VAR_20, VAR_21->pPartition);
    VAR_20 = FUNC_0(VAR_9, VAR_20, VAR_21->pOrderBy);





    for(VAR_22=VAR_21; VAR_22; VAR_22=VAR_22->pNextWin){
      VAR_22->iArgCol = (VAR_20 ? VAR_20->nExpr : 0);
      VAR_20 = FUNC_0(VAR_9, VAR_20, VAR_22->pOwner->x.pList);
      if( VAR_22->pFilter ){
        Expr *VAR_23 = FUNC_4(VAR_13, VAR_22->pFilter, 0);
        VAR_20 = FUNC_5(VAR_9, VAR_20, VAR_23);
      }
      VAR_22->regAccum = ++VAR_9->nMem;
      VAR_22->regResult = ++VAR_9->nMem;
      FUNC_15(VAR_12, VAR_0, 0, VAR_22->regAccum);
    }







    if( VAR_20==0 ){
      VAR_20 = FUNC_5(VAR_9, 0,
          FUNC_3(VAR_13, VAR_7, &VAR_8[0], 0)
      );
    }

    VAR_14 = FUNC_11(
        VAR_9, VAR_20, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, 0, 0
    );
    VAR_10->pSrc = FUNC_13(VAR_9, 0, 0, 0);
    if( VAR_10->pSrc ){
      VAR_10->pSrc->a[0].pSelect = VAR_14;
      FUNC_14(VAR_9, VAR_10->pSrc);
      if( FUNC_2(VAR_9, &VAR_10->pSrc->a[0]) ){
        VAR_11 = VAR_5;
      }else{
        VAR_14->selFlags |= VAR_4;
        VAR_10->selFlags &= ~VAR_3;
        FUNC_12(VAR_9, VAR_14, 0);
      }

      FUNC_15(VAR_12, VAR_2, VAR_21->iEphCsr, VAR_20->nExpr);
      FUNC_15(VAR_12, VAR_1, VAR_21->iEphCsr+1, VAR_21->iEphCsr);
      FUNC_15(VAR_12, VAR_1, VAR_21->iEphCsr+2, VAR_21->iEphCsr);
      FUNC_15(VAR_12, VAR_1, VAR_21->iEphCsr+3, VAR_21->iEphCsr);
    }else{
      FUNC_10(VAR_13, VAR_14);
    }
    if( VAR_13->mallocFailed ) VAR_11 = VAR_5;
  }

  return VAR_11;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


typedef int sNC ;
typedef int sCol ;
struct TYPE_31__ {TYPE_10__* pUpsertIdx; TYPE_9__* pUpsertTargetWhere; TYPE_11__* pUpsertTarget; } ;
typedef TYPE_6__ Upsert ;
struct TYPE_32__ {TYPE_10__* pIndex; } ;
typedef TYPE_7__ Table ;
struct TYPE_27__ {char* zToken; } ;
struct TYPE_34__ {scalar_t__ op; scalar_t__ iColumn; int iTable; struct TYPE_34__* pLeft; TYPE_2__ u; TYPE_8__* pSrcList; int * pParse; } ;
struct TYPE_33__ {int nSrc; TYPE_1__* a; } ;
struct TYPE_30__ {TYPE_9__* pExpr; } ;
struct TYPE_29__ {int nExpr; TYPE_3__* a; } ;
struct TYPE_28__ {TYPE_9__* pExpr; } ;
struct TYPE_26__ {int iCursor; TYPE_7__* pTab; } ;
struct TYPE_25__ {int nExpr; TYPE_5__* a; } ;
struct TYPE_24__ {int nKeyCol; scalar_t__* aiColumn; TYPE_4__* aColExpr; scalar_t__* azColl; TYPE_9__* pPartIdxWhere; struct TYPE_24__* pNext; } ;
typedef TYPE_8__ SrcList ;
typedef int Parse ;
typedef TYPE_9__ NameContext ;
typedef TYPE_10__ Index ;
typedef TYPE_11__ ExprList ;
typedef TYPE_9__ Expr ;


 scalar_t__ FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (TYPE_10__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_9__*,int ,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,TYPE_9__*,TYPE_9__*,int) ;
 int FUNC_6 (TYPE_9__*,TYPE_11__*) ;
 int FUNC_7 (TYPE_9__*,TYPE_9__*) ;

int FUNC_8(
  Parse *VAR_6,
  SrcList *VAR_7,
  Upsert *VAR_8
){
  Table *VAR_9;
  int VAR_10;
  int VAR_11;
  Index *VAR_12;
  ExprList *VAR_13;
  Expr *VAR_14;
  NameContext VAR_15;
  Expr VAR_16[2];

  FUNC_2( VAR_7->nSrc==1 );
  FUNC_2( VAR_7->a[0].pTab!=0 );
  FUNC_2( VAR_8!=0 );
  FUNC_2( VAR_8->pUpsertTarget!=0 );





  FUNC_3(&VAR_15, 0, sizeof(VAR_15));
  VAR_15.pParse = VAR_6;
  VAR_15.pSrcList = VAR_7;
  VAR_10 = FUNC_6(&VAR_15, VAR_8->pUpsertTarget);
  if( VAR_10 ) return VAR_10;
  VAR_10 = FUNC_7(&VAR_15, VAR_8->pUpsertTargetWhere);
  if( VAR_10 ) return VAR_10;


  VAR_9 = VAR_7->a[0].pTab;
  VAR_13 = VAR_8->pUpsertTarget;
  VAR_11 = VAR_7->a[0].iCursor;
  if( FUNC_0(VAR_9)
   && VAR_13->nExpr==1
   && (VAR_14 = VAR_13->a[0].pExpr)->op==VAR_3
   && VAR_14->iColumn==VAR_5
  ){

    FUNC_2( VAR_8->pUpsertIdx==0 );
    return VAR_1;
  }







  FUNC_3(VAR_16, 0, sizeof(VAR_16));
  VAR_16[0].op = VAR_2;
  VAR_16[0].pLeft = &VAR_16[1];
  VAR_16[1].op = VAR_3;
  VAR_16[1].iTable = VAR_7->a[0].iCursor;


  for(VAR_12=VAR_9->pIndex; VAR_12; VAR_12=VAR_12->pNext){
    int VAR_17, VAR_18, VAR_19;
    if( !FUNC_1(VAR_12) ) continue;
    if( VAR_13->nExpr!=VAR_12->nKeyCol ) continue;
    if( VAR_12->pPartIdxWhere ){
      if( VAR_8->pUpsertTargetWhere==0 ) continue;
      if( FUNC_5(VAR_6, VAR_8->pUpsertTargetWhere,
                             VAR_12->pPartIdxWhere, VAR_11)!=0 ){
        continue;
      }
    }
    VAR_19 = VAR_12->nKeyCol;
    for(VAR_17=0; VAR_17<VAR_19; VAR_17++){
      Expr *VAR_20;
      VAR_16[0].u.zToken = (char*)VAR_12->azColl[VAR_17];
      if( VAR_12->aiColumn[VAR_17]==VAR_4 ){
        FUNC_2( VAR_12->aColExpr!=0 );
        FUNC_2( VAR_12->aColExpr->nExpr>VAR_17 );
        VAR_20 = VAR_12->aColExpr->a[VAR_17].pExpr;
        if( VAR_20->op!=VAR_2 ){
          VAR_16[0].pLeft = VAR_20;
          VAR_20 = &VAR_16[0];
        }
      }else{
        VAR_16[0].pLeft = &VAR_16[1];
        VAR_16[1].iColumn = VAR_12->aiColumn[VAR_17];
        VAR_20 = &VAR_16[0];
      }
      for(VAR_18=0; VAR_18<VAR_19; VAR_18++){
        if( FUNC_5(VAR_6, VAR_13->a[VAR_18].pExpr, VAR_20,VAR_11)<2 ){
          break;
        }
      }
      if( VAR_18>=VAR_19 ){

        break;
      }
    }
    if( VAR_17<VAR_19 ){


      continue;
    }
    VAR_8->pUpsertIdx = VAR_12;
    return VAR_1;
  }
  FUNC_4(VAR_6, "ON CONFLICT clause does not match any "
                          "PRIMARY KEY or UNIQUE constraint");
  return VAR_0;
}

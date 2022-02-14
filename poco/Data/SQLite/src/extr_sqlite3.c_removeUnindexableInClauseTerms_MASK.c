
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_9__ ;
typedef struct TYPE_36__ TYPE_8__ ;
typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_11__ ;
typedef struct TYPE_27__ TYPE_10__ ;


struct TYPE_34__ {scalar_t__ mallocFailed; } ;
typedef TYPE_6__ sqlite3 ;
struct TYPE_35__ {int nLTerm; TYPE_1__** aLTerm; } ;
typedef TYPE_7__ WhereLoop ;
struct TYPE_37__ {TYPE_6__* db; } ;
struct TYPE_36__ {TYPE_10__* pOrderBy; TYPE_10__* pEList; } ;
struct TYPE_31__ {scalar_t__ iOrderByCol; } ;
struct TYPE_32__ {TYPE_3__ x; } ;
struct TYPE_33__ {scalar_t__ pExpr; TYPE_4__ u; } ;
struct TYPE_30__ {TYPE_8__* pSelect; TYPE_10__* pList; } ;
struct TYPE_29__ {int iField; TYPE_11__* pExpr; } ;
struct TYPE_28__ {TYPE_2__ x; struct TYPE_28__* pLeft; } ;
struct TYPE_27__ {int nExpr; TYPE_5__* a; } ;
typedef TYPE_8__ Select ;
typedef TYPE_9__ Parse ;
typedef TYPE_10__ ExprList ;
typedef TYPE_11__ Expr ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_6__*,TYPE_11__*) ;
 TYPE_11__* FUNC_3 (TYPE_6__*,TYPE_11__*,int ) ;
 TYPE_10__* FUNC_4 (TYPE_9__*,TYPE_10__*,scalar_t__) ;
 int FUNC_5 (TYPE_6__*,TYPE_10__*) ;
 int FUNC_6 (int ,TYPE_11__*,int ) ;

__attribute__((used)) static Expr *FUNC_7(
  Parse *VAR_0,
  int VAR_1,
  WhereLoop *VAR_2,
  Expr *VAR_3
){
  sqlite3 *VAR_4 = VAR_0->db;
  Expr *VAR_5 = FUNC_3(VAR_4, VAR_3, 0);
  if( VAR_4->mallocFailed==0 ){
    ExprList *VAR_6 = VAR_5->x.pSelect->pEList;
    ExprList *VAR_7 = VAR_5->pLeft->x.pList;
    ExprList *VAR_8 = 0;
    ExprList *VAR_9 = 0;
    int VAR_10;
    Select *VAR_11;

    for(VAR_10=VAR_1; VAR_10<VAR_2->nLTerm; VAR_10++){
      if( VAR_2->aLTerm[VAR_10]->pExpr==VAR_3 ){
        int VAR_12 = VAR_2->aLTerm[VAR_10]->iField - 1;
        if( VAR_6->a[VAR_12].pExpr==0 ) continue;
        VAR_8 = FUNC_4(VAR_0, VAR_8, VAR_6->a[VAR_12].pExpr);
        VAR_6->a[VAR_12].pExpr = 0;
        FUNC_0( VAR_7->a[VAR_12].pExpr!=0 );
        VAR_9 = FUNC_4(VAR_0, VAR_9, VAR_7->a[VAR_12].pExpr);
        VAR_7->a[VAR_12].pExpr = 0;
      }
    }
    FUNC_5(VAR_4, VAR_6);
    FUNC_5(VAR_4, VAR_7);
    VAR_5->pLeft->x.pList = VAR_9;
    VAR_5->x.pSelect->pEList = VAR_8;
    if( VAR_9 && VAR_9->nExpr==1 ){



      Expr *VAR_13 = VAR_9->a[0].pExpr;
      VAR_9->a[0].pExpr = 0;
      FUNC_2(VAR_4, VAR_5->pLeft);
      VAR_5->pLeft = VAR_13;
    }
    VAR_11 = VAR_5->x.pSelect;
    if( VAR_11->pOrderBy ){







      ExprList *VAR_14 = VAR_11->pOrderBy;
      for(VAR_10=0; VAR_10<VAR_14->nExpr; VAR_10++){
        VAR_14->a[VAR_10].u.x.iOrderByCol = 0;
      }
    }







  }
  return VAR_5;
}

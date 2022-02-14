
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_20__ {TYPE_8__* pFuncArg; } ;
struct TYPE_19__ {scalar_t__ isTabFunc; } ;
struct SrcList_item {int iCursor; TYPE_2__ u1; TYPE_6__* pTab; TYPE_1__ fg; } ;
typedef int WhereClause ;
struct TYPE_24__ {int nCol; int zName; TYPE_3__* aCol; } ;
typedef TYPE_6__ Table ;
struct TYPE_22__ {TYPE_6__* pTab; } ;
struct TYPE_27__ {TYPE_4__ y; int iColumn; int iTable; } ;
struct TYPE_26__ {int nExpr; TYPE_5__* a; } ;
struct TYPE_25__ {int db; } ;
struct TYPE_23__ {int pExpr; } ;
struct TYPE_21__ {int colFlags; } ;
typedef TYPE_7__ Parse ;
typedef TYPE_8__ ExprList ;
typedef TYPE_9__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_7__*,char*,int ,int) ;
 TYPE_9__* FUNC_2 (int ,int ,int ,int ) ;
 TYPE_9__* FUNC_3 (int ,int ,int ) ;
 TYPE_9__* FUNC_4 (TYPE_7__*,int ,TYPE_9__*,TYPE_9__*) ;
 int FUNC_5 (int *,TYPE_9__*,int ) ;

void FUNC_6(
  Parse *VAR_5,
  struct SrcList_item *VAR_6,
  WhereClause *VAR_7
){
  Table *VAR_8;
  int VAR_9, VAR_10;
  ExprList *VAR_11;
  Expr *VAR_12;
  Expr *VAR_13;
  if( VAR_6->fg.isTabFunc==0 ) return;
  VAR_8 = VAR_6->pTab;
  FUNC_0( VAR_8!=0 );
  VAR_11 = VAR_6->u1.pFuncArg;
  if( VAR_11==0 ) return;
  for(VAR_9=VAR_10=0; VAR_9<VAR_11->nExpr; VAR_9++){
    Expr *VAR_14;
    while( VAR_10<VAR_8->nCol && (VAR_8->aCol[VAR_10].colFlags & VAR_0)==0 ){VAR_10++;}
    if( VAR_10>=VAR_8->nCol ){
      FUNC_1(VAR_5, "too many arguments on %s() - max %d",
                      VAR_8->zName, VAR_9);
      return;
    }
    VAR_12 = FUNC_2(VAR_5->db, VAR_2, 0, 0);
    if( VAR_12==0 ) return;
    VAR_12->iTable = VAR_6->iCursor;
    VAR_12->iColumn = VAR_10++;
    VAR_12->y.pTab = VAR_8;
    VAR_14 = FUNC_4(VAR_5, VAR_4,
        FUNC_3(VAR_5->db, VAR_11->a[VAR_9].pExpr, 0), 0);
    VAR_13 = FUNC_4(VAR_5, VAR_3, VAR_12, VAR_14);
    FUNC_5(VAR_7, VAR_13, VAR_1);
  }
}

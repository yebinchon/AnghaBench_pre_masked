
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int u8 ;
struct sqlite3_index_orderby {int desc; int iColumn; } ;
struct sqlite3_index_constraint_usage {int dummy; } ;
struct sqlite3_index_constraint {int iTermOffset; int op; int iColumn; } ;
struct SrcList_item {scalar_t__ iCursor; TYPE_1__* pTab; } ;
struct TYPE_19__ {int aConstraintUsage; int aOrderBy; int aConstraint; int nOrderBy; int nConstraint; } ;
typedef TYPE_4__ sqlite3_index_info ;
struct TYPE_17__ {int leftColumn; } ;
struct TYPE_20__ {scalar_t__ leftCursor; int eOperator; int wtFlags; TYPE_2__ u; } ;
typedef TYPE_5__ WhereTerm ;
struct TYPE_21__ {int nTerm; TYPE_5__* a; } ;
typedef TYPE_6__ WhereClause ;
struct TYPE_22__ {TYPE_9__* pOrderBy; struct SrcList_item* pSrc; TYPE_6__* pWC; TYPE_8__* pParse; } ;
typedef TYPE_7__ WhereBestIdx ;
struct TYPE_24__ {int nExpr; TYPE_3__* a; } ;
struct TYPE_23__ {int db; } ;
struct TYPE_18__ {int sortOrder; TYPE_10__* pExpr; } ;
struct TYPE_16__ {int zName; } ;
struct TYPE_15__ {scalar_t__ op; scalar_t__ iTable; int iColumn; } ;
typedef TYPE_8__ Parse ;
typedef TYPE_9__ ExprList ;
typedef TYPE_10__ Expr ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (int) ;
 TYPE_4__* FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_8__*,char*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static sqlite3_index_info *FUNC_6(WhereBestIdx *VAR_18){
  Parse *VAR_19 = VAR_18->pParse;
  WhereClause *VAR_20 = VAR_18->pWC;
  struct SrcList_item *VAR_21 = VAR_18->pSrc;
  ExprList *VAR_22 = VAR_18->pOrderBy;
  int VAR_23, VAR_24;
  int VAR_25;
  struct sqlite3_index_constraint *VAR_26;
  struct sqlite3_index_orderby *VAR_27;
  struct sqlite3_index_constraint_usage *VAR_28;
  WhereTerm *VAR_29;
  int VAR_30;
  sqlite3_index_info *VAR_31;

  FUNC_1(("Recomputing index info for %s...\n", VAR_21->pTab->zName));



  for(VAR_23=VAR_25=0, VAR_29=VAR_20->a; VAR_23<VAR_20->nTerm; VAR_23++, VAR_29++){
    if( VAR_29->leftCursor != VAR_21->iCursor ) continue;
    FUNC_2( FUNC_0(VAR_29->eOperator & ~VAR_10) );
    FUNC_5( VAR_29->eOperator & VAR_13 );
    FUNC_5( VAR_29->eOperator & VAR_14 );
    if( VAR_29->eOperator & (VAR_14) ) continue;
    if( VAR_29->wtFlags & VAR_6 ) continue;
    VAR_25++;
  }





  VAR_30 = 0;
  if( VAR_22 ){
    int VAR_32 = VAR_22->nExpr;
    for(VAR_23=0; VAR_23<VAR_32; VAR_23++){
      Expr *VAR_33 = VAR_22->a[VAR_23].pExpr;
      if( VAR_33->op!=VAR_7 || VAR_33->iTable!=VAR_21->iCursor ) break;
    }
    if( VAR_23==VAR_32){
      VAR_30 = VAR_32;
    }
  }



  VAR_31 = FUNC_3(VAR_19->db, sizeof(*VAR_31)
                           + (sizeof(*VAR_26) + sizeof(*VAR_28))*VAR_25
                           + sizeof(*VAR_27)*VAR_30 );
  if( VAR_31==0 ){
    FUNC_4(VAR_19, "out of memory");

    return 0;
  }






  VAR_26 = (struct sqlite3_index_constraint*)&VAR_31[1];
  VAR_27 = (struct sqlite3_index_orderby*)&VAR_26[VAR_25];
  VAR_28 = (struct sqlite3_index_constraint_usage*)&VAR_27[VAR_30];
  *(int*)&VAR_31->nConstraint = VAR_25;
  *(int*)&VAR_31->nOrderBy = VAR_30;
  *(struct sqlite3_index_constraint**)&VAR_31->aConstraint = VAR_26;
  *(struct sqlite3_index_orderby**)&VAR_31->aOrderBy = VAR_27;
  *(struct sqlite3_index_constraint_usage**)&VAR_31->aConstraintUsage =
                                                                   VAR_28;

  for(VAR_23=VAR_24=0, VAR_29=VAR_20->a; VAR_23<VAR_20->nTerm; VAR_23++, VAR_29++){
    u8 VAR_34;
    if( VAR_29->leftCursor != VAR_21->iCursor ) continue;
    FUNC_2( FUNC_0(VAR_29->eOperator & ~VAR_10) );
    FUNC_5( VAR_29->eOperator & VAR_13 );
    FUNC_5( VAR_29->eOperator & VAR_14 );
    if( VAR_29->eOperator & (VAR_14) ) continue;
    if( VAR_29->wtFlags & VAR_6 ) continue;
    VAR_26[VAR_24].iColumn = VAR_29->u.leftColumn;
    VAR_26[VAR_24].iTermOffset = VAR_23;
    VAR_34 = (u8)VAR_29->eOperator & VAR_8;
    if( VAR_34==VAR_13 ) VAR_34 = VAR_9;
    VAR_26[VAR_24].op = VAR_34;



    FUNC_2( VAR_9==VAR_0 );
    FUNC_2( VAR_16==VAR_4 );
    FUNC_2( VAR_15==VAR_3 );
    FUNC_2( VAR_12==VAR_2 );
    FUNC_2( VAR_11==VAR_1 );
    FUNC_2( VAR_17==VAR_5 );
    FUNC_2( VAR_29->eOperator & (VAR_13|VAR_9|VAR_16|VAR_15|VAR_12|VAR_11|VAR_17) );
    VAR_24++;
  }
  for(VAR_23=0; VAR_23<VAR_30; VAR_23++){
    Expr *VAR_35 = VAR_22->a[VAR_23].pExpr;
    VAR_27[VAR_23].iColumn = VAR_35->iColumn;
    VAR_27[VAR_23].desc = VAR_22->a[VAR_23].sortOrder;
  }

  return VAR_31;
}

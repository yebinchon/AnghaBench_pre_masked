
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


typedef int u8 ;
typedef int u16 ;
struct sqlite3_index_orderby {int desc; int iColumn; } ;
struct sqlite3_index_constraint_usage {int dummy; } ;
struct sqlite3_index_constraint {int iColumn; int iTermOffset; int op; } ;
struct SrcList_item {scalar_t__ iCursor; } ;
struct TYPE_19__ {int aConstraintUsage; int aOrderBy; int aConstraint; int nOrderBy; int nConstraint; } ;
typedef TYPE_4__ sqlite3_index_info ;
struct TYPE_18__ {int leftColumn; } ;
struct TYPE_20__ {scalar_t__ leftCursor; int prereqRight; int eOperator; int wtFlags; int eMatchOp; TYPE_1__* pExpr; TYPE_3__ u; } ;
typedef TYPE_5__ WhereTerm ;
struct TYPE_21__ {int nTerm; TYPE_5__* a; } ;
typedef TYPE_6__ WhereClause ;
struct TYPE_24__ {scalar_t__ op; scalar_t__ iTable; int iColumn; } ;
struct TYPE_23__ {int nExpr; TYPE_2__* a; } ;
struct TYPE_22__ {int db; } ;
struct TYPE_17__ {int sortOrder; TYPE_9__* pExpr; } ;
struct TYPE_16__ {int pRight; } ;
typedef TYPE_7__ Parse ;
typedef TYPE_8__ ExprList ;
typedef TYPE_9__ Expr ;
typedef int Bitmask ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
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
 int VAR_18 ;
 int FUNC_1 (int) ;
 TYPE_4__* FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_7__*,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static sqlite3_index_info *FUNC_6(
  Parse *VAR_19,
  WhereClause *VAR_20,
  Bitmask VAR_21,
  struct SrcList_item *VAR_22,
  ExprList *VAR_23,
  u16 *VAR_24
){
  int VAR_25, VAR_26;
  int VAR_27;
  struct sqlite3_index_constraint *VAR_28;
  struct sqlite3_index_orderby *VAR_29;
  struct sqlite3_index_constraint_usage *VAR_30;
  WhereTerm *VAR_31;
  int VAR_32;
  sqlite3_index_info *VAR_33;
  u16 VAR_34 = 0;



  for(VAR_25=VAR_27=0, VAR_31=VAR_20->a; VAR_25<VAR_20->nTerm; VAR_25++, VAR_31++){
    if( VAR_31->leftCursor != VAR_22->iCursor ) continue;
    if( VAR_31->prereqRight & VAR_21 ) continue;
    FUNC_1( FUNC_0(VAR_31->eOperator & ~VAR_10) );
    FUNC_5( VAR_31->eOperator & VAR_13 );
    FUNC_5( VAR_31->eOperator & VAR_15 );
    FUNC_5( VAR_31->eOperator & VAR_14 );
    FUNC_5( VAR_31->eOperator & VAR_8 );
    if( (VAR_31->eOperator & ~(VAR_15|VAR_10|VAR_14))==0 ) continue;
    if( VAR_31->wtFlags & VAR_6 ) continue;
    FUNC_1( VAR_31->u.leftColumn>=(-1) );
    VAR_27++;
  }





  VAR_32 = 0;
  if( VAR_23 ){
    int VAR_35 = VAR_23->nExpr;
    for(VAR_25=0; VAR_25<VAR_35; VAR_25++){
      Expr *VAR_36 = VAR_23->a[VAR_25].pExpr;
      if( VAR_36->op!=VAR_7 || VAR_36->iTable!=VAR_22->iCursor ) break;
    }
    if( VAR_25==VAR_35){
      VAR_32 = VAR_35;
    }
  }



  VAR_33 = FUNC_2(VAR_19->db, sizeof(*VAR_33)
                           + (sizeof(*VAR_28) + sizeof(*VAR_30))*VAR_27
                           + sizeof(*VAR_29)*VAR_32 );
  if( VAR_33==0 ){
    FUNC_3(VAR_19, "out of memory");
    return 0;
  }






  VAR_28 = (struct sqlite3_index_constraint*)&VAR_33[1];
  VAR_29 = (struct sqlite3_index_orderby*)&VAR_28[VAR_27];
  VAR_30 = (struct sqlite3_index_constraint_usage*)&VAR_29[VAR_32];
  *(int*)&VAR_33->nConstraint = VAR_27;
  *(int*)&VAR_33->nOrderBy = VAR_32;
  *(struct sqlite3_index_constraint**)&VAR_33->aConstraint = VAR_28;
  *(struct sqlite3_index_orderby**)&VAR_33->aOrderBy = VAR_29;
  *(struct sqlite3_index_constraint_usage**)&VAR_33->aConstraintUsage =
                                                                   VAR_30;

  for(VAR_25=VAR_26=0, VAR_31=VAR_20->a; VAR_25<VAR_20->nTerm; VAR_25++, VAR_31++){
    u8 VAR_37;
    if( VAR_31->leftCursor != VAR_22->iCursor ) continue;
    if( VAR_31->prereqRight & VAR_21 ) continue;
    FUNC_1( FUNC_0(VAR_31->eOperator & ~VAR_10) );
    FUNC_5( VAR_31->eOperator & VAR_13 );
    FUNC_5( VAR_31->eOperator & VAR_14 );
    FUNC_5( VAR_31->eOperator & VAR_15 );
    FUNC_5( VAR_31->eOperator & VAR_8 );
    if( (VAR_31->eOperator & ~(VAR_15|VAR_10|VAR_14))==0 ) continue;
    if( VAR_31->wtFlags & VAR_6 ) continue;
    FUNC_1( VAR_31->u.leftColumn>=(-1) );
    VAR_28[VAR_26].iColumn = VAR_31->u.leftColumn;
    VAR_28[VAR_26].iTermOffset = VAR_25;
    VAR_37 = (u8)VAR_31->eOperator & VAR_8;
    if( VAR_37==VAR_13 ) VAR_37 = VAR_9;
    if( VAR_37==VAR_18 ){
      VAR_37 = VAR_31->eMatchOp;
    }
    VAR_28[VAR_26].op = VAR_37;



    FUNC_1( VAR_9==VAR_0 );
    FUNC_1( VAR_17==VAR_4 );
    FUNC_1( VAR_16==VAR_3 );
    FUNC_1( VAR_12==VAR_2 );
    FUNC_1( VAR_11==VAR_1 );
    FUNC_1( VAR_18==VAR_5 );
    FUNC_1( VAR_31->eOperator & (VAR_13|VAR_9|VAR_17|VAR_16|VAR_12|VAR_11|VAR_18) );

    if( VAR_37 & (VAR_17|VAR_16|VAR_12|VAR_11)
     && FUNC_4(VAR_31->pExpr->pRight)
    ){
      if( VAR_25<16 ) VAR_34 |= (1 << VAR_25);
      if( VAR_37==VAR_17 ) VAR_28[VAR_26].op = VAR_16;
      if( VAR_37==VAR_12 ) VAR_28[VAR_26].op = VAR_11;
    }

    VAR_26++;
  }
  for(VAR_25=0; VAR_25<VAR_32; VAR_25++){
    Expr *VAR_38 = VAR_23->a[VAR_25].pExpr;
    VAR_29[VAR_25].iColumn = VAR_38->iColumn;
    VAR_29[VAR_25].desc = VAR_23->a[VAR_25].sortOrder;
  }

  *VAR_24 = VAR_34;
  return VAR_33;
}

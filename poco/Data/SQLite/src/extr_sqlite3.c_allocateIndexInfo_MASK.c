
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_16__ ;


typedef int u8 ;
typedef int u16 ;
struct sqlite3_index_orderby {int desc; int iColumn; } ;
struct sqlite3_index_constraint_usage {int dummy; } ;
struct sqlite3_index_constraint {int iColumn; int iTermOffset; int op; } ;
struct TYPE_18__ {int jointype; } ;
struct SrcList_item {scalar_t__ iCursor; TYPE_1__ fg; } ;
struct HiddenIndexInfo {TYPE_7__* pParse; TYPE_6__* pWC; } ;
struct TYPE_21__ {int aConstraintUsage; int aOrderBy; int aConstraint; int nOrderBy; int nConstraint; } ;
typedef TYPE_4__ sqlite3_index_info ;
struct TYPE_19__ {int leftColumn; } ;
struct TYPE_22__ {scalar_t__ leftCursor; int prereqRight; int eOperator; int wtFlags; int eMatchOp; TYPE_16__* pExpr; TYPE_2__ u; } ;
typedef TYPE_5__ WhereTerm ;
struct TYPE_23__ {int nTerm; TYPE_5__* a; } ;
typedef TYPE_6__ WhereClause ;
struct TYPE_26__ {scalar_t__ op; scalar_t__ iTable; int iColumn; } ;
struct TYPE_25__ {int nExpr; TYPE_3__* a; } ;
struct TYPE_24__ {int db; } ;
struct TYPE_20__ {int sortOrder; TYPE_9__* pExpr; } ;
struct TYPE_17__ {int pRight; } ;
typedef TYPE_7__ Parse ;
typedef TYPE_8__ ExprList ;
typedef TYPE_9__ Expr ;
typedef int Bitmask ;


 int VAR_0 ;
 int FUNC_0 (TYPE_16__*,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (int) ;
 TYPE_4__* FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_7__*,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static sqlite3_index_info *FUNC_7(
  Parse *VAR_22,
  WhereClause *VAR_23,
  Bitmask VAR_24,
  struct SrcList_item *VAR_25,
  ExprList *VAR_26,
  u16 *VAR_27
){
  int VAR_28, VAR_29;
  int VAR_30;
  struct sqlite3_index_constraint *VAR_31;
  struct sqlite3_index_orderby *VAR_32;
  struct sqlite3_index_constraint_usage *VAR_33;
  struct HiddenIndexInfo *VAR_34;
  WhereTerm *VAR_35;
  int VAR_36;
  sqlite3_index_info *VAR_37;
  u16 VAR_38 = 0;



  for(VAR_28=VAR_30=0, VAR_35=VAR_23->a; VAR_28<VAR_23->nTerm; VAR_28++, VAR_35++){
    if( VAR_35->leftCursor != VAR_25->iCursor ) continue;
    if( VAR_35->prereqRight & VAR_24 ) continue;
    FUNC_2( FUNC_1(VAR_35->eOperator & ~VAR_14) );
    FUNC_6( VAR_35->eOperator & VAR_17 );
    FUNC_6( VAR_35->eOperator & VAR_19 );
    FUNC_6( VAR_35->eOperator & VAR_18 );
    FUNC_6( VAR_35->eOperator & VAR_11 );
    if( (VAR_35->eOperator & ~(VAR_14))==0 ) continue;
    if( VAR_35->wtFlags & VAR_9 ) continue;
    FUNC_2( VAR_35->u.leftColumn>=(-1) );
    VAR_30++;
  }





  VAR_36 = 0;
  if( VAR_26 ){
    int VAR_39 = VAR_26->nExpr;
    for(VAR_28=0; VAR_28<VAR_39; VAR_28++){
      Expr *VAR_40 = VAR_26->a[VAR_28].pExpr;
      if( VAR_40->op!=VAR_10 || VAR_40->iTable!=VAR_25->iCursor ) break;
    }
    if( VAR_28==VAR_39){
      VAR_36 = VAR_39;
    }
  }



  VAR_37 = FUNC_3(VAR_22->db, sizeof(*VAR_37)
                           + (sizeof(*VAR_31) + sizeof(*VAR_33))*VAR_30
                           + sizeof(*VAR_32)*VAR_36 + sizeof(*VAR_34) );
  if( VAR_37==0 ){
    FUNC_4(VAR_22, "out of memory");
    return 0;
  }






  VAR_34 = (struct HiddenIndexInfo*)&VAR_37[1];
  VAR_31 = (struct sqlite3_index_constraint*)&VAR_34[1];
  VAR_32 = (struct sqlite3_index_orderby*)&VAR_31[VAR_30];
  VAR_33 = (struct sqlite3_index_constraint_usage*)&VAR_32[VAR_36];
  *(int*)&VAR_37->nConstraint = VAR_30;
  *(int*)&VAR_37->nOrderBy = VAR_36;
  *(struct sqlite3_index_constraint**)&VAR_37->aConstraint = VAR_31;
  *(struct sqlite3_index_orderby**)&VAR_37->aOrderBy = VAR_32;
  *(struct sqlite3_index_constraint_usage**)&VAR_37->aConstraintUsage =
                                                                   VAR_33;

  VAR_34->pWC = VAR_23;
  VAR_34->pParse = VAR_22;
  for(VAR_28=VAR_29=0, VAR_35=VAR_23->a; VAR_28<VAR_23->nTerm; VAR_28++, VAR_35++){
    u16 VAR_41;
    if( VAR_35->leftCursor != VAR_25->iCursor ) continue;
    if( VAR_35->prereqRight & VAR_24 ) continue;
    FUNC_2( FUNC_1(VAR_35->eOperator & ~VAR_14) );
    FUNC_6( VAR_35->eOperator & VAR_17 );
    FUNC_6( VAR_35->eOperator & VAR_18 );
    FUNC_6( VAR_35->eOperator & VAR_19 );
    FUNC_6( VAR_35->eOperator & VAR_11 );
    if( (VAR_35->eOperator & ~(VAR_14))==0 ) continue;
    if( VAR_35->wtFlags & VAR_9 ) continue;
    if( (VAR_25->fg.jointype & VAR_1)!=0
     && !FUNC_0(VAR_35->pExpr, VAR_0)
     && (VAR_35->eOperator & (VAR_18|VAR_19))
    ){






      FUNC_6( VAR_35->eOperator & VAR_19 );
      FUNC_6( VAR_35->eOperator & VAR_18 );
      continue;
    }
    FUNC_2( VAR_35->u.leftColumn>=(-1) );
    VAR_31[VAR_29].iColumn = VAR_35->u.leftColumn;
    VAR_31[VAR_29].iTermOffset = VAR_28;
    VAR_41 = VAR_35->eOperator & VAR_11;
    if( VAR_41==VAR_17 ) VAR_41 = VAR_13;
    if( VAR_41==VAR_12 ){
      VAR_31[VAR_29].op = VAR_35->eMatchOp;
    }else if( VAR_41 & (VAR_19|VAR_18) ){
      if( VAR_41==VAR_19 ){
        VAR_31[VAR_29].op = VAR_6;
      }else{
        VAR_31[VAR_29].op = VAR_5;
      }
    }else{
      VAR_31[VAR_29].op = (u8)VAR_41;



      FUNC_2( VAR_13==VAR_2 );
      FUNC_2( VAR_21==VAR_8 );
      FUNC_2( VAR_20==VAR_7 );
      FUNC_2( VAR_16==VAR_4 );
      FUNC_2( VAR_15==VAR_3 );
      FUNC_2( VAR_35->eOperator&(VAR_17|VAR_13|VAR_21|VAR_20|VAR_16|VAR_15|VAR_12) );

      if( VAR_41 & (VAR_21|VAR_20|VAR_16|VAR_15)
       && FUNC_5(VAR_35->pExpr->pRight)
      ){
        if( VAR_28<16 ) VAR_38 |= (1 << VAR_28);
        if( VAR_41==VAR_21 ) VAR_31[VAR_29].op = VAR_20;
        if( VAR_41==VAR_16 ) VAR_31[VAR_29].op = VAR_15;
      }
    }

    VAR_29++;
  }
  for(VAR_28=0; VAR_28<VAR_36; VAR_28++){
    Expr *VAR_42 = VAR_26->a[VAR_28].pExpr;
    VAR_32[VAR_28].iColumn = VAR_42->iColumn;
    VAR_32[VAR_28].desc = VAR_26->a[VAR_28].sortOrder;
  }

  *VAR_27 = VAR_38;
  return VAR_37;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_55__ TYPE_9__ ;
typedef struct TYPE_54__ TYPE_8__ ;
typedef struct TYPE_53__ TYPE_7__ ;
typedef struct TYPE_52__ TYPE_6__ ;
typedef struct TYPE_51__ TYPE_5__ ;
typedef struct TYPE_50__ TYPE_4__ ;
typedef struct TYPE_49__ TYPE_3__ ;
typedef struct TYPE_48__ TYPE_2__ ;
typedef struct TYPE_47__ TYPE_1__ ;
typedef struct TYPE_46__ TYPE_17__ ;
typedef struct TYPE_45__ TYPE_16__ ;
typedef struct TYPE_44__ TYPE_15__ ;
typedef struct TYPE_43__ TYPE_14__ ;
typedef struct TYPE_42__ TYPE_13__ ;
typedef struct TYPE_41__ TYPE_12__ ;
typedef struct TYPE_40__ TYPE_11__ ;
typedef struct TYPE_39__ TYPE_10__ ;


typedef int u16 ;
struct InLoop {int iCur; int eEndLoopOp; int addrInTop; } ;
struct TYPE_39__ {int dbOptFlags; int mallocFailed; } ;
typedef TYPE_10__ sqlite3 ;
struct TYPE_40__ {int iField; TYPE_17__* pExpr; } ;
typedef TYPE_11__ WhereTerm ;
struct TYPE_54__ {TYPE_7__* pIndex; } ;
struct TYPE_55__ {TYPE_8__ btree; } ;
struct TYPE_41__ {int wsFlags; int nLTerm; TYPE_11__** aLTerm; TYPE_9__ u; } ;
typedef TYPE_12__ WhereLoop ;
struct TYPE_51__ {int nIn; struct InLoop* aInLoop; } ;
struct TYPE_52__ {TYPE_5__ in; } ;
struct TYPE_42__ {TYPE_6__ u; int addrNxt; TYPE_12__* pWLoop; } ;
typedef TYPE_13__ WhereLevel ;
typedef int Vdbe ;
struct TYPE_53__ {scalar_t__* aSortOrder; } ;
struct TYPE_50__ {TYPE_16__* pList; TYPE_14__* pSelect; } ;
struct TYPE_47__ {scalar_t__ iOrderByCol; } ;
struct TYPE_48__ {TYPE_1__ x; } ;
struct TYPE_49__ {TYPE_17__* pExpr; TYPE_2__ u; } ;
struct TYPE_46__ {scalar_t__ op; int flags; int iTable; struct TYPE_46__* pLeft; TYPE_4__ x; int pRight; } ;
struct TYPE_45__ {int nExpr; TYPE_3__* a; } ;
struct TYPE_44__ {TYPE_10__* db; int * pVdbe; } ;
struct TYPE_43__ {TYPE_16__* pEList; TYPE_16__* pOrderBy; } ;
typedef TYPE_14__ Select ;
typedef TYPE_15__ Parse ;
typedef TYPE_16__ ExprList ;
typedef TYPE_17__ Expr ;


 scalar_t__ FUNC_0 (TYPE_11__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_13__*,TYPE_11__*) ;
 int FUNC_5 (TYPE_10__*,int*) ;
 scalar_t__ FUNC_6 (TYPE_10__*,int) ;
 struct InLoop* FUNC_7 (TYPE_10__*,struct InLoop*,int) ;
 int FUNC_8 (TYPE_15__*,int ,int) ;
 TYPE_17__* FUNC_9 (TYPE_10__*,TYPE_17__*,int ) ;
 TYPE_16__* FUNC_10 (TYPE_15__*,TYPE_16__*,TYPE_17__*) ;
 int FUNC_11 (TYPE_10__*,TYPE_16__*) ;
 int FUNC_12 (TYPE_15__*,TYPE_17__*,int ,int ,int*) ;
 int FUNC_13 (int *,int ,int) ;
 int FUNC_14 (int *,int ,int,int) ;
 int FUNC_15 (int *,int ,int,int,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int) ;

__attribute__((used)) static int FUNC_18(
  Parse *VAR_22,
  WhereTerm *VAR_23,
  WhereLevel *VAR_24,
  int VAR_25,
  int VAR_26,
  int VAR_27
){
  Expr *VAR_28 = VAR_23->pExpr;
  Vdbe *VAR_29 = VAR_22->pVdbe;
  int VAR_30;

  FUNC_3( VAR_24->pWLoop->aLTerm[VAR_25]==VAR_23 );
  FUNC_3( VAR_27>0 );
  if( VAR_28->op==VAR_15 || VAR_28->op==VAR_17 ){
    VAR_30 = FUNC_8(VAR_22, VAR_28->pRight, VAR_27);
  }else if( VAR_28->op==VAR_18 ){
    VAR_30 = VAR_27;
    FUNC_14(VAR_29, VAR_10, 0, VAR_30);

  }else{
    int VAR_31 = VAR_3;
    int VAR_32;
    struct InLoop *VAR_33;
    WhereLoop *VAR_34 = VAR_24->pWLoop;
    int VAR_35;
    int VAR_36 = 0;
    int *VAR_37 = 0;

    if( (VAR_34->wsFlags & VAR_21)==0
      && VAR_34->u.btree.pIndex!=0
      && VAR_34->u.btree.pIndex->aSortOrder[VAR_25]
    ){
      FUNC_17( VAR_25==0 );
      FUNC_17( VAR_26 );
      VAR_26 = !VAR_26;
    }
    FUNC_3( VAR_28->op==VAR_16 );
    VAR_30 = VAR_27;

    for(VAR_35=0; VAR_35<VAR_25; VAR_35++){
      if( VAR_34->aLTerm[VAR_35] && VAR_34->aLTerm[VAR_35]->pExpr==VAR_28 ){
        FUNC_4(VAR_24, VAR_23);
        return VAR_27;
      }
    }
    for(VAR_35=VAR_25;VAR_35<VAR_34->nLTerm; VAR_35++){
      if( FUNC_0(VAR_34->aLTerm[VAR_35]) && VAR_34->aLTerm[VAR_35]->pExpr==VAR_28 ) VAR_36++;
    }

    if( (VAR_28->flags & VAR_0)==0 || VAR_28->x.pSelect->pEList->nExpr==1 ){
      VAR_31 = FUNC_12(VAR_22, VAR_28, VAR_2, 0, 0);
    }else{
      Select *VAR_38 = VAR_28->x.pSelect;
      sqlite3 *VAR_39 = VAR_22->db;
      u16 VAR_40 = VAR_39->dbOptFlags;
      ExprList *VAR_41 = VAR_38->pEList;
      ExprList *VAR_42 = VAR_28->pLeft->x.pList;
      ExprList *VAR_43 = 0;
      ExprList *VAR_44 = 0;

      for(VAR_35=VAR_25;VAR_35<VAR_34->nLTerm; VAR_35++){
        if( VAR_34->aLTerm[VAR_35]->pExpr==VAR_28 ){
          int VAR_45 = VAR_34->aLTerm[VAR_35]->iField - 1;
          Expr *VAR_46 = FUNC_9(VAR_39, VAR_41->a[VAR_45].pExpr, 0);
          Expr *VAR_47 = FUNC_9(VAR_39, VAR_42->a[VAR_45].pExpr, 0);

          VAR_43 = FUNC_10(VAR_22, VAR_43, VAR_46);
          VAR_44 = FUNC_10(VAR_22, VAR_44, VAR_47);
        }
      }
      if( !VAR_39->mallocFailed ){
        Expr *VAR_48 = VAR_28->pLeft;

        if( VAR_38->pOrderBy ){







          ExprList *VAR_49 = VAR_38->pOrderBy;
          for(VAR_35=0; VAR_35<VAR_49->nExpr; VAR_35++){
            VAR_49->a[VAR_35].u.x.iOrderByCol = 0;
          }
        }




        if( VAR_44->nExpr==1 ){
          VAR_28->pLeft = VAR_44->a[0].pExpr;
        }else{
          VAR_48->x.pList = VAR_44;
          VAR_37 = (int*)FUNC_6(VAR_22->db, sizeof(int) * VAR_36);
          FUNC_17( VAR_37==0 );
        }
        VAR_38->pEList = VAR_43;
        VAR_39->dbOptFlags |= VAR_14;
        VAR_31 = FUNC_12(VAR_22, VAR_28, VAR_2, 0, VAR_37);
        VAR_39->dbOptFlags = VAR_40;
        FUNC_17( VAR_37!=0 && VAR_37[0]!=0 );
        VAR_38->pEList = VAR_41;
        VAR_48->x.pList = VAR_42;
        VAR_28->pLeft = VAR_48;
      }
      FUNC_11(VAR_22->db, VAR_44);
      FUNC_11(VAR_22->db, VAR_43);
    }

    if( VAR_31==VAR_1 ){
      FUNC_17( VAR_26 );
      VAR_26 = !VAR_26;
    }
    VAR_32 = VAR_28->iTable;
    FUNC_14(VAR_29, VAR_26 ? VAR_7 : VAR_12, VAR_32, 0);
    FUNC_2(VAR_29, VAR_26);
    FUNC_2(VAR_29, !VAR_26);
    FUNC_3( (VAR_34->wsFlags & VAR_20)==0 );

    VAR_34->wsFlags |= VAR_19;
    if( VAR_24->u.in.nIn==0 ){
      VAR_24->addrNxt = FUNC_16(VAR_29);
    }

    VAR_35 = VAR_24->u.in.nIn;
    VAR_24->u.in.nIn += VAR_36;
    VAR_24->u.in.aInLoop =
       FUNC_7(VAR_22->db, VAR_24->u.in.aInLoop,
                              sizeof(VAR_24->u.in.aInLoop[0])*VAR_24->u.in.nIn);
    VAR_33 = VAR_24->u.in.aInLoop;
    if( VAR_33 ){
      int VAR_50 = 0;
      VAR_33 += VAR_35;
      for(VAR_35=VAR_25;VAR_35<VAR_34->nLTerm; VAR_35++){
        if( VAR_34->aLTerm[VAR_35]->pExpr==VAR_28 ){
          int VAR_51 = VAR_30 + VAR_35 - VAR_25;
          if( VAR_31==VAR_4 ){
            FUNC_17( VAR_36>1 );
            VAR_33->addrInTop = FUNC_14(VAR_29, VAR_13, VAR_32, VAR_51);
          }else{
            int VAR_52 = VAR_37 ? VAR_37[VAR_50++] : 0;
            VAR_33->addrInTop = FUNC_15(VAR_29,VAR_5,VAR_32, VAR_52, VAR_51);
          }
          FUNC_13(VAR_29, VAR_6, VAR_51); FUNC_1(VAR_29);
          if( VAR_35==VAR_25 ){
            VAR_33->iCur = VAR_32;
            VAR_33->eEndLoopOp = VAR_26 ? VAR_11 : VAR_8;
          }else{
            VAR_33->eEndLoopOp = VAR_9;
          }
          VAR_33++;
        }
      }
    }else{
      VAR_24->u.in.nIn = 0;
    }
    FUNC_5(VAR_22->db, VAR_37);

  }
  FUNC_4(VAR_24, VAR_23);
  return VAR_30;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_54__ TYPE_9__ ;
typedef struct TYPE_53__ TYPE_8__ ;
typedef struct TYPE_52__ TYPE_7__ ;
typedef struct TYPE_51__ TYPE_6__ ;
typedef struct TYPE_50__ TYPE_5__ ;
typedef struct TYPE_49__ TYPE_4__ ;
typedef struct TYPE_48__ TYPE_3__ ;
typedef struct TYPE_47__ TYPE_34__ ;
typedef struct TYPE_46__ TYPE_30__ ;
typedef struct TYPE_45__ TYPE_2__ ;
typedef struct TYPE_44__ TYPE_1__ ;
typedef struct TYPE_43__ TYPE_18__ ;
typedef struct TYPE_42__ TYPE_17__ ;
typedef struct TYPE_41__ TYPE_16__ ;
typedef struct TYPE_40__ TYPE_15__ ;
typedef struct TYPE_39__ TYPE_14__ ;
typedef struct TYPE_38__ TYPE_13__ ;
typedef struct TYPE_37__ TYPE_12__ ;
typedef struct TYPE_36__ TYPE_11__ ;
typedef struct TYPE_35__ TYPE_10__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_35__ {TYPE_18__* pDfltColl; } ;
typedef TYPE_10__ sqlite3 ;
typedef int i8 ;
struct TYPE_36__ {int eOperator; TYPE_17__* pExpr; } ;
typedef TYPE_11__ WhereTerm ;
struct TYPE_37__ {TYPE_13__** aLoop; } ;
typedef TYPE_12__ WherePath ;
struct TYPE_52__ {int nIdxCol; int nEq; TYPE_15__* pIndex; } ;
struct TYPE_44__ {scalar_t__ isOrdered; } ;
struct TYPE_53__ {TYPE_7__ btree; TYPE_1__ vtab; } ;
struct TYPE_38__ {int maskSelf; int wsFlags; size_t iTab; int nLTerm; int nSkip; TYPE_8__ u; TYPE_11__** aLTerm; } ;
typedef TYPE_13__ WhereLoop ;
struct TYPE_39__ {int sMaskSet; TYPE_30__* pParse; int sWC; TYPE_3__* pTabList; } ;
typedef TYPE_14__ WhereInfo ;
struct TYPE_54__ {int sortOrder; TYPE_17__* pExpr; } ;
struct TYPE_51__ {TYPE_5__* a; } ;
struct TYPE_50__ {int pExpr; } ;
struct TYPE_49__ {scalar_t__ notNull; } ;
struct TYPE_48__ {TYPE_2__* a; } ;
struct TYPE_47__ {int iPKey; TYPE_4__* aCol; } ;
struct TYPE_46__ {TYPE_10__* db; } ;
struct TYPE_45__ {int iCursor; } ;
struct TYPE_43__ {char* zName; } ;
struct TYPE_42__ {scalar_t__ op; int iTable; int iColumn; } ;
struct TYPE_41__ {int nExpr; TYPE_9__* a; } ;
struct TYPE_40__ {int nKeyCol; int nColumn; int* aiColumn; int* aSortOrder; char const** azColl; TYPE_6__* aColExpr; TYPE_34__* pTable; scalar_t__ bUnordered; } ;
typedef TYPE_15__ Index ;
typedef TYPE_16__ ExprList ;
typedef TYPE_17__ Expr ;
typedef TYPE_18__ CollSeq ;
typedef int Bitmask ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_34__*) ;
 int FUNC_2 (TYPE_15__*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_10__*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
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
 int FUNC_5 (int) ;
 TYPE_18__* FUNC_6 (TYPE_30__*,TYPE_17__*) ;
 scalar_t__ FUNC_7 (TYPE_17__*,int ,int) ;
 int FUNC_8 (TYPE_17__*) ;
 TYPE_17__* FUNC_9 (TYPE_17__*) ;
 scalar_t__ FUNC_10 (char const*,char const*) ;
 int FUNC_11 (int *,TYPE_17__*) ;
 TYPE_11__* FUNC_12 (int *,int,int,int,int,int ) ;
 int FUNC_13 (int) ;

__attribute__((used)) static i8 FUNC_14(
  WhereInfo *VAR_15,
  ExprList *VAR_16,
  WherePath *VAR_17,
  u16 VAR_18,
  u16 VAR_19,
  WhereLoop *VAR_20,
  Bitmask *VAR_21
){
  u8 VAR_22;
  u8 VAR_23;
  u8 VAR_24;
  u8 VAR_25;
  u8 VAR_26;
  u8 VAR_27;
  u16 VAR_28;
  u16 VAR_29;
  u16 VAR_30;
  u16 VAR_31;
  int VAR_32;
  int VAR_33, VAR_34;
  int VAR_35;
  int VAR_36;
  WhereLoop *VAR_37 = 0;
  WhereTerm *VAR_38;
  Expr *VAR_39;
  CollSeq *VAR_40;
  Index *VAR_41;
  sqlite3 *VAR_42 = VAR_15->pParse->db;
  Bitmask VAR_43 = 0;
  Bitmask VAR_44;
  Bitmask VAR_45;
  Bitmask VAR_46;
  FUNC_5( VAR_16!=0 );
  if( VAR_19 && FUNC_4(VAR_42, VAR_1) ) return 0;

  VAR_31 = VAR_16->nExpr;
  FUNC_13( VAR_31==VAR_0-1 );
  if( VAR_31>VAR_0-1 ) return 0;
  VAR_25 = 1;
  VAR_44 = FUNC_3(VAR_31)-1;
  VAR_45 = 0;
  VAR_46 = 0;
  VAR_28 = VAR_10 | VAR_12 | VAR_13;
  if( VAR_18 & VAR_8 ) VAR_28 |= VAR_11;
  for(VAR_32=0; VAR_25 && VAR_43<VAR_44 && VAR_32<=VAR_19; VAR_32++){
    if( VAR_32>0 ) VAR_46 |= VAR_37->maskSelf;
    if( VAR_32<VAR_19 ){
      VAR_37 = VAR_17->aLoop[VAR_32];
      if( VAR_18 & VAR_8 ) continue;
    }else{
      VAR_37 = VAR_20;
    }
    if( VAR_37->wsFlags & VAR_9 ){
      if( VAR_37->u.vtab.isOrdered ) VAR_43 = VAR_44;
      break;
    }else{
      VAR_37->u.btree.nIdxCol = 0;
    }
    VAR_35 = VAR_15->pTabList->a[VAR_37->iTab].iCursor;






    for(VAR_33=0; VAR_33<VAR_31; VAR_33++){
      if( FUNC_3(VAR_33) & VAR_43 ) continue;
      VAR_39 = FUNC_9(VAR_16->a[VAR_33].pExpr);
      if( VAR_39->op!=VAR_2 ) continue;
      if( VAR_39->iTable!=VAR_35 ) continue;
      VAR_38 = FUNC_12(&VAR_15->sWC, VAR_35, VAR_39->iColumn,
                       ~VAR_46, VAR_28, 0);
      if( VAR_38==0 ) continue;
      if( VAR_38->eOperator==VAR_11 ){



        FUNC_5( VAR_18 & VAR_8 );
        for(VAR_34=0; VAR_34<VAR_37->nLTerm && VAR_38!=VAR_37->aLTerm[VAR_34]; VAR_34++){}
        if( VAR_34>=VAR_37->nLTerm ) continue;
      }
      if( (VAR_38->eOperator&(VAR_10|VAR_12))!=0 && VAR_39->iColumn>=0 ){
        const char *VAR_47, *VAR_48;
        VAR_40 = FUNC_6(VAR_15->pParse, VAR_16->a[VAR_33].pExpr);
        if( !VAR_40 ) VAR_40 = VAR_42->pDfltColl;
        VAR_47 = VAR_40->zName;
        VAR_40 = FUNC_6(VAR_15->pParse, VAR_38->pExpr);
        if( !VAR_40 ) VAR_40 = VAR_42->pDfltColl;
        VAR_48 = VAR_40->zName;
        if( FUNC_10(VAR_47, VAR_48)!=0 ) continue;
        FUNC_13( VAR_38->pExpr->op==VAR_3 );
      }
      VAR_43 |= FUNC_3(VAR_33);
    }

    if( (VAR_37->wsFlags & VAR_7)==0 ){
      if( VAR_37->wsFlags & VAR_6 ){
        VAR_41 = 0;
        VAR_29 = 0;
        VAR_30 = 1;
      }else if( (VAR_41 = VAR_37->u.btree.pIndex)==0 || VAR_41->bUnordered ){
        return 0;
      }else{
        VAR_29 = VAR_41->nKeyCol;
        VAR_30 = VAR_41->nColumn;
        FUNC_5( VAR_30==VAR_29+1 || !FUNC_1(VAR_41->pTable) );
        FUNC_5( VAR_41->aiColumn[VAR_30-1]==VAR_14
                          || !FUNC_1(VAR_41->pTable));
        VAR_25 = FUNC_2(VAR_41);
      }




      VAR_23 = VAR_22 = 0;
      VAR_26 = 0;
      for(VAR_34=0; VAR_34<VAR_30; VAR_34++){
        u8 VAR_49 = 1;

        FUNC_5( VAR_34>=VAR_37->u.btree.nEq
            || (VAR_37->aLTerm[VAR_34]==0)==(VAR_34<VAR_37->nSkip)
        );
        if( VAR_34<VAR_37->u.btree.nEq && VAR_34>=VAR_37->nSkip ){
          u16 VAR_50 = VAR_37->aLTerm[VAR_34]->eOperator;
          if( (VAR_50 & VAR_28)!=0 ){
            if( VAR_50 & VAR_13 ){
              FUNC_13( VAR_25 );
              VAR_25 = 0;
            }
            continue;
          }else if( FUNC_0(VAR_50 & VAR_11) ){




            Expr *VAR_51 = VAR_37->aLTerm[VAR_34]->pExpr;
            for(VAR_33=VAR_34+1; VAR_33<VAR_37->u.btree.nEq; VAR_33++){
              if( VAR_37->aLTerm[VAR_33]->pExpr==VAR_51 ){
                FUNC_5( (VAR_37->aLTerm[VAR_33]->eOperator & VAR_11) );
                VAR_49 = 0;
                break;
              }
            }
          }
        }




        if( VAR_41 ){
          VAR_36 = VAR_41->aiColumn[VAR_34];
          VAR_24 = VAR_41->aSortOrder[VAR_34];
          if( VAR_36==VAR_41->pTable->iPKey ) VAR_36 = -1;
        }else{
          VAR_36 = VAR_14;
          VAR_24 = 0;
        }




        if( VAR_25
         && VAR_36>=0
         && VAR_34>=VAR_37->u.btree.nEq
         && VAR_41->pTable->aCol[VAR_36].notNull==0
        ){
          VAR_25 = 0;
        }




        VAR_27 = 0;
        for(VAR_33=0; VAR_49 && VAR_33<VAR_31; VAR_33++){
          if( FUNC_3(VAR_33) & VAR_43 ) continue;
          VAR_39 = FUNC_9(VAR_16->a[VAR_33].pExpr);
          FUNC_13( VAR_18 & VAR_5 );
          FUNC_13( VAR_18 & VAR_4 );
          if( (VAR_18 & (VAR_5|VAR_4))==0 ) VAR_49 = 0;
          if( VAR_36>=(-1) ){
            if( VAR_39->op!=VAR_2 ) continue;
            if( VAR_39->iTable!=VAR_35 ) continue;
            if( VAR_39->iColumn!=VAR_36 ) continue;
          }else{
            if( FUNC_7(VAR_39,VAR_41->aColExpr->a[VAR_34].pExpr,VAR_35) ){
              continue;
            }
          }
          if( VAR_36>=0 ){
            VAR_40 = FUNC_6(VAR_15->pParse, VAR_16->a[VAR_33].pExpr);
            if( !VAR_40 ) VAR_40 = VAR_42->pDfltColl;
            if( FUNC_10(VAR_40->zName, VAR_41->azColl[VAR_34])!=0 ) continue;
          }
          VAR_37->u.btree.nIdxCol = VAR_34+1;
          VAR_27 = 1;
          break;
        }
        if( VAR_27 && (VAR_18 & VAR_5)==0 ){


          if( VAR_22 ){
            if( (VAR_23 ^ VAR_24)!=VAR_16->a[VAR_33].sortOrder ) VAR_27 = 0;
          }else{
            VAR_23 = VAR_24 ^ VAR_16->a[VAR_33].sortOrder;
            if( VAR_23 ) *VAR_21 |= FUNC_3(VAR_32);
            VAR_22 = 1;
          }
        }
        if( VAR_27 ){
          if( VAR_36==VAR_14 ){
            FUNC_13( VAR_26==0 );
            VAR_26 = 1;
          }
          VAR_43 |= FUNC_3(VAR_33);
        }else{

          if( VAR_34==0 || VAR_34<VAR_29 ){
            FUNC_13( VAR_25!=0 );
            VAR_25 = 0;
          }
          break;
        }
      }
      if( VAR_26 ){
        FUNC_13( VAR_25==0 );
        VAR_25 = 1;
      }
    }


    if( VAR_25 ){
      VAR_45 |= VAR_37->maskSelf;
      for(VAR_33=0; VAR_33<VAR_31; VAR_33++){
        Expr *VAR_52;
        Bitmask VAR_53;
        if( FUNC_3(VAR_33) & VAR_43 ) continue;
        VAR_52 = VAR_16->a[VAR_33].pExpr;
        VAR_53 = FUNC_11(&VAR_15->sMaskSet,VAR_52);
        if( VAR_53==0 && !FUNC_8(VAR_52) ) continue;
        if( (VAR_53&~VAR_45)==0 ){
          VAR_43 |= FUNC_3(VAR_33);
        }
      }
    }
  }
  if( VAR_43==VAR_44 ) return (i8)VAR_31;
  if( !VAR_25 ){
    for(VAR_33=VAR_31-1; VAR_33>0; VAR_33--){
      Bitmask VAR_54 = FUNC_3(VAR_33) - 1;
      if( (VAR_43&VAR_54)==VAR_54 ) return VAR_33;
    }
    return 0;
  }
  return -1;
}

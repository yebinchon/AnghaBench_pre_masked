
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_63__ TYPE_9__ ;
typedef struct TYPE_62__ TYPE_8__ ;
typedef struct TYPE_61__ TYPE_7__ ;
typedef struct TYPE_60__ TYPE_6__ ;
typedef struct TYPE_59__ TYPE_5__ ;
typedef struct TYPE_58__ TYPE_4__ ;
typedef struct TYPE_57__ TYPE_3__ ;
typedef struct TYPE_56__ TYPE_2__ ;
typedef struct TYPE_55__ TYPE_1__ ;
typedef struct TYPE_54__ TYPE_17__ ;
typedef struct TYPE_53__ TYPE_16__ ;
typedef struct TYPE_52__ TYPE_15__ ;
typedef struct TYPE_51__ TYPE_14__ ;
typedef struct TYPE_50__ TYPE_13__ ;
typedef struct TYPE_49__ TYPE_12__ ;
typedef struct TYPE_48__ TYPE_11__ ;
typedef struct TYPE_47__ TYPE_10__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_61__ {scalar_t__ viaCoroutine; } ;
struct SrcList_item {int colUsed; int regReturn; TYPE_7__ fg; int regResult; TYPE_12__* pTab; int addrFillSub; int iCursor; } ;
struct TYPE_56__ {int leftColumn; } ;
struct TYPE_62__ {int wtFlags; TYPE_2__ u; TYPE_15__* pExpr; } ;
typedef TYPE_8__ WhereTerm ;
struct TYPE_57__ {int nEq; TYPE_14__* pIndex; } ;
struct TYPE_58__ {TYPE_3__ btree; } ;
struct TYPE_63__ {scalar_t__ prereq; int nLTerm; int wsFlags; TYPE_4__ u; TYPE_8__** aLTerm; } ;
typedef TYPE_9__ WhereLoop ;
struct TYPE_47__ {scalar_t__ iIdxCur; size_t iFrom; int iTabCur; TYPE_9__* pWLoop; } ;
typedef TYPE_10__ WhereLevel ;
struct TYPE_48__ {size_t nTerm; TYPE_6__* pWInfo; TYPE_8__* a; } ;
typedef TYPE_11__ WhereClause ;
typedef int Vdbe ;
struct TYPE_49__ {int nCol; int zName; TYPE_1__* aCol; } ;
typedef TYPE_12__ Table ;
struct TYPE_60__ {TYPE_5__* pTabList; } ;
struct TYPE_59__ {struct SrcList_item* a; } ;
struct TYPE_55__ {int zName; } ;
struct TYPE_54__ {int mallocFailed; } ;
struct TYPE_53__ {void* zName; } ;
struct TYPE_52__ {int pRight; int pLeft; int iRightJoinTable; } ;
struct TYPE_51__ {char* zName; int* aiColumn; void** azColl; TYPE_12__* pTable; } ;
struct TYPE_50__ {TYPE_17__* db; int nTab; int * pVdbe; } ;
typedef TYPE_13__ Parse ;
typedef TYPE_14__ Index ;
typedef TYPE_15__ Expr ;
typedef TYPE_16__ CollSeq ;
typedef int Bitmask ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_15__*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
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
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_5 (int) ;
 TYPE_14__* FUNC_6 (TYPE_17__*,int,int ,char**) ;
 TYPE_16__* FUNC_7 (TYPE_13__*,int ,int ) ;
 TYPE_15__* FUNC_8 (TYPE_17__*,TYPE_15__*,int ) ;
 int FUNC_9 (TYPE_13__*) ;
 int FUNC_10 (TYPE_13__*) ;
 int FUNC_11 (TYPE_17__*,TYPE_15__*) ;
 int FUNC_12 (TYPE_17__*,TYPE_15__*,int ) ;
 int FUNC_13 (TYPE_13__*,TYPE_15__*,int,int ) ;
 scalar_t__ FUNC_14 (TYPE_15__*,int ) ;
 int FUNC_15 (TYPE_13__*,TYPE_14__*,int,int,int ,int ,int ,int ) ;
 int FUNC_16 (TYPE_13__*) ;
 int FUNC_17 (TYPE_13__*,int) ;
 void* VAR_21 ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *,int ,int) ;
 int FUNC_20 (int *,int ,scalar_t__,int) ;
 int FUNC_21 (int *,int ,int,int ,int ) ;
 int FUNC_22 (int *,int,int) ;
 int FUNC_23 (int *,int ) ;
 int FUNC_24 (int *,int) ;
 int FUNC_25 (int *,int) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *,int) ;
 int FUNC_28 (TYPE_13__*,TYPE_14__*) ;
 int FUNC_29 (int ,char*,int ,int ) ;
 scalar_t__ FUNC_30 (TYPE_8__*,struct SrcList_item*,int) ;
 int FUNC_31 (int) ;
 int FUNC_32 (TYPE_13__*,int,int,int ,int) ;
 scalar_t__ FUNC_33 (TYPE_17__*,TYPE_9__*,int) ;

__attribute__((used)) static void FUNC_34(
  Parse *VAR_22,
  WhereClause *VAR_23,
  struct SrcList_item *VAR_24,
  Bitmask VAR_25,
  WhereLevel *VAR_26
){
  int VAR_27;
  WhereTerm *VAR_28;
  WhereTerm *VAR_29;
  Index *VAR_30;
  Vdbe *VAR_31;
  int VAR_32;
  Table *VAR_33;
  int VAR_34;
  int VAR_35;
  int VAR_36;
  int VAR_37;
  int VAR_38;
  CollSeq *VAR_39;
  WhereLoop *VAR_40;
  char *VAR_41;
  Bitmask VAR_42;
  Bitmask VAR_43;
  u8 VAR_44 = 0;
  Expr *VAR_45 = 0;
  int VAR_46 = 0;
  struct SrcList_item *VAR_47;
  int VAR_48 = 0;
  int VAR_49;



  VAR_31 = VAR_22->pVdbe;
  FUNC_5( VAR_31!=0 );
  VAR_32 = FUNC_18(VAR_31, VAR_7); FUNC_4(VAR_31);



  VAR_27 = 0;
  VAR_33 = VAR_24->pTab;
  VAR_29 = &VAR_23->a[VAR_23->nTerm];
  VAR_40 = VAR_26->pWLoop;
  VAR_42 = 0;
  for(VAR_28=VAR_23->a; VAR_28<VAR_29; VAR_28++){
    Expr *VAR_50 = VAR_28->pExpr;
    FUNC_5( !FUNC_0(VAR_50, VAR_1)
         || VAR_50->iRightJoinTable!=VAR_24->iCursor
         || VAR_40->prereq!=0 );
    if( VAR_40->prereq==0
     && (VAR_28->wtFlags & VAR_14)==0
     && !FUNC_0(VAR_50, VAR_1)
     && FUNC_14(VAR_50, VAR_24->iCursor) ){
      VAR_45 = FUNC_8(VAR_22->db, VAR_45,
                                FUNC_12(VAR_22->db, VAR_50, 0));
    }
    if( FUNC_30(VAR_28, VAR_24, VAR_25) ){
      int VAR_51 = VAR_28->u.leftColumn;
      Bitmask VAR_52 = VAR_51>=VAR_0 ? FUNC_1(VAR_0-1) : FUNC_1(VAR_51);
      FUNC_31( VAR_51==VAR_0 );
      FUNC_31( VAR_51==VAR_0-1 );
      if( !VAR_44 ){
        FUNC_29(VAR_13,
            "automatic index on %s(%s)", VAR_33->zName,
            VAR_33->aCol[VAR_51].zName);
        VAR_44 = 1;
      }
      if( (VAR_42 & VAR_52)==0 ){
        if( FUNC_33(VAR_22->db, VAR_40, VAR_27+1) ){
          goto end_auto_index_create;
        }
        VAR_40->aLTerm[VAR_27++] = VAR_28;
        VAR_42 |= VAR_52;
      }
    }
  }
  FUNC_5( VAR_27>0 );
  VAR_40->u.btree.nEq = VAR_40->nLTerm = VAR_27;
  VAR_40->wsFlags = VAR_16 | VAR_17 | VAR_18
                     | VAR_15;
  VAR_43 = VAR_24->colUsed & (~VAR_42 | FUNC_1(VAR_0-1));
  VAR_38 = FUNC_2(VAR_0-1,VAR_33->nCol);
  FUNC_31( VAR_33->nCol==VAR_0-1 );
  FUNC_31( VAR_33->nCol==VAR_0-2 );
  for(VAR_37=0; VAR_37<VAR_38; VAR_37++){
    if( VAR_43 & FUNC_1(VAR_37) ) VAR_27++;
  }
  if( VAR_24->colUsed & FUNC_1(VAR_0-1) ){
    VAR_27 += VAR_33->nCol - VAR_0 + 1;
  }


  VAR_30 = FUNC_6(VAR_22->db, VAR_27+1, 0, &VAR_41);
  if( VAR_30==0 ) goto end_auto_index_create;
  VAR_40->u.btree.pIndex = VAR_30;
  VAR_30->zName = "auto-index";
  VAR_30->pTable = VAR_33;
  VAR_36 = 0;
  VAR_42 = 0;
  for(VAR_28=VAR_23->a; VAR_28<VAR_29; VAR_28++){
    if( FUNC_30(VAR_28, VAR_24, VAR_25) ){
      int VAR_53 = VAR_28->u.leftColumn;
      Bitmask VAR_54 = VAR_53>=VAR_0 ? FUNC_1(VAR_0-1) : FUNC_1(VAR_53);
      FUNC_31( VAR_53==VAR_0-1 );
      FUNC_31( VAR_53==VAR_0 );
      if( (VAR_42 & VAR_54)==0 ){
        Expr *VAR_55 = VAR_28->pExpr;
        VAR_42 |= VAR_54;
        VAR_30->aiColumn[VAR_36] = VAR_28->u.leftColumn;
        VAR_39 = FUNC_7(VAR_22, VAR_55->pLeft, VAR_55->pRight);
        VAR_30->azColl[VAR_36] = VAR_39 ? VAR_39->zName : VAR_21;
        VAR_36++;
      }
    }
  }
  FUNC_5( (u32)VAR_36==VAR_40->u.btree.nEq );



  for(VAR_37=0; VAR_37<VAR_38; VAR_37++){
    if( VAR_43 & FUNC_1(VAR_37) ){
      VAR_30->aiColumn[VAR_36] = VAR_37;
      VAR_30->azColl[VAR_36] = VAR_21;
      VAR_36++;
    }
  }
  if( VAR_24->colUsed & FUNC_1(VAR_0-1) ){
    for(VAR_37=VAR_0-1; VAR_37<VAR_33->nCol; VAR_37++){
      VAR_30->aiColumn[VAR_36] = VAR_37;
      VAR_30->azColl[VAR_36] = VAR_21;
      VAR_36++;
    }
  }
  FUNC_5( VAR_36==VAR_27 );
  VAR_30->aiColumn[VAR_36] = VAR_20;
  VAR_30->azColl[VAR_36] = VAR_21;


  FUNC_5( VAR_26->iIdxCur>=0 );
  VAR_26->iIdxCur = VAR_22->nTab++;
  FUNC_20(VAR_31, VAR_8, VAR_26->iIdxCur, VAR_27+1);
  FUNC_28(VAR_22, VAR_30);
  FUNC_3((VAR_31, "for %s", VAR_33->zName));


  FUNC_10(VAR_22);
  VAR_47 = &VAR_23->pWInfo->pTabList->a[VAR_26->iFrom];
  if( VAR_47->fg.viaCoroutine ){
    int VAR_56 = VAR_47->regReturn;
    VAR_48 = FUNC_20(VAR_31, VAR_5, 0, 0);
    FUNC_21(VAR_31, VAR_4, VAR_56, 0, VAR_47->addrFillSub);
    VAR_34 = FUNC_19(VAR_31, VAR_10, VAR_56);
    FUNC_4(VAR_31);
    FUNC_3((VAR_31, "next row of \"%s\"", VAR_47->pTab->zName));
  }else{
    VAR_34 = FUNC_19(VAR_31, VAR_9, VAR_26->iTabCur); FUNC_4(VAR_31);
  }
  if( VAR_45 ){
    VAR_46 = FUNC_26(VAR_31);
    FUNC_13(VAR_22, VAR_45, VAR_46, VAR_11);
    VAR_40->wsFlags |= VAR_19;
  }
  VAR_35 = FUNC_16(VAR_22);
  VAR_49 = FUNC_15(
      VAR_22, VAR_30, VAR_26->iTabCur, VAR_35, 0, 0, 0, 0
  );
  FUNC_20(VAR_31, VAR_3, VAR_26->iIdxCur, VAR_35);
  FUNC_23(VAR_31, VAR_2);
  if( VAR_45 ) FUNC_27(VAR_31, VAR_46);
  if( VAR_47->fg.viaCoroutine ){
    FUNC_22(VAR_31, VAR_48, VAR_49+VAR_36);
    FUNC_31( VAR_22->db->mallocFailed );
    FUNC_32(VAR_22, VAR_34, VAR_26->iTabCur,
                          VAR_47->regResult, 1);
    FUNC_24(VAR_31, VAR_34);
    VAR_47->fg.viaCoroutine = 0;
  }else{
    FUNC_20(VAR_31, VAR_6, VAR_26->iTabCur, VAR_34+1); FUNC_4(VAR_31);
  }
  FUNC_23(VAR_31, VAR_12);
  FUNC_25(VAR_31, VAR_34);
  FUNC_17(VAR_22, VAR_35);
  FUNC_9(VAR_22);


  FUNC_25(VAR_31, VAR_32);

end_auto_index_create:
  FUNC_11(VAR_22->db, VAR_45);
}

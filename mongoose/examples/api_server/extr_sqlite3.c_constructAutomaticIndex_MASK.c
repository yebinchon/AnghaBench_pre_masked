
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


typedef int u8 ;
typedef int u32 ;
struct SrcList_item {int colUsed; TYPE_7__* pTab; } ;
struct TYPE_31__ {int leftColumn; } ;
struct TYPE_32__ {TYPE_3__ u; TYPE_10__* pExpr; } ;
typedef TYPE_4__ WhereTerm ;
struct TYPE_29__ {TYPE_9__* pIdx; } ;
struct TYPE_30__ {int nEq; int wsFlags; TYPE_1__ u; } ;
struct TYPE_33__ {scalar_t__ iIdxCur; scalar_t__ iTabCur; TYPE_2__ plan; } ;
typedef TYPE_5__ WhereLevel ;
struct TYPE_34__ {size_t nTerm; TYPE_4__* a; } ;
typedef TYPE_6__ WhereClause ;
typedef int Vdbe ;
struct TYPE_35__ {int nCol; int zName; } ;
typedef TYPE_7__ Table ;
struct TYPE_37__ {char** azColl; int* aiColumn; char* zName; int nColumn; TYPE_7__* pTable; int * aSortOrder; } ;
struct TYPE_36__ {int db; int * pVdbe; } ;
struct TYPE_28__ {char* zName; } ;
struct TYPE_27__ {int pRight; int pLeft; } ;
typedef TYPE_8__ Parse ;
typedef int KeyInfo ;
typedef TYPE_9__ Index ;
typedef TYPE_10__ Expr ;
typedef TYPE_11__ CollSeq ;
typedef int Bitmask ;


 scalar_t__ FUNC_0 (TYPE_11__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 TYPE_11__* FUNC_3 (TYPE_8__*,int ,int ) ;
 int FUNC_4 (TYPE_8__*) ;
 TYPE_9__* FUNC_5 (int ,int) ;
 int FUNC_6 (TYPE_8__*,TYPE_9__*,scalar_t__,int,int) ;
 int FUNC_7 (TYPE_8__*) ;
 int * FUNC_8 (TYPE_8__*,TYPE_9__*) ;
 int FUNC_9 (TYPE_8__*,int) ;
 int FUNC_10 (int *,int ,scalar_t__) ;
 int FUNC_11 (int *,int ,scalar_t__,int) ;
 int FUNC_12 (int *,int ,scalar_t__,int,int ,char*,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int) ;
 scalar_t__ FUNC_15 (TYPE_4__*,struct SrcList_item*,int) ;
 int FUNC_16 (int) ;

__attribute__((used)) static void FUNC_17(
  Parse *VAR_11,
  WhereClause *VAR_12,
  struct SrcList_item *VAR_13,
  Bitmask VAR_14,
  WhereLevel *VAR_15
){
  int VAR_16;
  WhereTerm *VAR_17;
  WhereTerm *VAR_18;
  int VAR_19;
  Index *VAR_20;
  Vdbe *VAR_21;
  int VAR_22;
  Table *VAR_23;
  KeyInfo *VAR_24;
  int VAR_25;
  int VAR_26;
  int VAR_27;
  int VAR_28;
  int VAR_29;
  CollSeq *VAR_30;
  Bitmask VAR_31;
  Bitmask VAR_32;



  VAR_21 = VAR_11->pVdbe;
  FUNC_2( VAR_21!=0 );
  VAR_22 = FUNC_4(VAR_11);



  VAR_16 = 0;
  VAR_23 = VAR_13->pTab;
  VAR_18 = &VAR_12->a[VAR_12->nTerm];
  VAR_31 = 0;
  for(VAR_17=VAR_12->a; VAR_17<VAR_18; VAR_17++){
    if( FUNC_15(VAR_17, VAR_13, VAR_14) ){
      int VAR_33 = VAR_17->u.leftColumn;
      Bitmask VAR_34 = VAR_33>=VAR_0 ? ((Bitmask)1)<<(VAR_0-1) : ((Bitmask)1)<<VAR_33;
      FUNC_16( VAR_33==VAR_0 );
      FUNC_16( VAR_33==VAR_0-1 );
      if( (VAR_31 & VAR_34)==0 ){
        VAR_16++;
        VAR_31 |= VAR_34;
      }
    }
  }
  FUNC_2( VAR_16>0 );
  VAR_15->plan.nEq = VAR_16;
  VAR_32 = VAR_13->colUsed & (~VAR_31 | (((Bitmask)1)<<(VAR_0-1)));
  VAR_29 = (VAR_23->nCol >= VAR_0-1) ? VAR_0-1 : VAR_23->nCol;
  FUNC_16( VAR_23->nCol==VAR_0-1 );
  FUNC_16( VAR_23->nCol==VAR_0-2 );
  for(VAR_28=0; VAR_28<VAR_29; VAR_28++){
    if( VAR_32 & (((Bitmask)1)<<VAR_28) ) VAR_16++;
  }
  if( VAR_13->colUsed & (((Bitmask)1)<<(VAR_0-1)) ){
    VAR_16 += VAR_23->nCol - VAR_0 + 1;
  }
  VAR_15->plan.wsFlags |= VAR_8 | VAR_9 | VAR_10;


  VAR_19 = sizeof(Index);
  VAR_19 += VAR_16*sizeof(int);
  VAR_19 += VAR_16*sizeof(char*);
  VAR_19 += VAR_16;
  VAR_20 = FUNC_5(VAR_11->db, VAR_19);
  if( VAR_20==0 ) return;
  VAR_15->plan.u.pIdx = VAR_20;
  VAR_20->azColl = (char**)&VAR_20[1];
  VAR_20->aiColumn = (int*)&VAR_20->azColl[VAR_16];
  VAR_20->aSortOrder = (u8*)&VAR_20->aiColumn[VAR_16];
  VAR_20->zName = "auto-index";
  VAR_20->nColumn = VAR_16;
  VAR_20->pTable = VAR_23;
  VAR_27 = 0;
  VAR_31 = 0;
  for(VAR_17=VAR_12->a; VAR_17<VAR_18; VAR_17++){
    if( FUNC_15(VAR_17, VAR_13, VAR_14) ){
      int VAR_35 = VAR_17->u.leftColumn;
      Bitmask VAR_36 = VAR_35>=VAR_0 ? ((Bitmask)1)<<(VAR_0-1) : ((Bitmask)1)<<VAR_35;
      if( (VAR_31 & VAR_36)==0 ){
        Expr *VAR_37 = VAR_17->pExpr;
        VAR_31 |= VAR_36;
        VAR_20->aiColumn[VAR_27] = VAR_17->u.leftColumn;
        VAR_30 = FUNC_3(VAR_11, VAR_37->pLeft, VAR_37->pRight);
        VAR_20->azColl[VAR_27] = FUNC_0(VAR_30) ? VAR_30->zName : "BINARY";
        VAR_27++;
      }
    }
  }
  FUNC_2( (u32)VAR_27==VAR_15->plan.nEq );



  for(VAR_28=0; VAR_28<VAR_29; VAR_28++){
    if( VAR_32 & (((Bitmask)1)<<VAR_28) ){
      VAR_20->aiColumn[VAR_27] = VAR_28;
      VAR_20->azColl[VAR_27] = "BINARY";
      VAR_27++;
    }
  }
  if( VAR_13->colUsed & (((Bitmask)1)<<(VAR_0-1)) ){
    for(VAR_28=VAR_0-1; VAR_28<VAR_23->nCol; VAR_28++){
      VAR_20->aiColumn[VAR_27] = VAR_28;
      VAR_20->azColl[VAR_27] = "BINARY";
      VAR_27++;
    }
  }
  FUNC_2( VAR_27==VAR_16 );


  VAR_24 = FUNC_8(VAR_11, VAR_20);
  FUNC_2( VAR_15->iIdxCur>=0 );
  FUNC_12(VAR_21, VAR_4, VAR_15->iIdxCur, VAR_16+1, 0,
                    (char*)VAR_24, VAR_6);
  FUNC_1((VAR_21, "for %s", VAR_23->zName));


  VAR_25 = FUNC_10(VAR_21, VAR_5, VAR_15->iTabCur);
  VAR_26 = FUNC_7(VAR_11);
  FUNC_6(VAR_11, VAR_20, VAR_15->iTabCur, VAR_26, 1);
  FUNC_11(VAR_21, VAR_2, VAR_15->iIdxCur, VAR_26);
  FUNC_13(VAR_21, VAR_1);
  FUNC_11(VAR_21, VAR_3, VAR_15->iTabCur, VAR_25+1);
  FUNC_13(VAR_21, VAR_7);
  FUNC_14(VAR_21, VAR_25);
  FUNC_9(VAR_11, VAR_26);


  FUNC_14(VAR_21, VAR_22);
}

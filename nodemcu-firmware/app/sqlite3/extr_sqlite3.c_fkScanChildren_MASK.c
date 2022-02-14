
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef int sqlite3 ;
typedef size_t i16 ;
typedef int WhereInfo ;
typedef int Vdbe ;
struct TYPE_30__ {TYPE_2__* aCol; } ;
typedef TYPE_4__ Table ;
struct TYPE_35__ {int nCol; int isDeferred; TYPE_4__* pFrom; TYPE_1__* aCol; } ;
struct TYPE_34__ {int nKeyCol; int* aiColumn; TYPE_4__* pTable; } ;
struct TYPE_33__ {TYPE_6__* pParse; TYPE_5__* pSrcList; } ;
struct TYPE_32__ {int * db; } ;
struct TYPE_31__ {TYPE_3__* a; } ;
struct TYPE_29__ {int iCursor; } ;
struct TYPE_28__ {char* zName; } ;
struct TYPE_27__ {int iFrom; } ;
typedef TYPE_5__ SrcList ;
typedef TYPE_6__ Parse ;
typedef TYPE_7__ NameContext ;
typedef TYPE_8__ Index ;
typedef TYPE_9__ FKey ;
typedef int Expr ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int *,TYPE_4__*,int ,size_t) ;
 int * FUNC_4 (TYPE_6__*,TYPE_4__*,int,size_t) ;
 int FUNC_5 (TYPE_7__*,int ,int) ;
 int * FUNC_6 (int *,int ,char const*) ;
 int * FUNC_7 (int *,int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int * FUNC_9 (TYPE_6__*) ;
 int * FUNC_10 (TYPE_6__*,int ,int *,int *) ;
 TYPE_8__* FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_7__*,int *) ;
 int FUNC_13 (int *,int ,int ,int) ;
 int FUNC_14 (int *,int) ;
 int * FUNC_15 (TYPE_6__*,TYPE_5__*,int *,int ,int ,int ,int ) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static void FUNC_17(
  Parse *VAR_6,
  SrcList *VAR_7,
  Table *VAR_8,
  Index *VAR_9,
  FKey *VAR_10,
  int *VAR_11,
  int VAR_12,
  int VAR_13
){
  sqlite3 *VAR_14 = VAR_6->db;
  int VAR_15;
  Expr *VAR_16 = 0;
  NameContext VAR_17;
  WhereInfo *VAR_18;
  int VAR_19 = 0;
  Vdbe *VAR_20 = FUNC_9(VAR_6);

  FUNC_2( VAR_9==0 || VAR_9->pTable==VAR_8 );
  FUNC_2( VAR_9==0 || VAR_9->nKeyCol==VAR_10->nCol );
  FUNC_2( VAR_9!=0 || VAR_10->nCol==1 );
  FUNC_2( VAR_9!=0 || FUNC_0(VAR_8) );

  if( VAR_13<0 ){
    VAR_19 = FUNC_13(VAR_20, VAR_1, VAR_10->isDeferred, 0);
    FUNC_1(VAR_20);
  }
  for(VAR_15=0; VAR_15<VAR_10->nCol; VAR_15++){
    Expr *VAR_21;
    Expr *VAR_22;
    Expr *VAR_23;
    i16 VAR_24;
    const char *VAR_25;

    VAR_24 = VAR_9 ? VAR_9->aiColumn[VAR_15] : -1;
    VAR_21 = FUNC_4(VAR_6, VAR_8, VAR_12, VAR_24);
    VAR_24 = VAR_11 ? VAR_11[VAR_15] : VAR_10->aCol[0].iFrom;
    FUNC_2( VAR_24>=0 );
    VAR_25 = VAR_10->pFrom->aCol[VAR_24].zName;
    VAR_22 = FUNC_6(VAR_14, VAR_3, VAR_25);
    VAR_23 = FUNC_10(VAR_6, VAR_2, VAR_21, VAR_22);
    VAR_16 = FUNC_7(VAR_14, VAR_16, VAR_23);
  }
  if( VAR_8==VAR_10->pFrom && VAR_13>0 ){
    Expr *VAR_26;
    Expr *VAR_27;
    Expr *VAR_28;
    if( FUNC_0(VAR_8) ){
      VAR_27 = FUNC_4(VAR_6, VAR_8, VAR_12, -1);
      VAR_28 = FUNC_3(VAR_14, VAR_8, VAR_7->a[0].iCursor, -1);
      VAR_26 = FUNC_10(VAR_6, VAR_4, VAR_27, VAR_28);
    }else{
      Expr *VAR_29, *VAR_30 = 0;
      Index *VAR_31 = FUNC_11(VAR_8);
      FUNC_2( VAR_9!=0 );
      for(VAR_15=0; VAR_15<VAR_31->nKeyCol; VAR_15++){
        i16 VAR_32 = VAR_9->aiColumn[VAR_15];
        FUNC_2( VAR_32>=0 );
        VAR_27 = FUNC_4(VAR_6, VAR_8, VAR_12, VAR_32);
        VAR_28 = FUNC_3(VAR_14, VAR_8, VAR_7->a[0].iCursor, VAR_32);
        VAR_29 = FUNC_10(VAR_6, VAR_2, VAR_27, VAR_28);
        VAR_30 = FUNC_7(VAR_14, VAR_30, VAR_29);
      }
      VAR_26 = FUNC_10(VAR_6, VAR_5, VAR_30, 0);
    }
    VAR_16 = FUNC_7(VAR_14, VAR_16, VAR_26);
  }


  FUNC_5(&VAR_17, 0, sizeof(NameContext));
  VAR_17.pSrcList = VAR_7;
  VAR_17.pParse = VAR_6;
  FUNC_12(&VAR_17, VAR_16);




  VAR_18 = FUNC_15(VAR_6, VAR_7, VAR_16, 0, 0, 0, 0);
  FUNC_13(VAR_20, VAR_0, VAR_10->isDeferred, VAR_13);
  if( VAR_18 ){
    FUNC_16(VAR_18);
  }


  FUNC_8(VAR_14, VAR_16);
  if( VAR_19 ){
    FUNC_14(VAR_20, VAR_19);
  }
}

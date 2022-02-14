
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef int sqlite3 ;
typedef size_t i16 ;
typedef int WhereInfo ;
typedef int Vdbe ;
struct TYPE_29__ {TYPE_3__* aCol; } ;
typedef TYPE_4__ Table ;
struct TYPE_34__ {int nCol; int isDeferred; TYPE_4__* pFrom; TYPE_1__* aCol; } ;
struct TYPE_33__ {int nKeyCol; int* aiColumn; TYPE_4__* pTable; } ;
struct TYPE_32__ {TYPE_6__* pParse; TYPE_5__* pSrcList; } ;
struct TYPE_31__ {scalar_t__ nErr; int * db; } ;
struct TYPE_30__ {TYPE_2__* a; } ;
struct TYPE_28__ {char* zName; } ;
struct TYPE_27__ {int iCursor; } ;
struct TYPE_26__ {int iFrom; } ;
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
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int *,TYPE_4__*,int ,int) ;
 int * FUNC_4 (TYPE_6__*,TYPE_4__*,int,size_t) ;
 int FUNC_5 (TYPE_7__*,int ,int) ;
 int * FUNC_6 (int *,int ,char const*) ;
 int * FUNC_7 (TYPE_6__*,int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int * FUNC_9 (TYPE_6__*) ;
 int * FUNC_10 (TYPE_6__*,int ,int *,int *) ;
 int FUNC_11 (TYPE_7__*,int *) ;
 int FUNC_12 (int *,int ,int ,int) ;
 int FUNC_13 (int *,int) ;
 int * FUNC_14 (TYPE_6__*,TYPE_5__*,int *,int ,int ,int ,int ) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static void FUNC_16(
  Parse *VAR_7,
  SrcList *VAR_8,
  Table *VAR_9,
  Index *VAR_10,
  FKey *VAR_11,
  int *VAR_12,
  int VAR_13,
  int VAR_14
){
  sqlite3 *VAR_15 = VAR_7->db;
  int VAR_16;
  Expr *VAR_17 = 0;
  NameContext VAR_18;
  WhereInfo *VAR_19;
  int VAR_20 = 0;
  Vdbe *VAR_21 = FUNC_9(VAR_7);

  FUNC_2( VAR_10==0 || VAR_10->pTable==VAR_9 );
  FUNC_2( VAR_10==0 || VAR_10->nKeyCol==VAR_11->nCol );
  FUNC_2( VAR_10!=0 || VAR_11->nCol==1 );
  FUNC_2( VAR_10!=0 || FUNC_0(VAR_9) );

  if( VAR_14<0 ){
    VAR_20 = FUNC_12(VAR_21, VAR_1, VAR_11->isDeferred, 0);
    FUNC_1(VAR_21);
  }
  for(VAR_16=0; VAR_16<VAR_11->nCol; VAR_16++){
    Expr *VAR_22;
    Expr *VAR_23;
    Expr *VAR_24;
    i16 VAR_25;
    const char *VAR_26;

    VAR_25 = VAR_10 ? VAR_10->aiColumn[VAR_16] : -1;
    VAR_22 = FUNC_4(VAR_7, VAR_9, VAR_13, VAR_25);
    VAR_25 = VAR_12 ? VAR_12[VAR_16] : VAR_11->aCol[0].iFrom;
    FUNC_2( VAR_25>=0 );
    VAR_26 = VAR_11->pFrom->aCol[VAR_25].zName;
    VAR_23 = FUNC_6(VAR_15, VAR_3, VAR_26);
    VAR_24 = FUNC_10(VAR_7, VAR_2, VAR_22, VAR_23);
    VAR_17 = FUNC_7(VAR_7, VAR_17, VAR_24);
  }
  if( VAR_9==VAR_11->pFrom && VAR_14>0 ){
    Expr *VAR_27;
    Expr *VAR_28;
    Expr *VAR_29;
    if( FUNC_0(VAR_9) ){
      VAR_28 = FUNC_4(VAR_7, VAR_9, VAR_13, -1);
      VAR_29 = FUNC_3(VAR_15, VAR_9, VAR_8->a[0].iCursor, -1);
      VAR_27 = FUNC_10(VAR_7, VAR_5, VAR_28, VAR_29);
    }else{
      Expr *VAR_30, *VAR_31 = 0;
      FUNC_2( VAR_10!=0 );
      for(VAR_16=0; VAR_16<VAR_10->nKeyCol; VAR_16++){
        i16 VAR_32 = VAR_10->aiColumn[VAR_16];
        FUNC_2( VAR_32>=0 );
        VAR_28 = FUNC_4(VAR_7, VAR_9, VAR_13, VAR_32);
        VAR_29 = FUNC_6(VAR_15, VAR_3, VAR_9->aCol[VAR_32].zName);
        VAR_30 = FUNC_10(VAR_7, VAR_4, VAR_28, VAR_29);
        VAR_31 = FUNC_7(VAR_7, VAR_31, VAR_30);
      }
      VAR_27 = FUNC_10(VAR_7, VAR_6, VAR_31, 0);
    }
    VAR_17 = FUNC_7(VAR_7, VAR_17, VAR_27);
  }


  FUNC_5(&VAR_18, 0, sizeof(NameContext));
  VAR_18.pSrcList = VAR_8;
  VAR_18.pParse = VAR_7;
  FUNC_11(&VAR_18, VAR_17);




  if( VAR_7->nErr==0 ){
    VAR_19 = FUNC_14(VAR_7, VAR_8, VAR_17, 0, 0, 0, 0);
    FUNC_12(VAR_21, VAR_0, VAR_11->isDeferred, VAR_14);
    if( VAR_19 ){
      FUNC_15(VAR_19);
    }
  }


  FUNC_8(VAR_15, VAR_17);
  if( VAR_20 ){
    FUNC_13(VAR_21, VAR_20);
  }
}

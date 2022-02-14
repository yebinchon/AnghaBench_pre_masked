
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
typedef struct TYPE_47__ TYPE_2__ ;
typedef struct TYPE_46__ TYPE_1__ ;
typedef struct TYPE_45__ TYPE_18__ ;
typedef struct TYPE_44__ TYPE_12__ ;
typedef struct TYPE_43__ TYPE_11__ ;
typedef struct TYPE_42__ TYPE_10__ ;


struct TYPE_49__ {TYPE_1__* pDfltColl; } ;
typedef TYPE_4__ sqlite3 ;
typedef int WhereInfo ;
typedef int Vdbe ;
struct TYPE_50__ {int iPKey; TYPE_12__* aCol; } ;
typedef TYPE_5__ Table ;
struct TYPE_54__ {int* aiColumn; TYPE_5__* pTable; } ;
struct TYPE_53__ {TYPE_7__* pParse; TYPE_6__* pSrcList; } ;
struct TYPE_52__ {TYPE_4__* db; } ;
struct TYPE_51__ {TYPE_3__* a; } ;
struct TYPE_48__ {int iCursor; } ;
struct TYPE_47__ {int iFrom; } ;
struct TYPE_46__ {char* zName; } ;
struct TYPE_45__ {int mayAbort; } ;
struct TYPE_44__ {char* zColl; char* zName; void* affinity; } ;
struct TYPE_43__ {int iTable; int iColumn; void* affinity; } ;
struct TYPE_42__ {scalar_t__ isDeferred; int nCol; TYPE_5__* pFrom; TYPE_2__* aCol; } ;
typedef TYPE_6__ SrcList ;
typedef TYPE_7__ Parse ;
typedef TYPE_8__ NameContext ;
typedef TYPE_9__ Index ;
typedef TYPE_10__ FKey ;
typedef TYPE_11__ Expr ;
typedef TYPE_12__ Column ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_8__*,int ,int) ;
 TYPE_11__* FUNC_2 (TYPE_4__*,int ,char const*) ;
 TYPE_11__* FUNC_3 (TYPE_7__*,TYPE_11__*,char const*) ;
 TYPE_11__* FUNC_4 (TYPE_4__*,TYPE_11__*,TYPE_11__*) ;
 int FUNC_5 (TYPE_4__*,TYPE_11__*) ;
 int * FUNC_6 (TYPE_7__*) ;
 TYPE_11__* FUNC_7 (TYPE_7__*,int ,TYPE_11__*,TYPE_11__*,int ) ;
 TYPE_18__* FUNC_8 (TYPE_7__*) ;
 int FUNC_9 (TYPE_8__*,TYPE_11__*) ;
 int FUNC_10 (int *,int ,scalar_t__,int) ;
 int FUNC_11 (int *,int) ;
 int * FUNC_12 (TYPE_7__*,TYPE_6__*,TYPE_11__*,int ,int ,int ,int ) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(
  Parse *VAR_8,
  SrcList *VAR_9,
  Table *VAR_10,
  Index *VAR_11,
  FKey *VAR_12,
  int *VAR_13,
  int VAR_14,
  int VAR_15
){
  sqlite3 *VAR_16 = VAR_8->db;
  int VAR_17;
  Expr *VAR_18 = 0;
  NameContext VAR_19;
  WhereInfo *VAR_20;
  int VAR_21 = 0;
  Vdbe *VAR_22 = FUNC_6(VAR_8);

  FUNC_0( !VAR_11 || VAR_11->pTable==VAR_10 );

  if( VAR_15<0 ){
    VAR_21 = FUNC_10(VAR_22, VAR_1, VAR_12->isDeferred, 0);
  }
  for(VAR_17=0; VAR_17<VAR_12->nCol; VAR_17++){
    Expr *VAR_23;
    Expr *VAR_24;
    Expr *VAR_25;
    int VAR_26;
    const char *VAR_27;

    VAR_23 = FUNC_2(VAR_16, VAR_7, 0);
    if( VAR_23 ){


      if( VAR_11 ){
        Column *VAR_28;
        const char *VAR_29;
        VAR_26 = VAR_11->aiColumn[VAR_17];
        VAR_28 = &VAR_10->aCol[VAR_26];
        if( VAR_10->iPKey==VAR_26 ) VAR_26 = -1;
        VAR_23->iTable = VAR_14+VAR_26+1;
        VAR_23->affinity = VAR_28->affinity;
        VAR_29 = VAR_28->zColl;
        if( VAR_29==0 ) VAR_29 = VAR_16->pDfltColl->zName;
        VAR_23 = FUNC_3(VAR_8, VAR_23, VAR_29);
      }else{
        VAR_23->iTable = VAR_14;
        VAR_23->affinity = VAR_2;
      }
    }
    VAR_26 = VAR_13 ? VAR_13[VAR_17] : VAR_12->aCol[0].iFrom;
    FUNC_0( VAR_26>=0 );
    VAR_27 = VAR_12->pFrom->aCol[VAR_26].zName;
    VAR_24 = FUNC_2(VAR_16, VAR_5, VAR_27);
    VAR_25 = FUNC_7(VAR_8, VAR_4, VAR_23, VAR_24, 0);
    VAR_18 = FUNC_4(VAR_16, VAR_18, VAR_25);
  }





  if( VAR_10==VAR_12->pFrom && VAR_15>0 ){
    Expr *VAR_30;
    Expr *VAR_31;
    Expr *VAR_32;
    VAR_31 = FUNC_2(VAR_16, VAR_7, 0);
    VAR_32 = FUNC_2(VAR_16, VAR_3, 0);
    if( VAR_31 && VAR_32 ){
      VAR_31->iTable = VAR_14;
      VAR_31->affinity = VAR_2;
      VAR_32->iTable = VAR_9->a[0].iCursor;
      VAR_32->iColumn = -1;
    }
    VAR_30 = FUNC_7(VAR_8, VAR_6, VAR_31, VAR_32, 0);
    VAR_18 = FUNC_4(VAR_16, VAR_18, VAR_30);
  }


  FUNC_1(&VAR_19, 0, sizeof(NameContext));
  VAR_19.pSrcList = VAR_9;
  VAR_19.pParse = VAR_8;
  FUNC_9(&VAR_19, VAR_18);





  VAR_20 = FUNC_12(VAR_8, VAR_9, VAR_18, 0, 0, 0, 0);
  if( VAR_15>0 && VAR_12->isDeferred==0 ){
    FUNC_8(VAR_8)->mayAbort = 1;
  }
  FUNC_10(VAR_22, VAR_0, VAR_12->isDeferred, VAR_15);
  if( VAR_20 ){
    FUNC_13(VAR_20);
  }


  FUNC_5(VAR_16, VAR_18);
  if( VAR_21 ){
    FUNC_11(VAR_22, VAR_21);
  }
}

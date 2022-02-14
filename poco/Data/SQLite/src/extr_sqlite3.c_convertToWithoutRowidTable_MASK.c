
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct TYPE_27__ {scalar_t__ busy; int imposterTable; } ;
struct TYPE_28__ {TYPE_3__ init; scalar_t__ mallocFailed; } ;
typedef TYPE_4__ sqlite3 ;
typedef int Vdbe ;
typedef int Token ;
struct TYPE_29__ {int nCol; size_t iPKey; scalar_t__ tnum; TYPE_7__* pIndex; int keyConf; TYPE_1__* aCol; } ;
typedef TYPE_5__ Table ;
struct TYPE_32__ {TYPE_2__* a; } ;
struct TYPE_31__ {int nKeyCol; int nColumn; int* aiColumn; int isCovering; int uniqNotNull; scalar_t__ tnum; int bAscKeyBug; int * azColl; scalar_t__* aSortOrder; struct TYPE_31__* pNext; } ;
struct TYPE_30__ {scalar_t__ nErr; TYPE_5__* pNewTable; int iPkSortOrder; scalar_t__ addrCrTab; int * pVdbe; TYPE_4__* db; } ;
struct TYPE_26__ {int sortOrder; int pExpr; } ;
struct TYPE_25__ {int colFlags; int zName; int notNull; } ;
typedef TYPE_6__ Parse ;
typedef TYPE_7__ Index ;
typedef TYPE_8__ ExprList ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_7__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int,int) ;
 scalar_t__ FUNC_3 (TYPE_7__*,int,TYPE_7__*,int) ;
 int FUNC_4 (TYPE_7__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*,TYPE_7__*,int) ;
 int FUNC_6 (TYPE_6__*,int ,int ,int ,TYPE_8__*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_7 (TYPE_4__*,int ,int *,int ) ;
 TYPE_8__* FUNC_8 (TYPE_6__*,int ,int ) ;
 TYPE_7__* FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_6__*,int ,size_t*) ;
 int VAR_7 ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,scalar_t__,int ) ;
 int FUNC_13 (int *,scalar_t__,int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(Parse *VAR_8, Table *VAR_9){
  Index *VAR_10;
  Index *VAR_11;
  int VAR_12;
  int VAR_13, VAR_14;
  sqlite3 *VAR_15 = VAR_8->db;
  Vdbe *VAR_16 = VAR_8->pVdbe;



  if( !VAR_15->init.imposterTable ){
    for(VAR_13=0; VAR_13<VAR_9->nCol; VAR_13++){
      if( (VAR_9->aCol[VAR_13].colFlags & VAR_1)!=0 ){
        VAR_9->aCol[VAR_13].notNull = VAR_3;
      }
    }
  }




  if( VAR_8->addrCrTab ){
    FUNC_1( *VAR_16 );
    FUNC_13(VAR_16, VAR_8->addrCrTab, VAR_0);
  }




  if( VAR_9->iPKey>=0 ){
    ExprList *VAR_17;
    Token VAR_18;
    FUNC_11(&VAR_18, VAR_9->aCol[VAR_9->iPKey].zName);
    VAR_17 = FUNC_8(VAR_8, 0,
                  FUNC_7(VAR_15, VAR_6, &VAR_18, 0));
    if( VAR_17==0 ) return;
    if( VAR_2 ){
      FUNC_10(VAR_8, VAR_17->a[0].pExpr, &VAR_9->iPKey);
    }
    VAR_17->a[0].sortOrder = VAR_8->iPkSortOrder;
    FUNC_1( VAR_8->pNewTable==VAR_9 );
    VAR_9->iPKey = -1;
    FUNC_6(VAR_8, 0, 0, 0, VAR_17, VAR_9->keyConf, 0, 0, 0, 0,
                       VAR_5);
    if( VAR_15->mallocFailed || VAR_8->nErr ) return;
    VAR_11 = FUNC_9(VAR_9);
  }else{
    VAR_11 = FUNC_9(VAR_9);
    FUNC_1( VAR_11!=0 );






    for(VAR_13=VAR_14=1; VAR_13<VAR_11->nKeyCol; VAR_13++){
      if( FUNC_3(VAR_11, VAR_14, VAR_11, VAR_13) ){
        VAR_11->nColumn--;
      }else{
        FUNC_14( FUNC_2(VAR_11->aiColumn, VAR_14, VAR_11->aiColumn[VAR_13]) );
        VAR_11->aiColumn[VAR_14++] = VAR_11->aiColumn[VAR_13];
      }
    }
    VAR_11->nKeyCol = VAR_14;
  }
  FUNC_1( VAR_11!=0 );
  VAR_11->isCovering = 1;
  if( !VAR_15->init.imposterTable ) VAR_11->uniqNotNull = 1;
  VAR_12 = VAR_11->nKeyCol;





  if( VAR_16 && VAR_11->tnum>0 ){
    FUNC_1( VAR_15->init.busy==0 );
    FUNC_12(VAR_16, VAR_11->tnum, VAR_4);
  }


  VAR_11->tnum = VAR_9->tnum;




  for(VAR_10=VAR_9->pIndex; VAR_10; VAR_10=VAR_10->pNext){
    int VAR_19;
    if( FUNC_0(VAR_10) ) continue;
    for(VAR_13=VAR_19=0; VAR_13<VAR_12; VAR_13++){
      if( !FUNC_3(VAR_10, VAR_10->nKeyCol, VAR_11, VAR_13) ){
        FUNC_14( FUNC_2(VAR_10->aiColumn, VAR_10->nKeyCol, VAR_11->aiColumn[VAR_13]) );
        VAR_19++;
      }
    }
    if( VAR_19==0 ){

      VAR_10->nColumn = VAR_10->nKeyCol;
      continue;
    }
    if( FUNC_5(VAR_15, VAR_10, VAR_10->nKeyCol+VAR_19) ) return;
    for(VAR_13=0, VAR_14=VAR_10->nKeyCol; VAR_13<VAR_12; VAR_13++){
      if( !FUNC_3(VAR_10, VAR_10->nKeyCol, VAR_11, VAR_13) ){
        FUNC_14( FUNC_2(VAR_10->aiColumn, VAR_10->nKeyCol, VAR_11->aiColumn[VAR_13]) );
        VAR_10->aiColumn[VAR_14] = VAR_11->aiColumn[VAR_13];
        VAR_10->azColl[VAR_14] = VAR_11->azColl[VAR_13];
        if( VAR_11->aSortOrder[VAR_13] ){

          VAR_10->bAscKeyBug = 1;
        }
        VAR_14++;
      }
    }
    FUNC_1( VAR_10->nColumn>=VAR_10->nKeyCol+VAR_19 );
    FUNC_1( VAR_10->nColumn>=VAR_14 );
  }



  if( VAR_12<VAR_9->nCol ){
    if( FUNC_5(VAR_15, VAR_11, VAR_9->nCol) ) return;
    for(VAR_13=0, VAR_14=VAR_12; VAR_13<VAR_9->nCol; VAR_13++){
      if( !FUNC_2(VAR_11->aiColumn, VAR_14, VAR_13) ){
        FUNC_1( VAR_14<VAR_11->nColumn );
        VAR_11->aiColumn[VAR_14] = VAR_13;
        VAR_11->azColl[VAR_14] = VAR_7;
        VAR_14++;
      }
    }
    FUNC_1( VAR_11->nColumn==VAR_14 );
    FUNC_1( VAR_9->nCol==VAR_14 );
  }else{
    VAR_11->nColumn = VAR_9->nCol;
  }
  FUNC_4(VAR_11);
}

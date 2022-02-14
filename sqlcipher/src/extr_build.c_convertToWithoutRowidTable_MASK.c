
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_24__ {scalar_t__ busy; int imposterTable; } ;
struct TYPE_25__ {TYPE_3__ init; scalar_t__ mallocFailed; } ;
typedef TYPE_4__ sqlite3 ;
typedef int Vdbe ;
typedef int Token ;
struct TYPE_26__ {int nCol; size_t iPKey; scalar_t__ tnum; TYPE_7__* pIndex; int keyConf; TYPE_1__* aCol; } ;
typedef TYPE_5__ Table ;
struct TYPE_29__ {TYPE_2__* a; } ;
struct TYPE_28__ {int nKeyCol; int* aiColumn; int nColumn; int isCovering; int uniqNotNull; scalar_t__ tnum; int * azColl; struct TYPE_28__* pNext; } ;
struct TYPE_27__ {scalar_t__ nErr; TYPE_5__* pNewTable; int iPkSortOrder; scalar_t__ addrCrTab; int * pVdbe; TYPE_4__* db; } ;
struct TYPE_23__ {int sortOrder; } ;
struct TYPE_22__ {int colFlags; int zName; int notNull; } ;
typedef TYPE_6__ Parse ;
typedef TYPE_7__ Index ;
typedef TYPE_8__ ExprList ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_7__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int*,int,int) ;
 int FUNC_3 (TYPE_7__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,TYPE_7__*,int) ;
 int FUNC_5 (TYPE_6__*,int ,int ,int ,TYPE_8__*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (TYPE_4__*,int ,int *,int ) ;
 TYPE_8__* FUNC_7 (TYPE_6__*,int ,int ) ;
 TYPE_7__* FUNC_8 (TYPE_5__*) ;
 int VAR_6 ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,scalar_t__,int ) ;
 int FUNC_11 (int *,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_12(Parse *VAR_7, Table *VAR_8){
  Index *VAR_9;
  Index *VAR_10;
  int VAR_11;
  int VAR_12, VAR_13;
  sqlite3 *VAR_14 = VAR_7->db;
  Vdbe *VAR_15 = VAR_7->pVdbe;



  if( !VAR_14->init.imposterTable ){
    for(VAR_12=0; VAR_12<VAR_8->nCol; VAR_12++){
      if( (VAR_8->aCol[VAR_12].colFlags & VAR_1)!=0 ){
        VAR_8->aCol[VAR_12].notNull = VAR_2;
      }
    }
  }




  if( VAR_7->addrCrTab ){
    FUNC_1( *VAR_15 );
    FUNC_11(VAR_15, VAR_7->addrCrTab, VAR_0);
  }




  if( VAR_8->iPKey>=0 ){
    ExprList *VAR_16;
    Token VAR_17;
    FUNC_9(&VAR_17, VAR_8->aCol[VAR_8->iPKey].zName);
    VAR_16 = FUNC_7(VAR_7, 0,
                  FUNC_6(VAR_14, VAR_5, &VAR_17, 0));
    if( VAR_16==0 ) return;
    VAR_16->a[0].sortOrder = VAR_7->iPkSortOrder;
    FUNC_1( VAR_7->pNewTable==VAR_8 );
    FUNC_5(VAR_7, 0, 0, 0, VAR_16, VAR_8->keyConf, 0, 0, 0, 0,
                       VAR_4);
    if( VAR_14->mallocFailed || VAR_7->nErr ) return;
    VAR_10 = FUNC_8(VAR_8);
    VAR_8->iPKey = -1;
  }else{
    VAR_10 = FUNC_8(VAR_8);
    FUNC_1( VAR_10!=0 );






    for(VAR_12=VAR_13=1; VAR_12<VAR_10->nKeyCol; VAR_12++){
      if( FUNC_2(VAR_10->aiColumn, VAR_13, VAR_10->aiColumn[VAR_12]) ){
        VAR_10->nColumn--;
      }else{
        VAR_10->aiColumn[VAR_13++] = VAR_10->aiColumn[VAR_12];
      }
    }
    VAR_10->nKeyCol = VAR_13;
  }
  FUNC_1( VAR_10!=0 );
  VAR_10->isCovering = 1;
  if( !VAR_14->init.imposterTable ) VAR_10->uniqNotNull = 1;
  VAR_11 = VAR_10->nKeyCol;





  if( VAR_15 && VAR_10->tnum>0 ){
    FUNC_1( VAR_14->init.busy==0 );
    FUNC_10(VAR_15, VAR_10->tnum, VAR_3);
  }


  VAR_10->tnum = VAR_8->tnum;




  for(VAR_9=VAR_8->pIndex; VAR_9; VAR_9=VAR_9->pNext){
    int VAR_18;
    if( FUNC_0(VAR_9) ) continue;
    for(VAR_12=VAR_18=0; VAR_12<VAR_11; VAR_12++){
      if( !FUNC_2(VAR_9->aiColumn, VAR_9->nKeyCol, VAR_10->aiColumn[VAR_12]) ) VAR_18++;
    }
    if( VAR_18==0 ){

      VAR_9->nColumn = VAR_9->nKeyCol;
      continue;
    }
    if( FUNC_4(VAR_14, VAR_9, VAR_9->nKeyCol+VAR_18) ) return;
    for(VAR_12=0, VAR_13=VAR_9->nKeyCol; VAR_12<VAR_11; VAR_12++){
      if( !FUNC_2(VAR_9->aiColumn, VAR_9->nKeyCol, VAR_10->aiColumn[VAR_12]) ){
        VAR_9->aiColumn[VAR_13] = VAR_10->aiColumn[VAR_12];
        VAR_9->azColl[VAR_13] = VAR_10->azColl[VAR_12];
        VAR_13++;
      }
    }
    FUNC_1( VAR_9->nColumn>=VAR_9->nKeyCol+VAR_18 );
    FUNC_1( VAR_9->nColumn>=VAR_13 );
  }



  if( VAR_11<VAR_8->nCol ){
    if( FUNC_4(VAR_14, VAR_10, VAR_8->nCol) ) return;
    for(VAR_12=0, VAR_13=VAR_11; VAR_12<VAR_8->nCol; VAR_12++){
      if( !FUNC_2(VAR_10->aiColumn, VAR_13, VAR_12) ){
        FUNC_1( VAR_13<VAR_10->nColumn );
        VAR_10->aiColumn[VAR_13] = VAR_12;
        VAR_10->azColl[VAR_13] = VAR_6;
        VAR_13++;
      }
    }
    FUNC_1( VAR_10->nColumn==VAR_13 );
    FUNC_1( VAR_8->nCol==VAR_13 );
  }else{
    VAR_10->nColumn = VAR_8->nCol;
  }
  FUNC_3(VAR_10);
}

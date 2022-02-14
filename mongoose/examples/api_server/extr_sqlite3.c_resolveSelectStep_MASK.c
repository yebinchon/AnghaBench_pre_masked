
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct SrcList_item {char* zName; int isCorrelated; scalar_t__ pSelect; } ;
struct ExprList_item {int * pExpr; } ;
struct TYPE_26__ {scalar_t__ mallocFailed; } ;
typedef TYPE_3__ sqlite3 ;
typedef int sNC ;
struct TYPE_24__ {TYPE_7__* pNC; } ;
struct TYPE_27__ {TYPE_6__* pParse; TYPE_1__ u; } ;
typedef TYPE_4__ Walker ;
struct TYPE_31__ {int nExpr; struct ExprList_item* a; } ;
struct TYPE_30__ {int ncFlags; struct TYPE_30__* pNext; TYPE_8__* pEList; TYPE_2__* pSrcList; scalar_t__ nRef; TYPE_6__* pParse; } ;
struct TYPE_29__ {char* zAuthContext; scalar_t__ nErr; TYPE_3__* db; } ;
struct TYPE_28__ {int selFlags; struct TYPE_28__* pPrior; TYPE_8__* pOrderBy; int * pWhere; int * pHaving; TYPE_8__* pEList; TYPE_8__* pGroupBy; TYPE_2__* pSrc; int * pOffset; int * pLimit; } ;
struct TYPE_25__ {int nSrc; struct SrcList_item* a; } ;
typedef TYPE_5__ Select ;
typedef TYPE_6__ Parse ;
typedef TYPE_7__ NameContext ;
typedef TYPE_8__ ExprList ;
typedef int Expr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_7__*,int ,int) ;
 scalar_t__ FUNC_3 (TYPE_6__*,TYPE_5__*) ;
 scalar_t__ FUNC_4 (TYPE_7__*,TYPE_5__*,TYPE_8__*,char*) ;
 int FUNC_5 (TYPE_6__*,char*) ;
 scalar_t__ FUNC_6 (TYPE_7__*,int *) ;
 int FUNC_7 (TYPE_6__*,scalar_t__,TYPE_7__*) ;
 int FUNC_8 (TYPE_6__*,TYPE_5__*,TYPE_7__*) ;

__attribute__((used)) static int FUNC_9(Walker *VAR_9, Select *VAR_10){
  NameContext *VAR_11;
  NameContext VAR_12;
  int VAR_13;
  int VAR_14;
  Parse *VAR_15;
  ExprList *VAR_16;
  int VAR_17;
  ExprList *VAR_18;
  Select *VAR_19;
  sqlite3 *VAR_20;


  FUNC_1( VAR_10!=0 );
  if( VAR_10->selFlags & VAR_6 ){
    return VAR_8;
  }
  VAR_11 = VAR_9->u.pNC;
  VAR_15 = VAR_9->pParse;
  VAR_20 = VAR_15->db;
  if( (VAR_10->selFlags & VAR_5)==0 ){
    FUNC_8(VAR_15, VAR_10, VAR_11);
    return (VAR_15->nErr || VAR_20->mallocFailed) ? VAR_7 : VAR_8;
  }

  VAR_13 = VAR_10->pPrior!=0;
  VAR_14 = 0;
  VAR_19 = VAR_10;
  while( VAR_10 ){
    FUNC_1( (VAR_10->selFlags & VAR_5)!=0 );
    FUNC_1( (VAR_10->selFlags & VAR_6)==0 );
    VAR_10->selFlags |= VAR_6;




    FUNC_2(&VAR_12, 0, sizeof(VAR_12));
    VAR_12.pParse = VAR_15;
    if( FUNC_6(&VAR_12, VAR_10->pLimit) ||
        FUNC_6(&VAR_12, VAR_10->pOffset) ){
      return VAR_7;
    }



    for(VAR_17=0; VAR_17<VAR_10->pSrc->nSrc; VAR_17++){
      struct SrcList_item *VAR_21 = &VAR_10->pSrc->a[VAR_17];
      if( VAR_21->pSelect ){
        NameContext *VAR_22;
        int VAR_23 = 0;
        const char *VAR_24 = VAR_15->zAuthContext;






        for(VAR_22=VAR_11; VAR_22; VAR_22=VAR_22->pNext) VAR_23 += VAR_22->nRef;

        if( VAR_21->zName ) VAR_15->zAuthContext = VAR_21->zName;
        FUNC_7(VAR_15, VAR_21->pSelect, VAR_11);
        VAR_15->zAuthContext = VAR_24;
        if( VAR_15->nErr || VAR_20->mallocFailed ) return VAR_7;

        for(VAR_22=VAR_11; VAR_22; VAR_22=VAR_22->pNext) VAR_23 -= VAR_22->nRef;
        FUNC_1( VAR_21->isCorrelated==0 && VAR_23<=0 );
        VAR_21->isCorrelated = (VAR_23!=0);
      }
    }




    VAR_12.ncFlags = VAR_1;
    VAR_12.pSrcList = VAR_10->pSrc;
    VAR_12.pNext = VAR_11;


    VAR_16 = VAR_10->pEList;
    FUNC_1( VAR_16!=0 );
    for(VAR_17=0; VAR_17<VAR_16->nExpr; VAR_17++){
      Expr *VAR_25 = VAR_16->a[VAR_17].pExpr;
      if( FUNC_6(&VAR_12, VAR_25) ){
        return VAR_7;
      }
    }




    FUNC_1( (VAR_10->selFlags & VAR_4)==0 );
    VAR_18 = VAR_10->pGroupBy;
    if( VAR_18 || (VAR_12.ncFlags & VAR_3)!=0 ){
      VAR_10->selFlags |= VAR_4;
    }else{
      VAR_12.ncFlags &= ~VAR_1;
    }



    if( VAR_10->pHaving && !VAR_18 ){
      FUNC_5(VAR_15, "a GROUP BY clause is required before HAVING");
      return VAR_7;
    }
    VAR_12.pEList = VAR_10->pEList;
    VAR_12.ncFlags |= VAR_2;
    if( FUNC_6(&VAR_12, VAR_10->pHaving) ) return VAR_7;
    if( FUNC_6(&VAR_12, VAR_10->pWhere) ) return VAR_7;
    VAR_12.ncFlags &= ~VAR_2;




    VAR_12.pNext = 0;
    VAR_12.ncFlags |= VAR_1;






    if( !VAR_13 && FUNC_4(&VAR_12, VAR_10, VAR_10->pOrderBy, "ORDER") ){
      return VAR_7;
    }
    if( VAR_20->mallocFailed ){
      return VAR_7;
    }




    if( VAR_18 ){
      struct ExprList_item *VAR_26;

      if( FUNC_4(&VAR_12, VAR_10, VAR_18, "GROUP") || VAR_20->mallocFailed ){
        return VAR_7;
      }
      for(VAR_17=0, VAR_26=VAR_18->a; VAR_17<VAR_18->nExpr; VAR_17++, VAR_26++){
        if( FUNC_0(VAR_26->pExpr, VAR_0) ){
          FUNC_5(VAR_15, "aggregate functions are not allowed in "
              "the GROUP BY clause");
          return VAR_7;
        }
      }
    }



    VAR_10 = VAR_10->pPrior;
    VAR_14++;
  }




  if( VAR_13 && FUNC_3(VAR_15, VAR_19) ){
    return VAR_7;
  }

  return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ pVtab; } ;
typedef TYPE_2__ sqlite3_vtab_cursor ;
typedef int sqlite3_context ;
struct TYPE_17__ {int nCol; } ;
struct TYPE_16__ {scalar_t__ ePlan; int pStmt; int apRankArg; int nRankArg; scalar_t__ pRank; int iCsrId; int iSpecial; } ;
struct TYPE_13__ {TYPE_5__* pConfig; } ;
struct TYPE_15__ {TYPE_1__ p; } ;
typedef TYPE_3__ Fts5FullTable ;
typedef TYPE_4__ Fts5Cursor ;
typedef TYPE_5__ Fts5Config ;


 scalar_t__ FUNC_0 (TYPE_4__*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,TYPE_4__*,int *,int ,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static int FUNC_10(
  sqlite3_vtab_cursor *VAR_6,
  sqlite3_context *VAR_7,
  int VAR_8
){
  Fts5FullTable *VAR_9 = (Fts5FullTable*)(VAR_6->pVtab);
  Fts5Config *VAR_10 = VAR_9->p.pConfig;
  Fts5Cursor *VAR_11 = (Fts5Cursor*)VAR_6;
  int VAR_12 = VAR_5;

  FUNC_1( FUNC_0(VAR_11, VAR_0)==0 );

  if( VAR_11->ePlan==VAR_4 ){
    if( VAR_8==VAR_10->nCol ){
      FUNC_8(VAR_7, VAR_11->iSpecial);
    }
  }else

  if( VAR_8==VAR_10->nCol ){




    FUNC_8(VAR_7, VAR_11->iCsrId);
  }else if( VAR_8==VAR_10->nCol+1 ){


    if( VAR_11->ePlan==VAR_3 ){
      FUNC_5(VAR_7, VAR_11);
    }else if(
        VAR_11->ePlan==VAR_1
     || VAR_11->ePlan==VAR_2
    ){
      if( VAR_11->pRank || VAR_5==(VAR_12 = FUNC_3(VAR_11)) ){
        FUNC_2(VAR_11->pRank, VAR_11, VAR_7, VAR_11->nRankArg, VAR_11->apRankArg);
      }
    }
  }else if( !FUNC_4(VAR_9) ){
    VAR_12 = FUNC_6(VAR_11, 1);
    if( VAR_12==VAR_5 ){
      FUNC_9(VAR_7, FUNC_7(VAR_11->pStmt, VAR_8+1));
    }
  }
  return VAR_12;
}

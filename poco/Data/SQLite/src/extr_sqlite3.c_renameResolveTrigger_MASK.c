
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_24__ {TYPE_1__* aDb; } ;
typedef TYPE_4__ sqlite3 ;
typedef int sSrc ;
typedef int sNC ;
struct TYPE_25__ {scalar_t__ pUpsertTargetWhere; scalar_t__ pUpsertWhere; int * pUpsertSet; int * pUpsertTarget; TYPE_8__* pUpsertSrc; } ;
typedef TYPE_5__ Upsert ;
struct TYPE_26__ {TYPE_5__* pUpsert; int * pExprList; scalar_t__ pWhere; scalar_t__ zTarget; scalar_t__ pSelect; struct TYPE_26__* pNext; } ;
typedef TYPE_6__ TriggerStep ;
struct TYPE_27__ {int pTabSchema; TYPE_6__* step_list; scalar_t__ pWhen; int op; int table; } ;
typedef TYPE_7__ Trigger ;
typedef int Table ;
struct TYPE_29__ {int rc; scalar_t__ nErr; int * pTriggerTab; int eTriggerOp; TYPE_7__* pNewTrigger; TYPE_4__* db; } ;
struct TYPE_23__ {TYPE_5__* pUpsert; } ;
struct TYPE_28__ {int nSrc; struct TYPE_28__* pSrcList; scalar_t__ ncFlags; TYPE_3__ uNC; TYPE_2__* a; TYPE_9__* pParse; } ;
struct TYPE_22__ {int * pTab; scalar_t__ zName; } ;
struct TYPE_21__ {int zDbSName; } ;
typedef TYPE_8__ SrcList ;
typedef TYPE_9__ Parse ;
typedef TYPE_8__ NameContext ;
typedef int ExprList ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_8__*,int ,int) ;
 int * FUNC_3 (TYPE_4__*,int ,int ) ;
 int * FUNC_4 (TYPE_9__*,int ,scalar_t__,char const*) ;
 int FUNC_5 (TYPE_8__*,int *) ;
 int FUNC_6 (TYPE_8__*,scalar_t__) ;
 size_t FUNC_7 (TYPE_4__*,int) ;
 int FUNC_8 (TYPE_9__*,scalar_t__,TYPE_8__*) ;
 int FUNC_9 (TYPE_9__*,int *) ;

__attribute__((used)) static int FUNC_10(Parse *VAR_3, const char *VAR_4){
  sqlite3 *VAR_5 = VAR_3->db;
  Trigger *VAR_6 = VAR_3->pNewTrigger;
  TriggerStep *VAR_7;
  NameContext VAR_8;
  int VAR_9 = VAR_2;

  FUNC_2(&VAR_8, 0, sizeof(VAR_8));
  VAR_8.pParse = VAR_3;
  FUNC_1( VAR_6->pTabSchema );
  VAR_3->pTriggerTab = FUNC_3(VAR_5, VAR_6->table,
      VAR_5->aDb[FUNC_7(VAR_5, VAR_6->pTabSchema)].zDbSName
  );
  VAR_3->eTriggerOp = VAR_6->op;


  if( FUNC_0(VAR_3->pTriggerTab) ){
    VAR_9 = FUNC_9(VAR_3, VAR_3->pTriggerTab);
  }


  if( VAR_9==VAR_2 && VAR_6->pWhen ){
    VAR_9 = FUNC_6(&VAR_8, VAR_6->pWhen);
  }

  for(VAR_7=VAR_6->step_list; VAR_9==VAR_2 && VAR_7; VAR_7=VAR_7->pNext){
    if( VAR_7->pSelect ){
      FUNC_8(VAR_3, VAR_7->pSelect, &VAR_8);
      if( VAR_3->nErr ) VAR_9 = VAR_3->rc;
    }
    if( VAR_9==VAR_2 && VAR_7->zTarget ){
      Table *VAR_10 = FUNC_4(VAR_3, 0, VAR_7->zTarget, VAR_4);
      if( VAR_10==0 ){
        VAR_9 = VAR_1;
      }else if( VAR_2==(VAR_9 = FUNC_9(VAR_3, VAR_10)) ){
        SrcList VAR_11;
        FUNC_2(&VAR_11, 0, sizeof(VAR_11));
        VAR_11.nSrc = 1;
        VAR_11.a[0].zName = VAR_7->zTarget;
        VAR_11.a[0].pTab = VAR_10;
        VAR_8.pSrcList = &VAR_11;
        if( VAR_7->pWhere ){
          VAR_9 = FUNC_6(&VAR_8, VAR_7->pWhere);
        }
        if( VAR_9==VAR_2 ){
          VAR_9 = FUNC_5(&VAR_8, VAR_7->pExprList);
        }
        FUNC_1( !VAR_7->pUpsert || (!VAR_7->pWhere && !VAR_7->pExprList) );
        if( VAR_7->pUpsert ){
          Upsert *VAR_12 = VAR_7->pUpsert;
          FUNC_1( VAR_9==VAR_2 );
          VAR_12->pUpsertSrc = &VAR_11;
          VAR_8.uNC.pUpsert = VAR_12;
          VAR_8.ncFlags = VAR_0;
          VAR_9 = FUNC_5(&VAR_8, VAR_12->pUpsertTarget);
          if( VAR_9==VAR_2 ){
            ExprList *VAR_13 = VAR_12->pUpsertSet;
            VAR_9 = FUNC_5(&VAR_8, VAR_13);
          }
          if( VAR_9==VAR_2 ){
            VAR_9 = FUNC_6(&VAR_8, VAR_12->pUpsertWhere);
          }
          if( VAR_9==VAR_2 ){
            VAR_9 = FUNC_6(&VAR_8, VAR_12->pUpsertTargetWhere);
          }
          VAR_8.ncFlags = 0;
        }
        VAR_8.pSrcList = 0;
      }
    }
  }
  return VAR_9;
}

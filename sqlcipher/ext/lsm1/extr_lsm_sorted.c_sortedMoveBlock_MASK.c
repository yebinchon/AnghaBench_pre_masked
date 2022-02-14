
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;


struct RedirectEntry {int dummy; } ;
struct TYPE_21__ {TYPE_3__* pWorker; int pFS; int pEnv; } ;
typedef TYPE_2__ lsm_db ;
struct TYPE_25__ {int iTo; int iFrom; } ;
struct TYPE_19__ {TYPE_1__* pRedirect; } ;
struct TYPE_24__ {scalar_t__ pNext; scalar_t__ nRight; TYPE_14__ lhs; } ;
struct TYPE_23__ {int iFrom; scalar_t__ iSeen; } ;
struct TYPE_20__ {int n; TYPE_7__* a; } ;
struct TYPE_22__ {TYPE_1__ redirect; scalar_t__ nBlock; } ;
typedef TYPE_3__ Snapshot ;
typedef TYPE_4__ MoveBlockCtx ;
typedef TYPE_5__ Level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int,int*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 TYPE_5__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_14__*,int,int) ;
 int FUNC_6 (int ) ;
 TYPE_7__* FUNC_7 (int ,int,int*) ;
 int FUNC_8 (TYPE_2__*,TYPE_3__*,int ,int ,char*) ;
 int FUNC_9 (TYPE_2__*,int,int ,TYPE_4__*) ;
 int FUNC_10 (TYPE_7__*,TYPE_7__*,int) ;
 int VAR_3 ;
 int FUNC_11 (char*,char*,int,int) ;

__attribute__((used)) static int FUNC_12(lsm_db *VAR_4, int *VAR_5){
  Snapshot *VAR_6 = VAR_4->pWorker;
  Level *VAR_7 = FUNC_3(VAR_6);
  int VAR_8;
  int VAR_9;
  int VAR_10;

  MoveBlockCtx VAR_11;

  FUNC_0( VAR_7->pNext==0 && VAR_7->nRight==0 );
  FUNC_0( VAR_6->redirect.n<=VAR_1 );

  *VAR_5 = 0;



  if( VAR_6->redirect.n>=VAR_1 ) return VAR_2;






  VAR_11.iSeen = VAR_6->nBlock+1;
  VAR_11.iFrom = 0;
  VAR_10 = FUNC_9(VAR_4, 1, VAR_3, &VAR_11);
  if( VAR_10!=VAR_2 || VAR_11.iFrom==0 ) return VAR_10;
  VAR_8 = VAR_11.iFrom;



  VAR_10 = FUNC_1(VAR_4, VAR_8, &VAR_9);
  if( VAR_10!=VAR_2 || VAR_9==0 ) return VAR_10;
  FUNC_0( VAR_9!=1 && VAR_9<VAR_8 );

  VAR_10 = FUNC_5(VAR_4->pFS, &VAR_7->lhs, VAR_9, VAR_8);
  if( VAR_10==VAR_2 ){
    if( VAR_6->redirect.a==0 ){
      int VAR_12 = sizeof(struct RedirectEntry) * VAR_1;
      VAR_6->redirect.a = FUNC_7(VAR_4->pEnv, VAR_12, &VAR_10);
    }
    if( VAR_10==VAR_2 ){


      int VAR_13;
      for(VAR_13=0; VAR_13<VAR_6->redirect.n; VAR_13++){
        if( VAR_6->redirect.a[VAR_13].iTo==VAR_8 ) break;
      }

      if( VAR_13==VAR_6->redirect.n ){

        FUNC_10(&VAR_6->redirect.a[1], &VAR_6->redirect.a[0],
            sizeof(struct RedirectEntry) * VAR_6->redirect.n
            );
        VAR_6->redirect.a[0].iFrom = VAR_8;
        VAR_6->redirect.a[0].iTo = VAR_9;
        VAR_6->redirect.n++;
      }else{

        VAR_6->redirect.a[VAR_13].iTo = VAR_9;
      }

      VAR_10 = FUNC_2(VAR_4, VAR_8);

      *VAR_5 = FUNC_4(VAR_4->pFS) / FUNC_6(VAR_4->pFS);
      VAR_7->lhs.pRedirect = &VAR_6->redirect;
    }
  }
  return VAR_10;
}

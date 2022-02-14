
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_10__ {scalar_t__ busy; } ;
struct TYPE_12__ {int mDbFlags; int nDb; int pRollbackArg; int (* xRollbackCallback ) (int ) ;int autoCommit; int flags; scalar_t__ nDeferredImmCons; scalar_t__ nDeferredCons; TYPE_2__* aDb; TYPE_1__ init; int mutex; } ;
typedef TYPE_3__ sqlite3 ;
struct TYPE_11__ {int * pBt; } ;
typedef int Btree ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

void FUNC_12(sqlite3 *VAR_2, int VAR_3){
  int VAR_4;
  int VAR_5 = 0;
  int VAR_6;
  FUNC_0( FUNC_10(VAR_2->mutex) );
  FUNC_1();







  FUNC_2(VAR_2);
  VAR_6 = (VAR_2->mDbFlags & VAR_0)!=0 && VAR_2->init.busy==0;

  for(VAR_4=0; VAR_4<VAR_2->nDb; VAR_4++){
    Btree *VAR_7 = VAR_2->aDb[VAR_4].pBt;
    if( VAR_7 ){
      if( FUNC_3(VAR_7) ){
        VAR_5 = 1;
      }
      FUNC_5(VAR_7, VAR_3, !VAR_6);
    }
  }
  FUNC_9(VAR_2);
  FUNC_6();

  if( VAR_6 ){
    FUNC_7(VAR_2, 0);
    FUNC_8(VAR_2);
  }
  FUNC_4(VAR_2);


  VAR_2->nDeferredCons = 0;
  VAR_2->nDeferredImmCons = 0;
  VAR_2->flags &= ~(u64)VAR_1;


  if( VAR_2->xRollbackCallback && (VAR_5 || !VAR_2->autoCommit) ){
    VAR_2->xRollbackCallback(VAR_2->pRollbackArg);
  }
}

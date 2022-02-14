
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_14__ {struct TYPE_14__* pNextLoop; } ;
typedef TYPE_4__ WhereLoop ;
struct TYPE_12__ {int aInLoop; } ;
struct TYPE_13__ {TYPE_2__ in; } ;
struct TYPE_15__ {TYPE_3__ u; TYPE_1__* pWLoop; } ;
typedef TYPE_5__ WhereLevel ;
struct TYPE_16__ {int nLevel; TYPE_4__* pLoops; int sWC; TYPE_5__* a; } ;
typedef TYPE_6__ WhereInfo ;
struct TYPE_11__ {int wsFlags; } ;


 scalar_t__ FUNC_0 (TYPE_6__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_6__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_4__*) ;

__attribute__((used)) static void FUNC_5(sqlite3 *VAR_1, WhereInfo *VAR_2){
  if( FUNC_0(VAR_2) ){
    int VAR_3;
    for(VAR_3=0; VAR_3<VAR_2->nLevel; VAR_3++){
      WhereLevel *VAR_4 = &VAR_2->a[VAR_3];
      if( VAR_4->pWLoop && (VAR_4->pWLoop->wsFlags & VAR_0) ){
        FUNC_1(VAR_1, VAR_4->u.in.aInLoop);
      }
    }
    FUNC_3(&VAR_2->sWC);
    while( VAR_2->pLoops ){
      WhereLoop *VAR_5 = VAR_2->pLoops;
      VAR_2->pLoops = VAR_5->pNextLoop;
      FUNC_4(VAR_1, VAR_5);
    }
    FUNC_2(VAR_1, VAR_2);
  }
}

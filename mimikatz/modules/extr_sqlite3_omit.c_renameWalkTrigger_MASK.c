
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int Walker ;
struct TYPE_5__ {int pUpsertTargetWhere; int pUpsertWhere; int pUpsertSet; int pUpsertTarget; } ;
typedef TYPE_1__ Upsert ;
struct TYPE_6__ {TYPE_1__* pUpsert; int pExprList; int pWhere; int pSelect; struct TYPE_6__* pNext; } ;
typedef TYPE_2__ TriggerStep ;
struct TYPE_7__ {TYPE_2__* step_list; int pWhen; } ;
typedef TYPE_3__ Trigger ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(Walker *VAR_0, Trigger *VAR_1){
  TriggerStep *VAR_2;


  FUNC_0(VAR_0, VAR_1->pWhen);


  for(VAR_2=VAR_1->step_list; VAR_2; VAR_2=VAR_2->pNext){
    FUNC_2(VAR_0, VAR_2->pSelect);
    FUNC_0(VAR_0, VAR_2->pWhere);
    FUNC_1(VAR_0, VAR_2->pExprList);
    if( VAR_2->pUpsert ){
      Upsert *VAR_3 = VAR_2->pUpsert;
      FUNC_1(VAR_0, VAR_3->pUpsertTarget);
      FUNC_1(VAR_0, VAR_3->pUpsertSet);
      FUNC_0(VAR_0, VAR_3->pUpsertWhere);
      FUNC_0(VAR_0, VAR_3->pUpsertTargetWhere);
    }
  }
}

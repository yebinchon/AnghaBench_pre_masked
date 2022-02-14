
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pUpsertWhere; int pUpsertSet; int pUpsertTargetWhere; int pUpsertTarget; } ;
typedef TYPE_1__ Upsert ;
struct TYPE_5__ {struct TYPE_5__* pNext; TYPE_1__* pUpsert; int pExprList; int pWhere; int pSelect; } ;
typedef TYPE_2__ TriggerStep ;
typedef int DbFixer ;


 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;

int FUNC_3(
  DbFixer *VAR_0,
  TriggerStep *VAR_1
){
  while( VAR_1 ){
    if( FUNC_2(VAR_0, VAR_1->pSelect) ){
      return 1;
    }
    if( FUNC_0(VAR_0, VAR_1->pWhere) ){
      return 1;
    }
    if( FUNC_1(VAR_0, VAR_1->pExprList) ){
      return 1;
    }

    if( VAR_1->pUpsert ){
      Upsert *VAR_2 = VAR_1->pUpsert;
      if( FUNC_1(VAR_0, VAR_2->pUpsertTarget)
       || FUNC_0(VAR_0, VAR_2->pUpsertTargetWhere)
       || FUNC_1(VAR_0, VAR_2->pUpsertSet)
       || FUNC_0(VAR_0, VAR_2->pUpsertWhere)
      ){
        return 1;
      }
    }

    VAR_1 = VAR_1->pNext;
  }
  return 0;
}

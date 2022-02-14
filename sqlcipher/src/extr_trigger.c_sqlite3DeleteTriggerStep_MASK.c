
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_4__ {struct TYPE_4__* zSpan; int pUpsert; int pIdList; int pSelect; int pExprList; int pWhere; struct TYPE_4__* pNext; } ;
typedef TYPE_1__ TriggerStep ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;

void FUNC_6(sqlite3 *VAR_0, TriggerStep *VAR_1){
  while( VAR_1 ){
    TriggerStep * VAR_2 = VAR_1;
    VAR_1 = VAR_1->pNext;

    FUNC_1(VAR_0, VAR_2->pWhere);
    FUNC_2(VAR_0, VAR_2->pExprList);
    FUNC_4(VAR_0, VAR_2->pSelect);
    FUNC_3(VAR_0, VAR_2->pIdList);
    FUNC_5(VAR_0, VAR_2->pUpsert);
    FUNC_0(VAR_0, VAR_2->zSpan);

    FUNC_0(VAR_0, VAR_2);
  }
}

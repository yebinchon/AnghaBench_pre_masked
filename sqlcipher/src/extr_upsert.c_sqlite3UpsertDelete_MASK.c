
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_4__ {int pUpsertWhere; int pUpsertSet; int pUpsertTargetWhere; int pUpsertTarget; } ;
typedef TYPE_1__ Upsert ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(sqlite3 *VAR_0, Upsert *VAR_1){
  if( VAR_1 ){
    FUNC_2(VAR_0, VAR_1->pUpsertTarget);
    FUNC_1(VAR_0, VAR_1->pUpsertTargetWhere);
    FUNC_2(VAR_0, VAR_1->pUpsertSet);
    FUNC_1(VAR_0, VAR_1->pUpsertWhere);
    FUNC_0(VAR_0, VAR_1);
  }
}

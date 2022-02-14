
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_5__ {int pUpsertWhere; int pUpsertSet; int pUpsertTargetWhere; int pUpsertTarget; } ;
typedef TYPE_1__ Upsert ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 TYPE_1__* FUNC_2 (int *,int ,int ,int ,int ) ;

Upsert *FUNC_3(sqlite3 *VAR_0, Upsert *VAR_1){
  if( VAR_1==0 ) return 0;
  return FUNC_2(VAR_0,
           FUNC_1(VAR_0, VAR_1->pUpsertTarget, 0),
           FUNC_0(VAR_0, VAR_1->pUpsertTargetWhere, 0),
           FUNC_1(VAR_0, VAR_1->pUpsertSet, 0),
           FUNC_0(VAR_0, VAR_1->pUpsertWhere, 0)
         );
}

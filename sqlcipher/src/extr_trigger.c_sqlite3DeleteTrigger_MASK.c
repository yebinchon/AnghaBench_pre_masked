
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_4__ {int pColumns; int pWhen; struct TYPE_4__* table; struct TYPE_4__* zName; int step_list; } ;
typedef TYPE_1__ Trigger ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

void FUNC_4(sqlite3 *VAR_0, Trigger *VAR_1){
  if( VAR_1==0 ) return;
  FUNC_1(VAR_0, VAR_1->step_list);
  FUNC_0(VAR_0, VAR_1->zName);
  FUNC_0(VAR_0, VAR_1->table);
  FUNC_2(VAR_0, VAR_1->pWhen);
  FUNC_3(VAR_0, VAR_1->pColumns);
  FUNC_0(VAR_0, VAR_1);
}

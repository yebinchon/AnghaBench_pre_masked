
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void (* xRollbackCallback ) (void*) ;int mutex; void* pRollbackArg; } ;
typedef TYPE_1__ sqlite3 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void *FUNC_3(
  sqlite3 *VAR_1,
  void (*VAR_2)(void*),
  void *VAR_3
){
  void *VAR_4;







  FUNC_1(VAR_1->mutex);
  VAR_4 = VAR_1->pRollbackArg;
  VAR_1->xRollbackCallback = VAR_2;
  VAR_1->pRollbackArg = VAR_3;
  FUNC_2(VAR_1->mutex);
  return VAR_4;
}

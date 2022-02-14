
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* pNext; TYPE_1__* pDatabase; } ;
typedef TYPE_2__ lsm_db ;
struct TYPE_6__ {TYPE_2__* pConn; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*,char*,TYPE_2__*) ;

void FUNC_2(lsm_db *VAR_0){
  lsm_db *VAR_1;
  for(VAR_1=VAR_0->pDatabase->pConn; VAR_1; VAR_1=VAR_1->pNext){
    FUNC_1("%s connection %p ", ((VAR_1==VAR_0)?"*":""), VAR_1);
    FUNC_0(VAR_1);
  }
}

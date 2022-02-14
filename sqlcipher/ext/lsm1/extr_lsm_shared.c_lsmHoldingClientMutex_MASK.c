
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* pDatabase; int pEnv; } ;
typedef TYPE_2__ lsm_db ;
struct TYPE_4__ {int pClientMutex; } ;


 int FUNC_0 (int ,int ) ;

int FUNC_1(lsm_db *VAR_0){
  return FUNC_0(VAR_0->pEnv, VAR_0->pDatabase->pClientMutex);
}

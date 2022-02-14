
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pEnv; TYPE_3__* pDatabase; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_8__ {int pClientMutex; TYPE_2__* pLsmFile; } ;
struct TYPE_7__ {struct TYPE_7__* pNext; } ;
typedef TYPE_2__ LsmFile ;
typedef TYPE_3__ Database ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

LsmFile *FUNC_2(lsm_db *VAR_0){
  LsmFile *VAR_1;
  Database *VAR_2 = VAR_0->pDatabase;
  FUNC_0(VAR_0->pEnv, VAR_2->pClientMutex);
  if( (VAR_1 = VAR_2->pLsmFile)!=0 ){
    VAR_2->pLsmFile = VAR_1->pNext;
  }
  FUNC_1(VAR_0->pEnv, VAR_2->pClientMutex);
  return VAR_1;
}

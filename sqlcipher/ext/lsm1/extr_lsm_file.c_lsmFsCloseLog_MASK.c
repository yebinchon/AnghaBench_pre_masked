
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* pFS; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_5__ {scalar_t__ fdLog; int pEnv; } ;
typedef TYPE_2__ FileSystem ;


 int FUNC_0 (int ,scalar_t__) ;

void FUNC_1(lsm_db *VAR_0){
  FileSystem *VAR_1 = VAR_0->pFS;
  if( VAR_1->fdLog ){
    FUNC_0(VAR_1->pEnv, VAR_1->fdLog);
    VAR_1->fdLog = 0;
  }
}

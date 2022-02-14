
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* pDatabase; } ;
typedef TYPE_2__ lsm_db ;
struct TYPE_4__ {scalar_t__ bMultiProc; } ;



int FUNC_0(lsm_db *VAR_0){
  return VAR_0->pDatabase && VAR_0->pDatabase->bMultiProc;
}

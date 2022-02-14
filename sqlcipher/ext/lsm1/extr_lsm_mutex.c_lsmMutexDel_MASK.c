
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lsm_mutex ;
struct TYPE_3__ {int (* xMutexDel ) (int *) ;} ;
typedef TYPE_1__ lsm_env ;


 int FUNC_0 (int *) ;

void FUNC_1(lsm_env *VAR_0, lsm_mutex *VAR_1){
  if( VAR_1 ) VAR_0->xMutexDel(VAR_1);
}

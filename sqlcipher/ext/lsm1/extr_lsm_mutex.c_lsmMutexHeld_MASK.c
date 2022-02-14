
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lsm_mutex ;
struct TYPE_3__ {int (* xMutexHeld ) (int *) ;} ;
typedef TYPE_1__ lsm_env ;


 int FUNC_0 (int *) ;

int FUNC_1(lsm_env *VAR_0, lsm_mutex *VAR_1){
  return VAR_0->xMutexHeld ? VAR_0->xMutexHeld(VAR_1) : 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lsm_mutex ;
struct TYPE_4__ {int (* xMutexNew ) (TYPE_1__*,int **) ;} ;
typedef TYPE_1__ lsm_env ;


 int FUNC_0 (TYPE_1__*,int **) ;

int FUNC_1(lsm_env *VAR_0, lsm_mutex **VAR_1){
  return VAR_0->xMutexNew(VAR_0, VAR_1);
}

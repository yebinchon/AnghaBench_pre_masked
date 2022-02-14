
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lsm_mutex ;
struct TYPE_4__ {int (* xMutexStatic ) (TYPE_1__*,int,int **) ;} ;
typedef TYPE_1__ lsm_env ;


 int FUNC_0 (TYPE_1__*,int,int **) ;

int FUNC_1(lsm_env *VAR_0, int VAR_1, lsm_mutex **VAR_2){
  return VAR_0->xMutexStatic(VAR_0, VAR_1, VAR_2);
}

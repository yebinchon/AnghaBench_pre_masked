
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* xSleep ) (TYPE_1__*,int) ;} ;
typedef TYPE_1__ lsm_env ;


 int FUNC_0 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_1 () ;

__attribute__((used)) static int FUNC_2(lsm_env *VAR_0, int VAR_1){
  lsm_env *VAR_2 = FUNC_1();
  return VAR_2->xSleep(VAR_2, VAR_1);
}

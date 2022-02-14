
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* (* xMalloc ) (TYPE_1__*,size_t) ;} ;
typedef TYPE_1__ lsm_env ;


 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (TYPE_1__*,size_t) ;

void *FUNC_2(lsm_env *VAR_0, size_t VAR_1){
  FUNC_0( VAR_0 );
  return VAR_0->xMalloc(VAR_0, VAR_1);
}

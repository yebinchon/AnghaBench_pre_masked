
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* xFree ) (TYPE_1__*,void*) ;} ;
typedef TYPE_1__ lsm_env ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,void*) ;

void FUNC_2(lsm_env *VAR_0, void *VAR_1){
  FUNC_0( VAR_0 );
  VAR_0->xFree(VAR_0, VAR_1);
}

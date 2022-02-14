
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* param; void (* destroy ) (void*) ;} ;
typedef TYPE_1__ obs_properties_t ;


 void FUNC_0 (void*) ;

void FUNC_1(obs_properties_t *VAR_0, void *VAR_1,
         void (*VAR_2)(void *VAR_3))
{
 if (!VAR_0)
  return;

 if (VAR_0->param && VAR_0->destroy)
  VAR_0->destroy(VAR_0->param);

 VAR_0->param = VAR_1;
 VAR_0->destroy = VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int destroy; int active; int context; } ;
typedef TYPE_1__ obs_service_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

void FUNC_2(obs_service_t *VAR_0)
{
 if (VAR_0) {
  FUNC_1(&VAR_0->context);

  VAR_0->destroy = 1;



  if (!VAR_0->active)
   FUNC_0(VAR_0);
 }
}

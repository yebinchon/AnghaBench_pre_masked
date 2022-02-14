
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* post_load ) () ;struct TYPE_3__* next; } ;
typedef TYPE_1__ obs_module_t ;
struct TYPE_4__ {TYPE_1__* first_module; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 () ;

void FUNC_1(void)
{
 for (obs_module_t *VAR_1 = VAR_0->first_module; !!VAR_1; VAR_1 = VAR_1->next)
  if (VAR_1->post_load)
   VAR_1->post_load();
}

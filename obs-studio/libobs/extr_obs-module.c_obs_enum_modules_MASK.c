
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct obs_module {struct obs_module* next; } ;
typedef int (* obs_enum_module_callback_t ) (void*,struct obs_module*) ;
struct TYPE_2__ {struct obs_module* first_module; } ;


 TYPE_1__* VAR_0 ;

void FUNC_0(obs_enum_module_callback_t VAR_1, void *VAR_2)
{
 struct obs_module *VAR_3;
 if (!VAR_0)
  return;

 VAR_3 = VAR_0->first_module;
 while (VAR_3) {
  VAR_1(VAR_2, VAR_3);
  VAR_3 = VAR_3->next;
 }
}

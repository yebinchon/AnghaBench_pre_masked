
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct obs_property {struct obs_property* next; } ;
struct TYPE_4__ {scalar_t__ param; int (* destroy ) (scalar_t__) ;struct obs_property* first_property; } ;
typedef TYPE_1__ obs_properties_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct obs_property*) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(obs_properties_t *VAR_0)
{
 if (VAR_0) {
  struct obs_property *VAR_1 = VAR_0->first_property;

  if (VAR_0->destroy && VAR_0->param)
   VAR_0->destroy(VAR_0->param);

  while (VAR_1) {
   struct obs_property *VAR_2 = VAR_1->next;
   FUNC_1(VAR_1);
   VAR_1 = VAR_2;
  }

  FUNC_0(VAR_0);
 }
}

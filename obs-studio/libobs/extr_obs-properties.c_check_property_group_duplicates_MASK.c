
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; int name; } ;
typedef TYPE_1__ obs_property_t ;
struct TYPE_7__ {TYPE_1__* first_property; } ;
typedef TYPE_2__ obs_properties_t ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static bool FUNC_1(obs_properties_t *VAR_0,
         obs_properties_t *VAR_1)
{
 obs_property_t *VAR_2 = VAR_1->first_property;
 while (VAR_2) {
  if (FUNC_0(VAR_0, VAR_2->name)) {
   return 1;
  }

  VAR_2 = VAR_2->next;
 }

 return 0;
}

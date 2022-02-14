
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; struct TYPE_7__* next; } ;
typedef TYPE_1__ obs_property_t ;
struct TYPE_8__ {TYPE_1__* first_property; } ;
typedef TYPE_2__ obs_properties_t ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_1(obs_properties_t *VAR_1,
        obs_properties_t *VAR_2)
{

 obs_property_t *VAR_3 = VAR_2->first_property;
 while (VAR_3) {
  if (VAR_3->type == VAR_0) {
   obs_properties_t *VAR_4 =
    FUNC_0(VAR_3);
   if (VAR_4 == VAR_1) {

    return 1;
   } else if (VAR_4 == VAR_2) {


    return 1;
   }
   FUNC_1(VAR_4, VAR_2);
  }

  VAR_3 = VAR_3->next;
 }

 return 0;
}

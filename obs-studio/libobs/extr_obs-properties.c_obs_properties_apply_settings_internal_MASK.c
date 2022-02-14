
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct obs_property {scalar_t__ type; struct obs_property* next; int priv; int (* modified2 ) (int ,TYPE_1__*,struct obs_property*,int *) ;int (* modified ) (TYPE_1__*,struct obs_property*,int *) ;} ;
struct TYPE_7__ {struct obs_property* first_property; } ;
typedef TYPE_1__ obs_properties_t ;
typedef int obs_data_t ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct obs_property*) ;
 int FUNC_1 (TYPE_1__*,struct obs_property*,int *) ;
 int FUNC_2 (int ,TYPE_1__*,struct obs_property*,int *) ;

void FUNC_3(obs_properties_t *VAR_1,
         obs_data_t *VAR_2,
         obs_properties_t *VAR_3)
{
 struct obs_property *VAR_4;

 VAR_4 = VAR_1->first_property;
 while (VAR_4) {
  if (VAR_4->type == VAR_0) {
   FUNC_3(
    FUNC_0(VAR_4), VAR_2,
    VAR_3);
  }
  if (VAR_4->modified)
   VAR_4->modified(VAR_3, VAR_4, VAR_2);
  else if (VAR_4->modified2)
   VAR_4->modified2(VAR_4->priv, VAR_3, VAR_4, VAR_2);
  VAR_4 = VAR_4->next;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct obs_data_item {struct obs_data_item* next; } ;
struct TYPE_5__ {struct obs_data_item* first_item; } ;
typedef TYPE_1__ obs_data_t ;


 int FUNC_0 (TYPE_1__*,struct obs_data_item*) ;

void FUNC_1(obs_data_t *VAR_0, obs_data_t *VAR_1)
{
 struct obs_data_item *VAR_2;

 if (!VAR_0 || !VAR_1 || VAR_0 == VAR_1)
  return;

 VAR_2 = VAR_1->first_item;

 while (VAR_2) {
  FUNC_0(VAR_0, VAR_2);
  VAR_2 = VAR_2->next;
 }
}

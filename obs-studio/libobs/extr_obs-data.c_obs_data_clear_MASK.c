
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct obs_data_item {struct obs_data_item* next; } ;
struct TYPE_3__ {struct obs_data_item* first_item; } ;
typedef TYPE_1__ obs_data_t ;


 int FUNC_0 (struct obs_data_item*) ;

void FUNC_1(obs_data_t *VAR_0)
{
 struct obs_data_item *VAR_1;

 if (!VAR_0)
  return;

 VAR_1 = VAR_0->first_item;

 while (VAR_1) {
  FUNC_0(VAR_1);
  VAR_1 = VAR_1->next;
 }
}

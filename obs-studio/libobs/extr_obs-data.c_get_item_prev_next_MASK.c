
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_data_item {struct obs_data_item* next; } ;
struct obs_data {struct obs_data_item* first_item; } ;



__attribute__((used)) static struct obs_data_item **FUNC_0(struct obs_data *VAR_0,
       struct obs_data_item *VAR_1)
{
 if (!VAR_1 || !VAR_0)
  return ((void*)0);

 struct obs_data_item **VAR_2 = &VAR_0->first_item;
 struct obs_data_item *VAR_3 = VAR_0->first_item;

 while (VAR_3) {
  if (VAR_3 == VAR_1)
   return VAR_2;

  VAR_2 = &VAR_3->next;
  VAR_3 = VAR_3->next;
 }

 return ((void*)0);
}

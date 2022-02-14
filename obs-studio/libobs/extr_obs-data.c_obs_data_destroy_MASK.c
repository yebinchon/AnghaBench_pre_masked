
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_data_item {struct obs_data_item* next; } ;
struct obs_data {int json; struct obs_data_item* first_item; } ;


 int FUNC_0 (struct obs_data*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct obs_data_item**) ;

__attribute__((used)) static inline void FUNC_3(struct obs_data *VAR_0)
{
 struct obs_data_item *VAR_1 = VAR_0->first_item;

 while (VAR_1) {
  struct obs_data_item *VAR_2 = VAR_1->next;
  FUNC_2(&VAR_1);
  VAR_1 = VAR_2;
 }


 FUNC_1(VAR_0->json);
 FUNC_0(VAR_0);
}

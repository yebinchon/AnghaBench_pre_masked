
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_data_item {int parent; } ;


 struct obs_data_item** FUNC_0 (int ,struct obs_data_item*) ;

__attribute__((used)) static inline void FUNC_1(struct obs_data_item *VAR_0,
       struct obs_data_item *VAR_1)
{
 struct obs_data_item **VAR_2 =
  FUNC_0(VAR_1->parent, VAR_0);

 if (VAR_2)
  *VAR_2 = VAR_1;
}

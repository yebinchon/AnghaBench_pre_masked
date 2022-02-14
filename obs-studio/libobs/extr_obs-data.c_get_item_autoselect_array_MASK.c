
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_data_item {int autoselect_size; } ;
typedef int obs_data_array_t ;


 scalar_t__ FUNC_0 (struct obs_data_item*) ;

__attribute__((used)) static inline obs_data_array_t *
FUNC_1(struct obs_data_item *VAR_0)
{
 if (!VAR_0 || !VAR_0->autoselect_size)
  return ((void*)0);

 return *(obs_data_array_t **)FUNC_0(VAR_0);
}

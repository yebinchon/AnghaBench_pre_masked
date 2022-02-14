
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_data_item {int autoselect_size; int default_size; int data_size; } ;


 void* FUNC_0 (struct obs_data_item*) ;

__attribute__((used)) static inline void *FUNC_1(struct obs_data_item *VAR_0)
{
 if (!VAR_0->data_size && !VAR_0->default_size && !VAR_0->autoselect_size)
  return ((void*)0);
 return FUNC_0(VAR_0);
}

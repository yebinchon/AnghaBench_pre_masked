
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_data_item {scalar_t__ autoselect_size; } ;


 void* FUNC_0 (struct obs_data_item*) ;

__attribute__((used)) static inline void *FUNC_1(struct obs_data_item *VAR_0)
{
 return VAR_0->autoselect_size ? FUNC_0(VAR_0) : ((void*)0);
}

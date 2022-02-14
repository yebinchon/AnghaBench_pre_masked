
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_data_item {int dummy; } ;
typedef int obs_data_array_t ;


 scalar_t__ FUNC_0 (struct obs_data_item*) ;

__attribute__((used)) static inline obs_data_array_t *FUNC_1(struct obs_data_item *VAR_0)
{
 obs_data_array_t **VAR_1;

 if (!VAR_0)
  return ((void*)0);

 VAR_1 = (obs_data_array_t **)FUNC_0(VAR_0);
 return VAR_1 ? *VAR_1 : ((void*)0);
}

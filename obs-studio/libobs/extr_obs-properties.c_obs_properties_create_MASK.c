
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_properties {int first_property; int * last; } ;
typedef struct obs_properties obs_properties_t ;


 struct obs_properties* FUNC_0 (int) ;

obs_properties_t *FUNC_1(void)
{
 struct obs_properties *VAR_0;
 VAR_0 = FUNC_0(sizeof(struct obs_properties));
 VAR_0->last = &VAR_0->first_property;
 return VAR_0;
}

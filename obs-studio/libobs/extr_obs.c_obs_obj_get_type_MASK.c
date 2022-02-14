
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_context_data {int type; } ;
typedef enum obs_obj_type { ____Placeholder_obs_obj_type } obs_obj_type ;


 int VAR_0 ;

enum obs_obj_type FUNC_0(void *VAR_1)
{
 struct obs_context_data *VAR_2 = VAR_1;
 return VAR_2 ? VAR_2->type : VAR_0;
}

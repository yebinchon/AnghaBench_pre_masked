
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_data_item {int type; } ;
typedef enum obs_data_type { ____Placeholder_obs_data_type } obs_data_type ;



__attribute__((used)) static inline bool FUNC_0(struct obs_data_item *VAR_0,
         enum obs_data_type VAR_1)
{
 return VAR_0 && VAR_0->type == VAR_1;
}

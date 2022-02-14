
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_property {int type; } ;
typedef enum obs_property_type { ____Placeholder_obs_property_type } obs_property_type ;


 void* FUNC_0 (struct obs_property*) ;

__attribute__((used)) static inline void *FUNC_1(struct obs_property *VAR_0,
      enum obs_property_type VAR_1)
{
 if (!VAR_0 || VAR_0->type != VAR_1)
  return ((void*)0);

 return FUNC_0(VAR_0);
}

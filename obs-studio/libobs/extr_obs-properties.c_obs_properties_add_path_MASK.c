
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path_data {int type; void* filter; void* default_path; } ;
struct obs_property {int dummy; } ;
typedef struct obs_property obs_property_t ;
typedef int obs_properties_t ;
typedef enum obs_path_type { ____Placeholder_obs_path_type } obs_path_type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (char const*) ;
 struct path_data* FUNC_1 (struct obs_property*) ;
 scalar_t__ FUNC_2 (int *,char const*) ;
 struct obs_property* FUNC_3 (int *,char const*,char const*,int ) ;

obs_property_t *FUNC_4(obs_properties_t *VAR_2,
     const char *VAR_3, const char *VAR_4,
     enum obs_path_type VAR_5,
     const char *VAR_6,
     const char *VAR_7)
{
 if (!VAR_2 || FUNC_2(VAR_2, VAR_3))
  return ((void*)0);

 struct obs_property *VAR_8 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_1);
 struct path_data *VAR_9 = FUNC_1(VAR_8);
 VAR_9->type = VAR_5;
 VAR_9->default_path = FUNC_0(VAR_7);

 if (VAR_9->type == VAR_0)
  VAR_9->filter = FUNC_0(VAR_6);

 return VAR_8;
}

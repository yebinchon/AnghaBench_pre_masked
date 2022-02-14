
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_property {int dummy; } ;
struct editable_list_data {int type; void* default_path; void* filter; } ;
typedef struct obs_property obs_property_t ;
typedef int obs_properties_t ;
typedef enum obs_editable_list_type { ____Placeholder_obs_editable_list_type } obs_editable_list_type ;


 int VAR_0 ;
 void* FUNC_0 (char const*) ;
 struct editable_list_data* FUNC_1 (struct obs_property*) ;
 scalar_t__ FUNC_2 (int *,char const*) ;
 struct obs_property* FUNC_3 (int *,char const*,char const*,int ) ;

obs_property_t *
FUNC_4(obs_properties_t *VAR_1, const char *VAR_2,
     const char *VAR_3,
     enum obs_editable_list_type VAR_4,
     const char *VAR_5, const char *VAR_6)
{
 if (!VAR_1 || FUNC_2(VAR_1, VAR_2))
  return ((void*)0);
 struct obs_property *VAR_7 =
  FUNC_3(VAR_1, VAR_2, VAR_3, VAR_0);

 struct editable_list_data *VAR_8 = FUNC_1(VAR_7);
 VAR_8->type = VAR_4;
 VAR_8->filter = FUNC_0(VAR_5);
 VAR_8->default_path = FUNC_0(VAR_6);
 return VAR_7;
}

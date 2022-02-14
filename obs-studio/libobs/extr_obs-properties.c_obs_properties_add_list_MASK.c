
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_property {int dummy; } ;
struct list_data {int format; int type; } ;
typedef struct obs_property obs_property_t ;
typedef int obs_properties_t ;
typedef enum obs_combo_type { ____Placeholder_obs_combo_type } obs_combo_type ;
typedef enum obs_combo_format { ____Placeholder_obs_combo_format } obs_combo_format ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,char const*) ;
 struct list_data* FUNC_1 (struct obs_property*) ;
 scalar_t__ FUNC_2 (int *,char const*) ;
 struct obs_property* FUNC_3 (int *,char const*,char const*,int ) ;

obs_property_t *FUNC_4(obs_properties_t *VAR_4,
     const char *VAR_5, const char *VAR_6,
     enum obs_combo_type VAR_7,
     enum obs_combo_format VAR_8)
{
 if (!VAR_4 || FUNC_2(VAR_4, VAR_5))
  return ((void*)0);

 if (VAR_7 == VAR_2 &&
     VAR_8 != VAR_1) {
  FUNC_0(VAR_0,
       "List '%s', error: Editable combo boxes "
       "must be of the 'string' type",
       VAR_5);
  return ((void*)0);
 }

 struct obs_property *VAR_9 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_3);
 struct list_data *VAR_10 = FUNC_1(VAR_9);
 VAR_10->format = VAR_8;
 VAR_10->type = VAR_7;

 return VAR_9;
}

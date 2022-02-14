
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_property {int dummy; } ;
struct int_data {int min; int max; int step; int type; } ;
typedef struct obs_property obs_property_t ;
typedef int obs_properties_t ;
typedef enum obs_number_type { ____Placeholder_obs_number_type } obs_number_type ;


 int VAR_0 ;
 struct int_data* FUNC_0 (struct obs_property*) ;
 scalar_t__ FUNC_1 (int *,char const*) ;
 struct obs_property* FUNC_2 (int *,char const*,char const*,int ) ;

__attribute__((used)) static obs_property_t *FUNC_3(obs_properties_t *VAR_1, const char *VAR_2,
          const char *VAR_3, int VAR_4, int VAR_5, int VAR_6,
          enum obs_number_type VAR_7)
{
 if (!VAR_1 || FUNC_1(VAR_1, VAR_2))
  return ((void*)0);

 struct obs_property *VAR_8 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_0);
 struct int_data *VAR_9 = FUNC_0(VAR_8);
 VAR_9->min = VAR_4;
 VAR_9->max = VAR_5;
 VAR_9->step = VAR_6;
 VAR_9->type = VAR_7;
 return VAR_8;
}

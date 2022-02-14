
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_property {int dummy; } ;
struct button_data {int callback; } ;
typedef struct obs_property obs_property_t ;
typedef int obs_property_clicked_t ;
typedef int obs_properties_t ;


 int VAR_0 ;
 struct button_data* FUNC_0 (struct obs_property*) ;
 scalar_t__ FUNC_1 (int *,char const*) ;
 struct obs_property* FUNC_2 (int *,char const*,char const*,int ) ;

obs_property_t *FUNC_3(obs_properties_t *VAR_1,
       const char *VAR_2, const char *VAR_3,
       obs_property_clicked_t VAR_4)
{
 if (!VAR_1 || FUNC_1(VAR_1, VAR_2))
  return ((void*)0);

 struct obs_property *VAR_5 =
  FUNC_2(VAR_1, VAR_2, VAR_3, VAR_0);
 struct button_data *VAR_6 = FUNC_0(VAR_5);
 VAR_6->callback = VAR_4;
 return VAR_5;
}

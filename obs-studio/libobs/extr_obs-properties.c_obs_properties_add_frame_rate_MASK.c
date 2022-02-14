
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_property {int dummy; } ;
struct frame_rate_data {int ranges; int extra_options; } ;
typedef struct obs_property obs_property_t ;
typedef int obs_properties_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct frame_rate_data* FUNC_1 (struct obs_property*) ;
 scalar_t__ FUNC_2 (int *,char const*) ;
 struct obs_property* FUNC_3 (int *,char const*,char const*,int ) ;

obs_property_t *FUNC_4(obs_properties_t *VAR_1,
           const char *VAR_2,
           const char *VAR_3)
{
 if (!VAR_1 || FUNC_2(VAR_1, VAR_2))
  return ((void*)0);

 struct obs_property *VAR_4 =
  FUNC_3(VAR_1, VAR_2, VAR_3, VAR_0);

 struct frame_rate_data *VAR_5 = FUNC_1(VAR_4);
 FUNC_0(VAR_5->extra_options);
 FUNC_0(VAR_5->ranges);
 return VAR_4;
}

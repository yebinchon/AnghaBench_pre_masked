
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct group_data {int type; TYPE_1__* content; } ;
typedef int obs_property_t ;
struct TYPE_10__ {int * parent; } ;
typedef TYPE_1__ obs_properties_t ;
typedef enum obs_group_type { ____Placeholder_obs_group_type } obs_group_type ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 struct group_data* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,char const*) ;
 int * FUNC_4 (TYPE_1__*,char const*,char const*,int ) ;

obs_property_t *FUNC_5(obs_properties_t *VAR_1,
      const char *VAR_2, const char *VAR_3,
      enum obs_group_type VAR_4,
      obs_properties_t *VAR_5)
{
 if (!VAR_1 || FUNC_3(VAR_1, VAR_2))
  return ((void*)0);
 if (!VAR_5)
  return ((void*)0);


 if (VAR_1 == VAR_5)
  return ((void*)0);
 if (FUNC_1(VAR_1, VAR_5))
  return ((void*)0);


 if (FUNC_0(VAR_1, VAR_5))
  return ((void*)0);

 obs_property_t *VAR_6 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_0);
 VAR_5->parent = VAR_6;

 struct group_data *VAR_7 = FUNC_2(VAR_6);
 VAR_7->type = VAR_4;
 VAR_7->content = VAR_5;
 return VAR_6;
}

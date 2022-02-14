
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct editable_list_data {int type; } ;
typedef int obs_property_t ;
typedef enum obs_editable_list_type { ____Placeholder_obs_editable_list_type } obs_editable_list_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct editable_list_data* FUNC_0 (int *,int ) ;

enum obs_editable_list_type FUNC_1(obs_property_t *VAR_2)
{
 struct editable_list_data *VAR_3 =
  FUNC_0(VAR_2, VAR_1);
 return VAR_3 ? VAR_3->type : VAR_0;
}

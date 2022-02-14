
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path_data {int type; } ;
typedef int obs_property_t ;
typedef enum obs_path_type { ____Placeholder_obs_path_type } obs_path_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct path_data* FUNC_0 (int *,int ) ;

enum obs_path_type FUNC_1(obs_property_t *VAR_2)
{
 struct path_data *VAR_3 = FUNC_0(VAR_2, VAR_1);
 return VAR_3 ? VAR_3->type : VAR_0;
}

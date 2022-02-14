
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_data {int format; } ;
typedef int obs_property_t ;
typedef enum obs_combo_format { ____Placeholder_obs_combo_format } obs_combo_format ;


 int VAR_0 ;
 struct list_data* FUNC_0 (int *) ;

enum obs_combo_format FUNC_1(obs_property_t *VAR_1)
{
 struct list_data *VAR_2 = FUNC_0(VAR_1);
 return VAR_2 ? VAR_2->format : VAR_0;
}

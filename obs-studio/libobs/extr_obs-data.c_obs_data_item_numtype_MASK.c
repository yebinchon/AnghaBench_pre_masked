
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct obs_data_number {int type; } ;
struct TYPE_4__ {scalar_t__ type; } ;
typedef TYPE_1__ obs_data_item_t ;
typedef enum obs_data_number_type { ____Placeholder_obs_data_number_type } obs_data_number_type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct obs_data_number* FUNC_0 (TYPE_1__*) ;

enum obs_data_number_type FUNC_1(obs_data_item_t *VAR_2)
{
 struct obs_data_number *VAR_3;

 if (!VAR_2 || VAR_2->type != VAR_0)
  return VAR_1;

 VAR_3 = FUNC_0(VAR_2);
 return VAR_3->type;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int filter_mutex; } ;
typedef TYPE_1__ obs_source_t ;
typedef enum obs_order_movement { ____Placeholder_obs_order_movement } obs_order_movement ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,int *,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(obs_source_t *VAR_0, obs_source_t *VAR_1,
     enum obs_order_movement VAR_2)
{
 bool VAR_3;

 if (!FUNC_3(VAR_0, "obs_source_filter_set_order"))
  return;
 if (!FUNC_1(VAR_1, "obs_source_filter_set_order"))
  return;

 FUNC_4(&VAR_0->filter_mutex);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_5(&VAR_0->filter_mutex);

 if (VAR_3)
  FUNC_2(VAR_0, ((void*)0), "reorder_filters");
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int peak_meter_type; int mutex; } ;
typedef TYPE_1__ obs_volmeter_t ;
typedef enum obs_peak_meter_type { ____Placeholder_obs_peak_meter_type } obs_peak_meter_type ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(obs_volmeter_t *VAR_0,
          enum obs_peak_meter_type VAR_1)
{
 FUNC_0(&VAR_0->mutex);
 VAR_0->peak_meter_type = VAR_1;
 FUNC_1(&VAR_0->mutex);
}

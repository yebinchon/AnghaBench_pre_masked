
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int stop_code; int delay_active; int delay_restart_refs; } ;
typedef TYPE_1__ obs_output_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (TYPE_1__*) ;

void FUNC_8(obs_output_t *VAR_0, int VAR_1)
{
 if (!FUNC_4(VAR_0, "obs_output_signal_stop"))
  return;

 VAR_0->stop_code = VAR_1;

 if (FUNC_0(VAR_0, VAR_1)) {
  if (FUNC_1(VAR_0))
   FUNC_5(&VAR_0->delay_restart_refs);
  FUNC_3(VAR_0, 0);
  FUNC_7(VAR_0);
 } else {
  if (FUNC_1(VAR_0))
   FUNC_6(&VAR_0->delay_active, 0);
  FUNC_2(VAR_0);
 }
}

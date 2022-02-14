
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int reconnect_retry_max; int reconnect_retry_sec; } ;
typedef TYPE_1__ obs_output_t ;


 int FUNC_0 (TYPE_1__*,char*) ;

void FUNC_1(obs_output_t *VAR_0, int VAR_1,
           int VAR_2)
{
 if (!FUNC_0(VAR_0, "obs_output_set_reconnect_settings"))
  return;

 VAR_0->reconnect_retry_max = VAR_1;
 VAR_0->reconnect_retry_sec = VAR_2;
}

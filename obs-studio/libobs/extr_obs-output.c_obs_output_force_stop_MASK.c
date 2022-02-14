
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ stop_code; } ;
typedef TYPE_1__ obs_output_t ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(obs_output_t *VAR_0)
{
 if (!FUNC_2(VAR_0, "obs_output_force_stop"))
  return;

 if (!FUNC_3(VAR_0)) {
  VAR_0->stop_code = 0;
  FUNC_0(VAR_0, "stopping");
 }
 FUNC_1(VAR_0, 1, 0);
}

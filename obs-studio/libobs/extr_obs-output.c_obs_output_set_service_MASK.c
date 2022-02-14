
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* output; scalar_t__ active; } ;
typedef TYPE_1__ obs_service_t ;
struct TYPE_8__ {TYPE_1__* service; } ;
typedef TYPE_2__ obs_output_t ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,char*) ;

void FUNC_2(obs_output_t *VAR_0, obs_service_t *VAR_1)
{
 if (!FUNC_1(VAR_0, "obs_output_set_service"))
  return;
 if (FUNC_0(VAR_0) || !VAR_1 || VAR_1->active)
  return;

 if (VAR_1->output)
  VAR_1->output->service = ((void*)0);

 VAR_0->service = VAR_1;
 VAR_1->output = VAR_0;
}

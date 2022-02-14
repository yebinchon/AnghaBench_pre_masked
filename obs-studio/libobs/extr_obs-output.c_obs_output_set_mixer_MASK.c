
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t mixer_mask; } ;
typedef TYPE_1__ obs_output_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*) ;

void FUNC_2(obs_output_t *VAR_0, size_t VAR_1)
{
 if (!FUNC_1(VAR_0, "obs_output_set_mixer"))
  return;

 if (!FUNC_0(VAR_0))
  VAR_0->mixer_mask = (size_t)1 << VAR_1;
}

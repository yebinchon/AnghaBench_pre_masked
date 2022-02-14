
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int transition_use_fixed_duration; int transition_fixed_duration; } ;
typedef TYPE_1__ obs_source_t ;


 int FUNC_0 (TYPE_1__*,char*) ;

void FUNC_1(obs_source_t *VAR_0, bool VAR_1,
     uint32_t VAR_2)
{
 if (!FUNC_0(VAR_0, "obs_transition_enable_fixed"))
  return;

 VAR_0->transition_use_fixed_duration = VAR_1;
 VAR_0->transition_fixed_duration = VAR_2;
}

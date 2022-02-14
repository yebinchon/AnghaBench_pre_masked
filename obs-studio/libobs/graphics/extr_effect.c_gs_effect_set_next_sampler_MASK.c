
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gs_samplerstate_t ;
struct TYPE_3__ {scalar_t__ type; int * next_sampler; } ;
typedef TYPE_1__ gs_eparam_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;

void FUNC_1(gs_eparam_t *VAR_2, gs_samplerstate_t *VAR_3)
{
 if (!VAR_2) {
  FUNC_0(VAR_1, "gs_effect_set_next_sampler: invalid param");
  return;
 }

 if (VAR_2->type == VAR_0)
  VAR_2->next_sampler = VAR_3;
}

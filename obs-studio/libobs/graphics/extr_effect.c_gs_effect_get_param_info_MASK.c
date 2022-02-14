
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct gs_effect_param_info {int type; int name; } ;
struct TYPE_3__ {int type; int name; } ;
typedef TYPE_1__ gs_eparam_t ;



void FUNC_0(const gs_eparam_t *VAR_0,
         struct gs_effect_param_info *VAR_1)
{
 if (!VAR_0)
  return;

 VAR_1->name = VAR_0->name;
 VAR_1->type = VAR_0->type;
}

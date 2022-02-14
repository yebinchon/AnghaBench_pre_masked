
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct gs_shader_param_info {int name; int type; } ;
struct TYPE_3__ {int name; int type; } ;
typedef TYPE_1__ gs_sparam_t ;



void FUNC_0(const gs_sparam_t *VAR_0,
         struct gs_shader_param_info *VAR_1)
{
 VAR_1->type = VAR_0->type;
 VAR_1->name = VAR_0->name;
}

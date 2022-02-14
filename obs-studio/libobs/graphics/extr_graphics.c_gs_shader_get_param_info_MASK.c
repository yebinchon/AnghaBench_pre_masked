
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gs_shader_param_info {int dummy; } ;
typedef int gs_sparam_t ;
struct TYPE_4__ {int (* gs_shader_get_param_info ) (int const*,struct gs_shader_param_info*) ;} ;
struct TYPE_5__ {TYPE_1__ exports; } ;
typedef TYPE_2__ graphics_t ;


 int FUNC_0 (char*,int const*,struct gs_shader_param_info*) ;
 int FUNC_1 (int const*,struct gs_shader_param_info*) ;
 TYPE_2__* VAR_0 ;

void FUNC_2(const gs_sparam_t *VAR_1,
         struct gs_shader_param_info *VAR_2)
{
 graphics_t *VAR_3 = VAR_0;

 if (!FUNC_0("gs_shader_get_param_info", VAR_1, VAR_2))
  return;

 VAR_3->exports.gs_shader_get_param_info(VAR_1, VAR_2);
}

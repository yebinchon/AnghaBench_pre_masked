
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vec2 {int dummy; } ;
typedef int gs_sparam_t ;
struct TYPE_4__ {int (* gs_shader_set_vec2 ) (int *,struct vec2 const*) ;} ;
struct TYPE_5__ {TYPE_1__ exports; } ;
typedef TYPE_2__ graphics_t ;


 int FUNC_0 (char*,int *,struct vec2 const*) ;
 int FUNC_1 (int *,struct vec2 const*) ;
 TYPE_2__* VAR_0 ;

void FUNC_2(gs_sparam_t *VAR_1, const struct vec2 *VAR_2)
{
 graphics_t *VAR_3 = VAR_0;

 if (!FUNC_0("gs_shader_set_vec2", VAR_1, VAR_2))
  return;

 VAR_3->exports.gs_shader_set_vec2(VAR_1, VAR_2);
}

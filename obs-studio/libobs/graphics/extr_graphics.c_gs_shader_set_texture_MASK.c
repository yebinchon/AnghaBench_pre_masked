
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int gs_texture_t ;
typedef int gs_sparam_t ;
struct TYPE_4__ {int (* gs_shader_set_texture ) (int *,int *) ;} ;
struct TYPE_5__ {TYPE_1__ exports; } ;
typedef TYPE_2__ graphics_t ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (int *,int *) ;
 TYPE_2__* VAR_0 ;

void FUNC_2(gs_sparam_t *VAR_1, gs_texture_t *VAR_2)
{
 graphics_t *VAR_3 = VAR_0;

 if (!FUNC_0("gs_shader_set_texture", VAR_1))
  return;

 VAR_3->exports.gs_shader_set_texture(VAR_1, VAR_2);
}

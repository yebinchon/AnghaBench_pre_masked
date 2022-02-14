
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct gs_texture {scalar_t__ gl_target; int texture; } ;
struct gs_shader_param {size_t sampler_id; struct gs_texture* texture; } ;
struct gs_sampler_state {int dummy; } ;
typedef struct gs_texture gs_texture_t ;
struct TYPE_4__ {struct gs_sampler_state** cur_samplers; struct gs_texture** cur_textures; int cur_pixel_shader; } ;
typedef TYPE_1__ gs_device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct gs_shader_param* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (struct gs_texture*,struct gs_sampler_state*) ;

void FUNC_5(gs_device_t *VAR_2, gs_texture_t *VAR_3, int VAR_4)
{
 struct gs_shader_param *VAR_5;
 struct gs_sampler_state *VAR_6;
 struct gs_texture *VAR_7 = VAR_2->cur_textures[VAR_4];


 if (!VAR_2->cur_pixel_shader)
  goto fail;

 if (VAR_7 == VAR_3)
  return;

 if (!FUNC_2(VAR_0 + VAR_4))
  goto fail;



 if (VAR_7 && (!VAR_3 || VAR_7->gl_target != VAR_3->gl_target))
  FUNC_3(VAR_7->gl_target, 0);

 VAR_2->cur_textures[VAR_4] = VAR_3;
 VAR_5 = FUNC_1(VAR_2, VAR_4);
 if (!VAR_5)
  return;

 VAR_5->texture = VAR_3;

 if (!VAR_3)
  return;


 if (VAR_5->sampler_id != (size_t)-1)
  VAR_6 = VAR_2->cur_samplers[VAR_5->sampler_id];
 else
  VAR_6 = ((void*)0);

 if (!FUNC_3(VAR_3->gl_target, VAR_3->texture))
  goto fail;
 if (VAR_6 && !FUNC_4(VAR_3, VAR_6))
  goto fail;

 return;

fail:
 FUNC_0(VAR_1, "device_load_texture (GL) failed");
}

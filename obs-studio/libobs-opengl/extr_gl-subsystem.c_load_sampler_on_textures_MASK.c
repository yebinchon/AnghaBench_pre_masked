
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct gs_shader_param {scalar_t__ type; scalar_t__ sampler_id; scalar_t__ texture; scalar_t__ texture_id; } ;
struct TYPE_4__ {size_t num; struct gs_shader_param* array; } ;
struct gs_shader {TYPE_1__ params; } ;
typedef int gs_samplerstate_t ;
struct TYPE_5__ {struct gs_shader* cur_pixel_shader; } ;
typedef TYPE_2__ gs_device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int *) ;

__attribute__((used)) static bool FUNC_2(gs_device_t *VAR_2, gs_samplerstate_t *VAR_3,
         int VAR_4)
{
 struct gs_shader *VAR_5 = VAR_2->cur_pixel_shader;
 size_t VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5->params.num; VAR_6++) {
  struct gs_shader_param *VAR_7 = VAR_5->params.array + VAR_6;

  if (VAR_7->type == VAR_1 &&
      VAR_7->sampler_id == (uint32_t)VAR_4 &&
      VAR_7->texture) {
   if (!FUNC_0(VAR_0 + VAR_7->texture_id))
    return 0;
   if (!FUNC_1(VAR_7->texture, VAR_3))
    return 0;
  }
 }

 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gs_shader_param {scalar_t__ type; int texture_id; } ;
struct TYPE_4__ {size_t num; struct gs_shader_param* array; } ;
struct gs_shader {TYPE_1__ params; } ;
struct TYPE_5__ {struct gs_shader* cur_pixel_shader; } ;
typedef TYPE_2__ gs_device_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline struct gs_shader_param *FUNC_0(gs_device_t *VAR_1,
       int VAR_2)
{
 struct gs_shader *VAR_3 = VAR_1->cur_pixel_shader;
 size_t VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->params.num; VAR_4++) {
  struct gs_shader_param *VAR_5 = VAR_3->params.array + VAR_4;
  if (VAR_5->type == VAR_0) {
   if (VAR_5->texture_id == VAR_2)
    return VAR_5;
  }
 }

 return ((void*)0);
}

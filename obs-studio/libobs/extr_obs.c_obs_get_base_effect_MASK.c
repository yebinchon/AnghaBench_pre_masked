
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int gs_effect_t ;
typedef enum obs_base_effect { ____Placeholder_obs_base_effect } obs_base_effect ;
struct TYPE_3__ {int * premultiplied_alpha_effect; int * bilinear_lowres_effect; int * area_effect; int * lanczos_effect; int * bicubic_effect; int * repeat_effect; int * solid_effect; int * opaque_effect; int * default_rect_effect; int * default_effect; } ;
struct TYPE_4__ {TYPE_1__ video; } ;
 TYPE_2__* VAR_0 ;

gs_effect_t *FUNC_0(enum obs_base_effect VAR_1)
{
 if (!VAR_0)
  return ((void*)0);

 switch (VAR_1) {
 case 134:
  return VAR_0->video.default_effect;
 case 133:
  return VAR_0->video.default_rect_effect;
 case 131:
  return VAR_0->video.opaque_effect;
 case 128:
  return VAR_0->video.solid_effect;
 case 129:
  return VAR_0->video.repeat_effect;
 case 136:
  return VAR_0->video.bicubic_effect;
 case 132:
  return VAR_0->video.lanczos_effect;
 case 137:
  return VAR_0->video.area_effect;
 case 135:
  return VAR_0->video.bilinear_lowres_effect;
 case 130:
  return VAR_0->video.premultiplied_alpha_effect;
 }

 return ((void*)0);
}

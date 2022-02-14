
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_core_video {int output_width; int base_width; int output_height; int base_height; int scale_type; int * bicubic_effect; int * area_effect; int * lanczos_effect; int * default_effect; int * bilinear_lowres_effect; } ;
typedef int gs_effect_t ;







__attribute__((used)) static inline gs_effect_t *
FUNC_0(struct obs_core_video *VAR_0)
{



 if (VAR_0->output_width < (VAR_0->base_width / 2) &&
     VAR_0->output_height < (VAR_0->base_height / 2)) {
  return VAR_0->bilinear_lowres_effect;
 }

 switch (VAR_0->scale_type) {
 case 129:
  return VAR_0->default_effect;
 case 128:
  return VAR_0->lanczos_effect;
 case 131:
  return VAR_0->area_effect;
 case 130:
 default:;
 }

 return VAR_0->bicubic_effect;
}

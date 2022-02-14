
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int gs_effect_t ;
typedef enum obs_deinterlace_mode { ____Placeholder_obs_deinterlace_mode } obs_deinterlace_mode ;
struct TYPE_3__ {int deinterlace_yadif_2x_effect; int deinterlace_yadif_effect; int deinterlace_linear_2x_effect; int deinterlace_linear_effect; int deinterlace_blend_2x_effect; int deinterlace_blend_effect; int deinterlace_discard_2x_effect; int deinterlace_discard_effect; } ;
struct TYPE_4__ {TYPE_1__ video; } ;
 TYPE_2__* VAR_0 ;
 int * FUNC_0 (int *,char*) ;

__attribute__((used)) static inline gs_effect_t *FUNC_1(enum obs_deinterlace_mode VAR_1)
{
 switch (VAR_1) {
 case 134:
  return ((void*)0);
 case 133:
  return FUNC_0(&VAR_0->video.deinterlace_discard_effect,
           "deinterlace_discard.effect");
 case 130:
  return FUNC_0(
   &VAR_0->video.deinterlace_discard_2x_effect,
   "deinterlace_discard_2x.effect");
 case 136:
  return FUNC_0(&VAR_0->video.deinterlace_blend_effect,
           "deinterlace_blend.effect");
 case 135:
  return FUNC_0(&VAR_0->video.deinterlace_blend_2x_effect,
           "deinterlace_blend_2x.effect");
 case 132:
  return FUNC_0(&VAR_0->video.deinterlace_linear_effect,
           "deinterlace_linear.effect");
 case 131:
  return FUNC_0(&VAR_0->video.deinterlace_linear_2x_effect,
           "deinterlace_linear_2x.effect");
 case 129:
  return FUNC_0(&VAR_0->video.deinterlace_yadif_effect,
           "deinterlace_yadif.effect");
 case 128:
  return FUNC_0(&VAR_0->video.deinterlace_yadif_2x_effect,
           "deinterlace_yadif_2x.effect");
 }

 return ((void*)0);
}

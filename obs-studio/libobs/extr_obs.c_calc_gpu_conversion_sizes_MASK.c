
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct obs_video_info {scalar_t__ output_width; int output_format; } ;
struct obs_core_video {int conversion_needed; char** conversion_techs; float conversion_width_i; } ;
struct TYPE_2__ {struct obs_core_video video; } ;





 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline void FUNC_0(const struct obs_video_info *VAR_1)
{
 struct obs_core_video *VAR_2 = &VAR_0->video;

 VAR_2->conversion_needed = 0;
 VAR_2->conversion_techs[0] = ((void*)0);
 VAR_2->conversion_techs[1] = ((void*)0);
 VAR_2->conversion_techs[2] = ((void*)0);
 VAR_2->conversion_width_i = 0.f;

 switch ((uint32_t)VAR_1->output_format) {
 case 130:
  VAR_2->conversion_needed = 1;
  VAR_2->conversion_techs[0] = "Planar_Y";
  VAR_2->conversion_techs[1] = "Planar_U_Left";
  VAR_2->conversion_techs[2] = "Planar_V_Left";
  VAR_2->conversion_width_i = 1.f / (float)VAR_1->output_width;
  break;
 case 128:
  VAR_2->conversion_needed = 1;
  VAR_2->conversion_techs[0] = "NV12_Y";
  VAR_2->conversion_techs[1] = "NV12_UV";
  VAR_2->conversion_width_i = 1.f / (float)VAR_1->output_width;
  break;
 case 129:
  VAR_2->conversion_needed = 1;
  VAR_2->conversion_techs[0] = "Planar_Y";
  VAR_2->conversion_techs[1] = "Planar_U";
  VAR_2->conversion_techs[2] = "Planar_V";
  break;
 }
}

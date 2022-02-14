
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct obs_video_info {int adapter; int graphics_module; } ;
struct obs_core_video {int point_sampler; int transparent_texture; void* premultiplied_alpha_effect; void* conversion_effect; void* solid_effect; void* opaque_effect; void* default_rect_effect; void* default_effect; void* bilinear_lowres_effect; void* area_effect; void* lanczos_effect; void* bicubic_effect; void* repeat_effect; int graphics; } ;
struct gs_sampler_info {int max_anisotropy; int member_0; } ;
struct TYPE_2__ {struct obs_core_video video; } ;


 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,int ) ;
 void* FUNC_2 (char*,int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct gs_sampler_info*) ;
 int FUNC_7 (int,int,int ,int,int const**,int ) ;
 TYPE_1__* VAR_7 ;
 char* FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(struct obs_video_info *VAR_8)
{
 struct obs_core_video *VAR_9 = &VAR_7->video;
 uint8_t VAR_10[2 * 2 * 4] = {0};
 const uint8_t *VAR_11 = VAR_10;
 struct gs_sampler_info VAR_12 = {0};
 bool VAR_13 = 1;
 int VAR_14;

 VAR_14 =
  FUNC_1(&VAR_9->graphics, VAR_8->graphics_module, VAR_8->adapter);
 if (VAR_14 != VAR_2) {
  switch (VAR_14) {
  case 129:
   return VAR_4;
  case 128:
   return VAR_5;
  default:
   return VAR_3;
  }
 }

 FUNC_3(VAR_9->graphics);

 char *VAR_15 = FUNC_8("default.effect");
 VAR_9->default_effect = FUNC_2(VAR_15, ((void*)0));
 FUNC_0(VAR_15);

 if (FUNC_4() == VAR_0) {
  VAR_15 = FUNC_8("default_rect.effect");
  VAR_9->default_rect_effect =
   FUNC_2(VAR_15, ((void*)0));
  FUNC_0(VAR_15);
 }

 VAR_15 = FUNC_8("opaque.effect");
 VAR_9->opaque_effect = FUNC_2(VAR_15, ((void*)0));
 FUNC_0(VAR_15);

 VAR_15 = FUNC_8("solid.effect");
 VAR_9->solid_effect = FUNC_2(VAR_15, ((void*)0));
 FUNC_0(VAR_15);

 VAR_15 = FUNC_8("repeat.effect");
 VAR_9->repeat_effect = FUNC_2(VAR_15, ((void*)0));
 FUNC_0(VAR_15);

 VAR_15 = FUNC_8("format_conversion.effect");
 VAR_9->conversion_effect = FUNC_2(VAR_15, ((void*)0));
 FUNC_0(VAR_15);

 VAR_15 = FUNC_8("bicubic_scale.effect");
 VAR_9->bicubic_effect = FUNC_2(VAR_15, ((void*)0));
 FUNC_0(VAR_15);

 VAR_15 = FUNC_8("lanczos_scale.effect");
 VAR_9->lanczos_effect = FUNC_2(VAR_15, ((void*)0));
 FUNC_0(VAR_15);

 VAR_15 = FUNC_8("area.effect");
 VAR_9->area_effect = FUNC_2(VAR_15, ((void*)0));
 FUNC_0(VAR_15);

 VAR_15 = FUNC_8("bilinear_lowres_scale.effect");
 VAR_9->bilinear_lowres_effect =
  FUNC_2(VAR_15, ((void*)0));
 FUNC_0(VAR_15);

 VAR_15 = FUNC_8("premultiplied_alpha.effect");
 VAR_9->premultiplied_alpha_effect =
  FUNC_2(VAR_15, ((void*)0));
 FUNC_0(VAR_15);

 VAR_12.max_anisotropy = 1;
 VAR_9->point_sampler = FUNC_6(&VAR_12);

 VAR_7->video.transparent_texture =
  FUNC_7(2, 2, VAR_1, 1, &VAR_11, 0);

 if (!VAR_9->default_effect)
  VAR_13 = 0;
 if (FUNC_4() == VAR_0) {
  if (!VAR_9->default_rect_effect)
   VAR_13 = 0;
 }
 if (!VAR_9->opaque_effect)
  VAR_13 = 0;
 if (!VAR_9->solid_effect)
  VAR_13 = 0;
 if (!VAR_9->conversion_effect)
  VAR_13 = 0;
 if (!VAR_9->premultiplied_alpha_effect)
  VAR_13 = 0;
 if (!VAR_9->transparent_texture)
  VAR_13 = 0;
 if (!VAR_9->point_sampler)
  VAR_13 = 0;

 FUNC_5();
 return VAR_13 ? VAR_6 : VAR_3;
}

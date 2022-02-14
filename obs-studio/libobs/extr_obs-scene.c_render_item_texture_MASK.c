
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct vec2 {float member_0; float member_1; } ;
struct TYPE_5__ {float x; float y; } ;
struct obs_scene_item {int scale_filter; TYPE_2__ output_scale; int item_render; } ;
typedef int gs_texture_t ;
typedef int gs_eparam_t ;
typedef int gs_effect_t ;
typedef enum obs_scale_type { ____Placeholder_obs_scale_type } obs_scale_type ;
struct TYPE_4__ {int * area_effect; int * lanczos_effect; int * bicubic_effect; int * bilinear_lowres_effect; int point_sampler; int * default_effect; } ;
struct TYPE_6__ {TYPE_1__ video; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (float,float,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int * FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (int *,char const*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,struct vec2*) ;
 int * FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 TYPE_3__* VAR_9 ;
 int FUNC_13 (int *,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_14(struct obs_scene_item *VAR_10)
{
 gs_texture_t *VAR_11 = FUNC_10(VAR_10->item_render);
 if (!VAR_11) {
  return;
 }

 FUNC_0(VAR_3,
         "render_item_texture");

 gs_effect_t *VAR_12 = VAR_9->video.default_effect;
 enum obs_scale_type VAR_13 = VAR_10->scale_filter;
 uint32_t VAR_14 = FUNC_12(VAR_11);
 uint32_t VAR_15 = FUNC_11(VAR_11);
 const char *VAR_16 = "Draw";

 if (VAR_13 != VAR_6) {
  if (VAR_13 == VAR_8) {
   gs_eparam_t *VAR_17 =
    FUNC_6(VAR_12, "image");
   FUNC_8(VAR_17,
         VAR_9->video.point_sampler);

  } else if (!FUNC_2(VAR_10->output_scale.x, 1.0f, VAR_0) ||
      !FUNC_2(VAR_10->output_scale.y, 1.0f, VAR_0)) {
   gs_eparam_t *VAR_18;
   gs_eparam_t *VAR_19;

   if (VAR_10->output_scale.x < 0.5f ||
       VAR_10->output_scale.y < 0.5f) {
    VAR_12 = VAR_9->video.bilinear_lowres_effect;
   } else if (VAR_13 == VAR_5) {
    VAR_12 = VAR_9->video.bicubic_effect;
   } else if (VAR_13 == VAR_7) {
    VAR_12 = VAR_9->video.lanczos_effect;
   } else if (VAR_13 == VAR_4) {
    VAR_12 = VAR_9->video.area_effect;
    if ((VAR_10->output_scale.x >= 1.0f) &&
        (VAR_10->output_scale.y >= 1.0f))
     VAR_16 = "DrawUpscale";
   }

   VAR_18 = FUNC_6(
    VAR_12, "base_dimension");
   if (VAR_18) {
    struct vec2 VAR_20 = {(float)VAR_14, (float)VAR_15};

    FUNC_9(VAR_18, &VAR_20);
   }

   VAR_19 = FUNC_6(
    VAR_12, "base_dimension_i");
   if (VAR_19) {
    struct vec2 VAR_21 = {1.0f / (float)VAR_14,
         1.0f / (float)VAR_15};

    FUNC_9(VAR_19, &VAR_21);
   }
  }
 }

 FUNC_5();
 FUNC_3(VAR_2, VAR_1);

 while (FUNC_7(VAR_12, VAR_16))
  FUNC_13(VAR_11, 0, 0, 0, 0, 0);

 FUNC_4();

 FUNC_1();
}

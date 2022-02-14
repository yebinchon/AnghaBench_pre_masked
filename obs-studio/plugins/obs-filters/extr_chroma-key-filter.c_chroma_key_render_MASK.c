
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct vec2 {int dummy; } ;
struct chroma_key_filter_data {int effect; int context; int spill; int spill_param; int smoothness; int smoothness_param; int similarity; int similarity_param; int pixel_size_param; struct vec2 chroma; int chroma_param; int gamma; int gamma_param; int brightness; int brightness_param; int contrast; int contrast_param; int color; int color_param; } ;
typedef int obs_source_t ;
typedef int gs_effect_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,struct vec2*) ;
 int FUNC_3 (int ,int *) ;
 int * FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (struct vec2*,float,float) ;

__attribute__((used)) static void FUNC_10(void *VAR_2, gs_effect_t *VAR_3)
{
 struct chroma_key_filter_data *VAR_4 = VAR_2;
 obs_source_t *VAR_5 = FUNC_4(VAR_4->context);
 uint32_t VAR_6 = FUNC_6(VAR_5);
 uint32_t VAR_7 = FUNC_5(VAR_5);
 struct vec2 VAR_8;

 if (!FUNC_7(VAR_4->context, VAR_0,
          VAR_1))
  return;

 FUNC_9(&VAR_8, 1.0f / (float)VAR_6, 1.0f / (float)VAR_7);

 FUNC_3(VAR_4->color_param, &VAR_4->color);
 FUNC_1(VAR_4->contrast_param, VAR_4->contrast);
 FUNC_1(VAR_4->brightness_param, VAR_4->brightness);
 FUNC_1(VAR_4->gamma_param, VAR_4->gamma);
 FUNC_2(VAR_4->chroma_param, &VAR_4->chroma);
 FUNC_2(VAR_4->pixel_size_param, &VAR_8);
 FUNC_1(VAR_4->similarity_param, VAR_4->similarity);
 FUNC_1(VAR_4->smoothness_param, VAR_4->smoothness);
 FUNC_1(VAR_4->spill_param, VAR_4->spill);

 FUNC_8(VAR_4->context, VAR_4->effect, 0, 0);

 FUNC_0(VAR_3);
}

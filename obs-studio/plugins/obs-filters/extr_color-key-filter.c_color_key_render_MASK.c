
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct color_key_filter_data {int effect; int context; int smoothness; int smoothness_param; int similarity; int similarity_param; int key_color; int key_color_param; int gamma; int gamma_param; int brightness; int brightness_param; int contrast; int contrast_param; int color; int color_param; } ;
typedef int gs_effect_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_2, gs_effect_t *VAR_3)
{
 struct color_key_filter_data *VAR_4 = VAR_2;

 if (!FUNC_3(VAR_4->context, VAR_0,
          VAR_1))
  return;

 FUNC_2(VAR_4->color_param, &VAR_4->color);
 FUNC_1(VAR_4->contrast_param, VAR_4->contrast);
 FUNC_1(VAR_4->brightness_param, VAR_4->brightness);
 FUNC_1(VAR_4->gamma_param, VAR_4->gamma);
 FUNC_2(VAR_4->key_color_param, &VAR_4->key_color);
 FUNC_1(VAR_4->similarity_param, VAR_4->similarity);
 FUNC_1(VAR_4->smoothness_param, VAR_4->smoothness);

 FUNC_4(VAR_4->context, VAR_4->effect, 0, 0);

 FUNC_0(VAR_3);
}

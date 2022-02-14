
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sharpness_data {float texwidth; float texheight; float sharpness; int effect; int context; int texture_height; int texture_width; int sharpness_param; } ;
typedef int gs_effect_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,float) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(void *VAR_2, gs_effect_t *VAR_3)
{
 struct sharpness_data *VAR_4 = VAR_2;

 if (!FUNC_5(VAR_4->context, VAR_0,
          VAR_1))
  return;

 VAR_4->texwidth = (float)FUNC_4(
  FUNC_2(VAR_4->context));
 VAR_4->texheight = (float)FUNC_3(
  FUNC_2(VAR_4->context));

 FUNC_1(VAR_4->sharpness_param, VAR_4->sharpness);
 FUNC_1(VAR_4->texture_width, VAR_4->texwidth);
 FUNC_1(VAR_4->texture_height, VAR_4->texheight);

 FUNC_6(VAR_4->context, VAR_4->effect, 0, 0);

 FUNC_0(VAR_3);
}

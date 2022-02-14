
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct luma_key_filter_data {int effect; int context; int luma_min_smooth; int luma_min_smooth_param; int luma_max_smooth; int luma_max_smooth_param; int luma_min; int luma_min_param; int luma_max; int luma_max_param; } ;
typedef int gs_effect_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_2, gs_effect_t *VAR_3)
{
 struct luma_key_filter_data *VAR_4 = VAR_2;

 if (!FUNC_2(VAR_4->context, VAR_0,
          VAR_1))
  return;

 FUNC_1(VAR_4->luma_max_param, VAR_4->luma_max);
 FUNC_1(VAR_4->luma_min_param, VAR_4->luma_min);
 FUNC_1(VAR_4->luma_max_smooth_param,
       VAR_4->luma_max_smooth);
 FUNC_1(VAR_4->luma_min_smooth_param,
       VAR_4->luma_min_smooth);

 FUNC_3(VAR_4->context, VAR_4->effect, 0, 0);

 FUNC_0(VAR_3);
}

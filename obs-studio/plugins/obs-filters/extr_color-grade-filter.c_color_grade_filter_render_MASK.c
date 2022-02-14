
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lut_filter_data {int effect; int context; int clut_amount; int target; } ;
typedef int obs_source_t ;
typedef int gs_eparam_t ;
typedef int gs_effect_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(void *VAR_2, gs_effect_t *VAR_3)
{
 struct lut_filter_data *VAR_4 = VAR_2;
 obs_source_t *VAR_5 = FUNC_4(VAR_4->context);
 gs_eparam_t *VAR_6;

 if (!VAR_5 || !VAR_4->target || !VAR_4->effect) {
  FUNC_7(VAR_4->context);
  return;
 }

 if (!FUNC_5(VAR_4->context, VAR_0,
          VAR_1))
  return;

 VAR_6 = FUNC_1(VAR_4->effect, "clut");
 FUNC_3(VAR_6, VAR_4->target);

 VAR_6 = FUNC_1(VAR_4->effect, "clut_amount");
 FUNC_2(VAR_6, VAR_4->clut_amount);

 FUNC_6(VAR_4->context, VAR_4->effect, 0, 0);

 FUNC_0(VAR_3);
}

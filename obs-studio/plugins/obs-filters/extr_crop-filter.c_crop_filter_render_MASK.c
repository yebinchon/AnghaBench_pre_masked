
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crop_filter_data {int height; int width; int effect; int context; int add_val; int param_add; int mul_val; int param_mul; } ;
typedef int gs_effect_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_2, gs_effect_t *VAR_3)
{
 struct crop_filter_data *VAR_4 = VAR_2;

 if (!FUNC_2(VAR_4->context, VAR_0,
          VAR_1))
  return;

 FUNC_1(VAR_4->param_mul, &VAR_4->mul_val);
 FUNC_1(VAR_4->param_add, &VAR_4->add_val);

 FUNC_3(VAR_4->context, VAR_4->effect,
          VAR_4->width, VAR_4->height);

 FUNC_0(VAR_3);
}

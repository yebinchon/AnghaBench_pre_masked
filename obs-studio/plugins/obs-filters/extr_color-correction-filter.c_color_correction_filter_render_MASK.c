
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct color_correction_filter_data {int effect; int context; int final_matrix; int final_matrix_param; int gamma; int gamma_param; } ;
typedef int gs_effect_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_2, gs_effect_t *VAR_3)
{
 struct color_correction_filter_data *VAR_4 = VAR_2;

 if (!FUNC_3(VAR_4->context, VAR_0,
          VAR_1))
  return;


 FUNC_2(VAR_4->gamma_param, &VAR_4->gamma);
 FUNC_1(VAR_4->final_matrix_param,
         &VAR_4->final_matrix);

 FUNC_4(VAR_4->context, VAR_4->effect, 0, 0);

 FUNC_0(VAR_3);
}

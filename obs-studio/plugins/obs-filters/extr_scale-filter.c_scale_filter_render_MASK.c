
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scale_filter_data {scalar_t__ sampling; int cy_out; int cx_out; int effect; int context; int point_sampler; int image_param; scalar_t__ undistort_factor; scalar_t__ undistort_factor_param; int dimension_i; scalar_t__ dimension_i_param; int dimension; scalar_t__ dimension_param; int target_valid; int valid; scalar_t__ upscale; scalar_t__ undistort; } ;
typedef int gs_effect_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,float) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ,char const*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(void *VAR_3, gs_effect_t *VAR_4)
{
 struct scale_filter_data *VAR_5 = VAR_3;
 const char *VAR_6 =
  VAR_5->undistort ? "DrawUndistort"
      : (VAR_5->upscale ? "DrawUpscale" : "Draw");

 if (!VAR_5->valid || !VAR_5->target_valid) {
  FUNC_6(VAR_5->context);
  return;
 }

 if (!FUNC_4(VAR_5->context, VAR_0,
          VAR_1))
  return;

 if (VAR_5->dimension_param)
  FUNC_3(VAR_5->dimension_param, &VAR_5->dimension);

 if (VAR_5->dimension_i_param)
  FUNC_3(VAR_5->dimension_i_param,
       &VAR_5->dimension_i);

 if (VAR_5->undistort_factor_param)
  FUNC_1(VAR_5->undistort_factor_param,
        (float)VAR_5->undistort_factor);

 if (VAR_5->sampling == VAR_2)
  FUNC_2(VAR_5->image_param,
        VAR_5->point_sampler);

 FUNC_5(VAR_5->context, VAR_5->effect,
        VAR_5->cx_out, VAR_5->cy_out,
        VAR_6);

 FUNC_0(VAR_4);
}

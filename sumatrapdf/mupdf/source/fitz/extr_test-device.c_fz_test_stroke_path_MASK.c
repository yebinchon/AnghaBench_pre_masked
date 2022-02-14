
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ resolved; scalar_t__ passthrough; } ;
typedef TYPE_1__ fz_test_device ;
typedef int fz_stroke_state ;
typedef int fz_path ;
typedef int fz_matrix ;
typedef int fz_device ;
typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_color_params ;


 int FUNC_0 (int *,scalar_t__,int const*,int const*,int ,int *,float const*,float,int ) ;
 int FUNC_1 (int *,TYPE_1__*,int *,float const*,int ) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, fz_device *VAR_1, const fz_path *VAR_2, const fz_stroke_state *VAR_3,
 fz_matrix VAR_4, fz_colorspace *VAR_5, const float *VAR_6, float VAR_7, fz_color_params VAR_8)
{
 fz_test_device *VAR_9 = (fz_test_device*)VAR_1;

 if (VAR_9->resolved == 0 && VAR_7 != 0.0f)
  FUNC_1(VAR_0, VAR_9, VAR_5, VAR_6, VAR_8);
 if (VAR_9->passthrough)
  FUNC_0(VAR_0, VAR_9->passthrough, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}

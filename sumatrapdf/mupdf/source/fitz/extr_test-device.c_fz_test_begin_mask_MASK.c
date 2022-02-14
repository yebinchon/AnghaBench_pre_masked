
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ passthrough; } ;
typedef TYPE_1__ fz_test_device ;
typedef int fz_rect ;
typedef int fz_device ;
typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_color_params ;


 int FUNC_0 (int *,scalar_t__,int ,int,int *,float const*,int ) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, fz_device *VAR_1, fz_rect VAR_2, int VAR_3, fz_colorspace *VAR_4, const float *VAR_5, fz_color_params VAR_6)
{
 fz_test_device *VAR_7 = (fz_test_device*)VAR_1;

 if (VAR_7->passthrough)
  FUNC_0(VAR_0, VAR_7->passthrough, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}

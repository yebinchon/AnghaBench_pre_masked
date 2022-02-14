
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shadearg {int color_params; TYPE_1__* shade; int * dev; } ;
typedef int fz_vertex ;
typedef int fz_test_device ;
struct TYPE_2__ {int colorspace; int use_function; } ;
typedef TYPE_1__ fz_shade ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,int ,float const*,int ) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, void *VAR_1, fz_vertex *VAR_2, const float *VAR_3)
{
 struct shadearg *VAR_4 = VAR_1;
 fz_test_device *VAR_5 = VAR_4->dev;
 fz_shade *VAR_6 = VAR_4->shade;
 if (!VAR_6->use_function)
  FUNC_0(VAR_0, VAR_5, VAR_6->colorspace, VAR_3, VAR_4->color_params);
}

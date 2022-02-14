
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * out; } ;
typedef TYPE_1__ svg_device ;
typedef int fz_output ;
typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_color_params ;


 int FUNC_0 (int *,int *,char*,...) ;
 int FUNC_1 (int *,int *,float const*,int ) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, svg_device *VAR_1, fz_colorspace *VAR_2, const float *VAR_3, float VAR_4, fz_color_params VAR_5)
{
 fz_output *VAR_6 = VAR_1->out;
 if (VAR_2)
 {
  int VAR_7 = FUNC_1(VAR_0, VAR_2, VAR_3, VAR_5);
  if (VAR_7 != 0)
   FUNC_0(VAR_0, VAR_6, " fill=\"#%06x\"", VAR_7);
 }
 else
  FUNC_0(VAR_0, VAR_6, " fill=\"none\"");
 if (VAR_4 != 1)
  FUNC_0(VAR_0, VAR_6, " fill-opacity=\"%g\"", VAR_4);
}

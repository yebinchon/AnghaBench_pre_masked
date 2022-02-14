
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * out; } ;
typedef TYPE_1__ svg_device ;
typedef int fz_path ;
typedef int fz_output ;
typedef int fz_matrix ;
typedef int fz_device ;
typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_color_params ;


 int FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int FUNC_2 (int *,TYPE_1__*,int *,float const*,float,int ) ;
 int FUNC_3 (int *,TYPE_1__*,int const*) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_0, fz_device *VAR_1, const fz_path *VAR_2, int VAR_3, fz_matrix VAR_4,
 fz_colorspace *VAR_5, const float *VAR_6, float VAR_7, fz_color_params VAR_8)
{
 svg_device *VAR_9 = (svg_device*)VAR_1;
 fz_output *VAR_10 = VAR_9->out;

 FUNC_0(VAR_0, VAR_10, "<path");
 FUNC_1(VAR_0, VAR_9, VAR_4);
 FUNC_3(VAR_0, VAR_9, VAR_2);
 FUNC_2(VAR_0, VAR_9, VAR_5, VAR_6, VAR_7, VAR_8);
 if (VAR_3)
  FUNC_0(VAR_0, VAR_10, " fill-rule=\"evenodd\"");
 FUNC_0(VAR_0, VAR_10, "/>\n");
}

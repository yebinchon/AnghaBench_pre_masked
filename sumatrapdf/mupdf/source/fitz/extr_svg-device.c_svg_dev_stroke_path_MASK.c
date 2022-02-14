
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * out; } ;
typedef TYPE_1__ svg_device ;
typedef int fz_stroke_state ;
typedef int fz_path ;
typedef int fz_output ;
typedef int fz_matrix ;
typedef int fz_device ;
typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_color_params ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int FUNC_2 (int *,TYPE_1__*,int const*) ;
 int FUNC_3 (int *,TYPE_1__*,int *,float const*,float,int ) ;
 int FUNC_4 (int *,TYPE_1__*,int const*,int ) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_1, fz_device *VAR_2, const fz_path *VAR_3, const fz_stroke_state *VAR_4, fz_matrix VAR_5,
 fz_colorspace *VAR_6, const float *VAR_7, float VAR_8, fz_color_params VAR_9)
{
 svg_device *VAR_10 = (svg_device*)VAR_2;
 fz_output *VAR_11 = VAR_10->out;

 FUNC_0(VAR_1, VAR_11, "<path");
 FUNC_1(VAR_1, VAR_10, VAR_5);
 FUNC_4(VAR_1, VAR_10, VAR_4, VAR_0);
 FUNC_3(VAR_1, VAR_10, VAR_6, VAR_7, VAR_8, VAR_9);
 FUNC_2(VAR_1, VAR_10, VAR_3);
 FUNC_0(VAR_1, VAR_11, "/>\n");
}

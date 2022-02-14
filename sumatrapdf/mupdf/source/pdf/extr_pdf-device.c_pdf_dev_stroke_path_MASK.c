
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pdf_device ;
struct TYPE_3__ {int buf; } ;
typedef TYPE_1__ gstate ;
typedef int fz_stroke_state ;
typedef int fz_path ;
typedef int fz_matrix ;
typedef int fz_device ;
typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_color_params ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,int *,float,int) ;
 int FUNC_3 (int *,int *,int *,float const*,int,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *,int const*) ;
 int FUNC_7 (int *,int *,int const*) ;

__attribute__((used)) static void
FUNC_8(fz_context *VAR_0, fz_device *VAR_1, const fz_path *VAR_2, const fz_stroke_state *VAR_3, fz_matrix VAR_4,
 fz_colorspace *VAR_5, const float *VAR_6, float VAR_7, fz_color_params VAR_8)
{
 pdf_device *VAR_9 = (pdf_device*)VAR_1;
 gstate *VAR_10 = FUNC_0(VAR_9);

 FUNC_5(VAR_0, VAR_9);
 FUNC_2(VAR_0, VAR_9, VAR_7, 1);
 FUNC_3(VAR_0, VAR_9, VAR_5, VAR_6, 1, VAR_8);
 FUNC_4(VAR_0, VAR_9, VAR_4);
 FUNC_7(VAR_0, VAR_9, VAR_3);
 FUNC_6(VAR_0, VAR_9, VAR_2);
 FUNC_1(VAR_0, VAR_10->buf, "S\n");
}

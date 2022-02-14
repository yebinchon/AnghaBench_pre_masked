
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int id; } ;
typedef TYPE_1__ svg_device ;
typedef int fz_output ;
struct TYPE_17__ {float a; float d; int member_0; } ;
typedef TYPE_2__ fz_matrix ;
struct TYPE_18__ {float w; float h; } ;
typedef TYPE_3__ fz_image ;
typedef int fz_device ;
typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_color_params ;


 int * FUNC_0 (int *,TYPE_1__*) ;
 TYPE_2__ FUNC_1 (TYPE_2__,TYPE_2__) ;
 int FUNC_2 (int *,int *,char*,...) ;
 int * FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*,TYPE_2__) ;
 int FUNC_5 (int *,TYPE_1__*,int *,float const*,float,int ) ;
 int FUNC_6 (int *,TYPE_1__*,TYPE_3__*,int ) ;

__attribute__((used)) static void
FUNC_7(fz_context *VAR_0, fz_device *VAR_1, fz_image *VAR_2, fz_matrix VAR_3,
 fz_colorspace *VAR_4, const float *VAR_5, float VAR_6, fz_color_params VAR_7)
{
 svg_device *VAR_8 = (svg_device*)VAR_1;
 fz_output *VAR_9;
 fz_matrix VAR_10 = VAR_3;
 fz_matrix VAR_11 = { 0 };
 int VAR_12 = VAR_8->id++;

 VAR_11.a = 1.0f / VAR_2->w;
 VAR_11.d = 1.0f / VAR_2->h;

 VAR_10 = FUNC_1(VAR_11, VAR_3);
 VAR_9 = FUNC_3(VAR_0, VAR_8);
 FUNC_2(VAR_0, VAR_9, "<mask id=\"ma%d\">\n", VAR_12);
 FUNC_6(VAR_0, VAR_8, VAR_2, VAR_7);
 FUNC_2(VAR_0, VAR_9, "</mask>\n");
 VAR_9 = FUNC_0(VAR_0, VAR_8);
 FUNC_2(VAR_0, VAR_9, "<rect x=\"0\" y=\"0\" width=\"%d\" height=\"%d\"", VAR_2->w, VAR_2->h);
 FUNC_5(VAR_0, VAR_8, VAR_4, VAR_5, VAR_6, VAR_7);
 FUNC_4(VAR_0, VAR_8, VAR_10);
 FUNC_2(VAR_0, VAR_9, " mask=\"url(#ma%d)\"/>\n", VAR_12);
}

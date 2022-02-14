
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int depth; int * out; } ;
typedef TYPE_1__ fz_trace_device ;
struct TYPE_5__ {int y1; int x1; int y0; int x0; } ;
typedef TYPE_2__ fz_rect ;
typedef int fz_output ;
typedef int fz_device ;
typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_color_params ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *,char*,...) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, fz_device *VAR_1, fz_rect VAR_2, int VAR_3, fz_colorspace *VAR_4, const float *VAR_5, fz_color_params VAR_6)
{
 fz_trace_device *VAR_7 = (fz_trace_device*)VAR_1;
 fz_output *VAR_8 = VAR_7->out;
 FUNC_0(VAR_0, VAR_8, VAR_7->depth);
 FUNC_1(VAR_0, VAR_8, "<clip_mask bbox=\"%g %g %g %g\" s=\"%s\"",
  VAR_2.x0, VAR_2.y0, VAR_2.x1, VAR_2.y1,
  VAR_3 ? "luminosity" : "alpha");
 FUNC_1(VAR_0, VAR_8, ">\n");
 VAR_7->depth++;
}

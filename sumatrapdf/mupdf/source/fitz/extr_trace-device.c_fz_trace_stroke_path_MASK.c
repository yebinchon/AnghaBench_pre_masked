
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int depth; int * out; } ;
typedef TYPE_1__ fz_trace_device ;
struct TYPE_6__ {int dash_len; int * dash_list; int dash_phase; int linejoin; int end_cap; int dash_cap; int start_cap; int miterlimit; int linewidth; } ;
typedef TYPE_2__ fz_stroke_state ;
typedef int fz_path ;
typedef int fz_output ;
typedef int fz_matrix ;
typedef int fz_device ;
typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_color_params ;


 int FUNC_0 (int *,int *,int *,float const*,float) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,TYPE_1__*,int const*) ;
 int FUNC_4 (int *,int *,char*,...) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_0, fz_device *VAR_1, const fz_path *VAR_2, const fz_stroke_state *VAR_3, fz_matrix VAR_4,
 fz_colorspace *VAR_5, const float *VAR_6, float VAR_7, fz_color_params VAR_8)
{
 fz_trace_device *VAR_9 = (fz_trace_device*)VAR_1;
 fz_output *VAR_10 = VAR_9->out;
 int VAR_11;

 FUNC_1(VAR_0, VAR_10, VAR_9->depth);
 FUNC_4(VAR_0, VAR_10, "<stroke_path");
 FUNC_4(VAR_0, VAR_10, " linewidth=\"%g\"", VAR_3->linewidth);
 FUNC_4(VAR_0, VAR_10, " miterlimit=\"%g\"", VAR_3->miterlimit);
 FUNC_4(VAR_0, VAR_10, " linecap=\"%d,%d,%d\"", VAR_3->start_cap, VAR_3->dash_cap, VAR_3->end_cap);
 FUNC_4(VAR_0, VAR_10, " linejoin=\"%d\"", VAR_3->linejoin);

 if (VAR_3->dash_len)
 {
  FUNC_4(VAR_0, VAR_10, " dash_phase=\"%g\" dash=\"", VAR_3->dash_phase);
  for (VAR_11 = 0; VAR_11 < VAR_3->dash_len; VAR_11++)
   FUNC_4(VAR_0, VAR_10, "%s%g", VAR_11 > 0 ? " " : "", VAR_3->dash_list[VAR_11]);
  FUNC_4(VAR_0, VAR_10, "\"");
 }

 FUNC_0(VAR_0, VAR_10, VAR_5, VAR_6, VAR_7);
 FUNC_2(VAR_0, VAR_10, VAR_4);
 FUNC_4(VAR_0, VAR_10, ">\n");

 FUNC_3(VAR_0, VAR_9, VAR_2);

 FUNC_1(VAR_0, VAR_10, VAR_9->depth);
 FUNC_4(VAR_0, VAR_10, "</stroke_path>\n");
}

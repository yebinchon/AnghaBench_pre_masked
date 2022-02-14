
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int depth; int * out; } ;
typedef TYPE_1__ fz_trace_device ;
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
 int FUNC_4 (int *,int *,char*) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_0, fz_device *VAR_1, const fz_path *VAR_2, int VAR_3, fz_matrix VAR_4,
 fz_colorspace *VAR_5, const float *VAR_6, float VAR_7, fz_color_params VAR_8)
{
 fz_trace_device *VAR_9 = (fz_trace_device*)VAR_1;
 fz_output *VAR_10 = VAR_9->out;
 FUNC_1(VAR_0, VAR_10, VAR_9->depth);
 FUNC_4(VAR_0, VAR_10, "<fill_path");
 if (VAR_3)
  FUNC_4(VAR_0, VAR_10, " winding=\"eofill\"");
 else
  FUNC_4(VAR_0, VAR_10, " winding=\"nonzero\"");
 FUNC_0(VAR_0, VAR_10, VAR_5, VAR_6, VAR_7);
 FUNC_2(VAR_0, VAR_10, VAR_4);
 FUNC_4(VAR_0, VAR_10, ">\n");
 FUNC_3(VAR_0, VAR_9, VAR_2);
 FUNC_1(VAR_0, VAR_10, VAR_9->depth);
 FUNC_4(VAR_0, VAR_10, "</fill_path>\n");
}

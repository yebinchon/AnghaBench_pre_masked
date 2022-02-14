
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ depth; int * out; } ;
typedef TYPE_1__ fz_trace_device ;
typedef int fz_text ;
typedef int fz_output ;
typedef int fz_matrix ;
typedef int fz_device ;
typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_color_params ;


 int FUNC_0 (int *,int *,int *,float const*,float) ;
 int FUNC_1 (int *,int *,scalar_t__) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *,int const*,scalar_t__) ;
 int FUNC_4 (int *,int *,char*) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_0, fz_device *VAR_1, const fz_text *VAR_2, fz_matrix VAR_3,
 fz_colorspace *VAR_4, const float *VAR_5, float VAR_6, fz_color_params VAR_7)
{
 fz_trace_device *VAR_8 = (fz_trace_device*)VAR_1;
 fz_output *VAR_9 = VAR_8->out;
 FUNC_1(VAR_0, VAR_9, VAR_8->depth);
 FUNC_4(VAR_0, VAR_9, "<fill_text");
 FUNC_0(VAR_0, VAR_9, VAR_4, VAR_5, VAR_6);
 FUNC_2(VAR_0, VAR_9, VAR_3);
 FUNC_4(VAR_0, VAR_9, ">\n");
 FUNC_3(VAR_0, VAR_9, VAR_2, VAR_8->depth+1);
 FUNC_1(VAR_0, VAR_9, VAR_8->depth);
 FUNC_4(VAR_0, VAR_9, "</fill_text>\n");
}

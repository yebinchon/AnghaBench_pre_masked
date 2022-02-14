
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ depth; int * out; } ;
typedef TYPE_1__ fz_trace_device ;
typedef int fz_text ;
typedef int fz_stroke_state ;
typedef int fz_rect ;
typedef int fz_output ;
typedef int fz_matrix ;
typedef int fz_device ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,scalar_t__) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *,int const*,scalar_t__) ;
 int FUNC_3 (int *,int *,char*) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_0, fz_device *VAR_1, const fz_text *VAR_2, const fz_stroke_state *VAR_3, fz_matrix VAR_4, fz_rect VAR_5)
{
 fz_trace_device *VAR_6 = (fz_trace_device*)VAR_1;
 fz_output *VAR_7 = VAR_6->out;
 FUNC_0(VAR_0, VAR_7, VAR_6->depth);
 FUNC_3(VAR_0, VAR_7, "<clip_stroke_text");
 FUNC_1(VAR_0, VAR_7, VAR_4);
 FUNC_3(VAR_0, VAR_7, ">\n");
 FUNC_2(VAR_0, VAR_7, VAR_2, VAR_6->depth+1);
 FUNC_0(VAR_0, VAR_7, VAR_6->depth);
 FUNC_3(VAR_0, VAR_7, "</clip_stroke_text>\n");
 VAR_6->depth++;
}

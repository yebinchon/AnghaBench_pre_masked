
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int depth; int * out; } ;
typedef TYPE_1__ fz_trace_device ;
struct TYPE_6__ {int y1; int x1; int y0; int x0; } ;
typedef TYPE_2__ fz_rect ;
typedef int fz_output ;
typedef int fz_matrix ;
typedef int fz_device ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *,char*,...) ;

__attribute__((used)) static int
FUNC_3(fz_context *VAR_0, fz_device *VAR_1, fz_rect VAR_2, fz_rect VAR_3, float VAR_4, float VAR_5, fz_matrix VAR_6, int VAR_7)
{
 fz_trace_device *VAR_8 = (fz_trace_device*)VAR_1;
 fz_output *VAR_9 = VAR_8->out;
 FUNC_0(VAR_0, VAR_9, VAR_8->depth);
 FUNC_2(VAR_0, VAR_9, "<tile id=\"%d\"", VAR_7);
 FUNC_2(VAR_0, VAR_9, " area=\"%g %g %g %g\"", VAR_2.x0, VAR_2.y0, VAR_2.x1, VAR_2.y1);
 FUNC_2(VAR_0, VAR_9, " view=\"%g %g %g %g\"", VAR_3.x0, VAR_3.y0, VAR_3.x1, VAR_3.y1);
 FUNC_2(VAR_0, VAR_9, " xstep=\"%g\" ystep=\"%g\"", VAR_4, VAR_5);
 FUNC_1(VAR_0, VAR_9, VAR_6);
 FUNC_2(VAR_0, VAR_9, ">\n");
 VAR_8->depth++;
 return 0;
}

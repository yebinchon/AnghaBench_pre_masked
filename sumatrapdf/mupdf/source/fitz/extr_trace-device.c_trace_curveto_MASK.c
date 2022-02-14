
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int depth; int * out; } ;
typedef TYPE_1__ fz_trace_device ;
typedef int fz_output ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *,char*,float,float,float,float,float,float) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, void *VAR_1, float VAR_2, float VAR_3, float VAR_4, float VAR_5, float VAR_6, float VAR_7)
{
 fz_trace_device *VAR_8 = (fz_trace_device*)VAR_1;
 fz_output *VAR_9 = VAR_8->out;
 FUNC_0(VAR_0, VAR_9, VAR_8->depth);
 FUNC_1(VAR_0, VAR_9, "<curveto x1=\"%g\" y1=\"%g\" x2=\"%g\" y2=\"%g\" x3=\"%g\" y3=\"%g\"/>\n", VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
}


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


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *,char*,int ,int ,int ,int ,int,int,int ,float) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_0, fz_device *VAR_1, fz_rect VAR_2, fz_colorspace *VAR_3, int VAR_4, int VAR_5, int VAR_6, float VAR_7)
{
 fz_trace_device *VAR_8 = (fz_trace_device*)VAR_1;
 fz_output *VAR_9 = VAR_8->out;
 FUNC_1(VAR_0, VAR_9, VAR_8->depth);
 FUNC_2(VAR_0, VAR_9, "<group bbox=\"%g %g %g %g\" isolated=\"%d\" knockout=\"%d\" blendmode=\"%s\" alpha=\"%g\">\n",
  VAR_2.x0, VAR_2.y0, VAR_2.x1, VAR_2.y1,
  VAR_4, VAR_5, FUNC_0(VAR_6), VAR_7);
 VAR_8->depth++;
}

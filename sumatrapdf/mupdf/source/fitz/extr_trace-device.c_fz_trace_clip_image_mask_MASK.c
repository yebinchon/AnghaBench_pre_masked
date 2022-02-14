
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int depth; int * out; } ;
typedef TYPE_1__ fz_trace_device ;
typedef int fz_rect ;
typedef int fz_output ;
typedef int fz_matrix ;
struct TYPE_5__ {int h; int w; } ;
typedef TYPE_2__ fz_image ;
typedef int fz_device ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *,char*,...) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_0, fz_device *VAR_1, fz_image *VAR_2, fz_matrix VAR_3, fz_rect VAR_4)
{
 fz_trace_device *VAR_5 = (fz_trace_device*)VAR_1;
 fz_output *VAR_6 = VAR_5->out;
 FUNC_0(VAR_0, VAR_6, VAR_5->depth);
 FUNC_2(VAR_0, VAR_6, "<clip_image_mask");
 FUNC_1(VAR_0, VAR_6, VAR_3);
 FUNC_2(VAR_0, VAR_6, " width=\"%d\" height=\"%d\"", VAR_2->w, VAR_2->h);
 FUNC_2(VAR_0, VAR_6, "/>\n");
 VAR_5->depth++;
}

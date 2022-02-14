
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int depth; int * out; } ;
typedef TYPE_1__ fz_trace_device ;
typedef int fz_output ;
typedef int fz_matrix ;
struct TYPE_5__ {int h; int w; scalar_t__ colorspace; } ;
typedef TYPE_2__ fz_image ;
typedef int fz_device ;
typedef int fz_context ;
typedef int fz_color_params ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *,char*,...) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_0, fz_device *VAR_1, fz_image *VAR_2, fz_matrix VAR_3, float VAR_4, fz_color_params VAR_5)
{
 fz_trace_device *VAR_6 = (fz_trace_device*)VAR_1;
 fz_output *VAR_7 = VAR_6->out;
 FUNC_1(VAR_0, VAR_7, VAR_6->depth);
 FUNC_3(VAR_0, VAR_7, "<fill_image alpha=\"%g\"", VAR_4);
 if (VAR_2->colorspace)
  FUNC_3(VAR_0, VAR_7, " colorspace=\"%s\"", FUNC_0(VAR_0, VAR_2->colorspace));
 FUNC_2(VAR_0, VAR_7, VAR_3);
 FUNC_3(VAR_0, VAR_7, " width=\"%d\" height=\"%d\"", VAR_2->w, VAR_2->h);
 FUNC_3(VAR_0, VAR_7, "/>\n");
}

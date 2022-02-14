
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int depth; int * out; } ;
typedef TYPE_6__ fz_trace_device ;
struct TYPE_12__ {int ** coords; int * extend; } ;
struct TYPE_10__ {int f; int e; int d; int c; int b; int a; } ;
struct TYPE_11__ {int ydivs; int xdivs; int ** domain; TYPE_2__ matrix; } ;
struct TYPE_13__ {TYPE_4__ l_or_r; TYPE_3__ f; } ;
struct TYPE_9__ {int f; int e; int d; int c; int b; int a; } ;
struct TYPE_15__ {int type; TYPE_5__ u; int colorspace; TYPE_1__ matrix; } ;
typedef TYPE_7__ fz_shade ;
typedef int fz_output ;
typedef int fz_matrix ;
typedef int fz_device ;
typedef int fz_context ;
typedef int fz_color_params ;





 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *,char*,...) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_0, fz_device *VAR_1, fz_shade *VAR_2, fz_matrix VAR_3, float VAR_4, fz_color_params VAR_5)
{
 fz_trace_device *VAR_6 = (fz_trace_device*)VAR_1;
 fz_output *VAR_7 = VAR_6->out;
 FUNC_1(VAR_0, VAR_7, VAR_6->depth);
 FUNC_3(VAR_0, VAR_7, "<fill_shade alpha=\"%g\"", VAR_4);
 FUNC_2(VAR_0, VAR_7, VAR_3);
 FUNC_3(VAR_0, VAR_7, " pattern_matrix=\"%g %g %g %g %g %g\"",
  VAR_2->matrix.a,
  VAR_2->matrix.b,
  VAR_2->matrix.c,
  VAR_2->matrix.d,
  VAR_2->matrix.e,
  VAR_2->matrix.f);
 FUNC_3(VAR_0, VAR_7, " colorspace=\"%s\"", FUNC_0(VAR_0, VAR_2->colorspace));


 switch (VAR_2->type)
 {
 case 130:
  FUNC_3(VAR_0, VAR_7, " type=\"function\"");
  FUNC_3(VAR_0, VAR_7, " function_matrix=\"%g %g %g %g %g %g\"",
   VAR_2->u.f.matrix.a,
   VAR_2->u.f.matrix.b,
   VAR_2->u.f.matrix.c,
   VAR_2->u.f.matrix.d,
   VAR_2->u.f.matrix.e,
   VAR_2->u.f.matrix.f);
  FUNC_3(VAR_0, VAR_7, " domain=\"%g %g %g %g\"",
   VAR_2->u.f.domain[0][0],
   VAR_2->u.f.domain[0][1],
   VAR_2->u.f.domain[1][0],
   VAR_2->u.f.domain[1][1]);
  FUNC_3(VAR_0, VAR_7, " samples=\"%d %d\"",
   VAR_2->u.f.xdivs,
   VAR_2->u.f.ydivs);
  FUNC_3(VAR_0, VAR_7, "/>\n");
  break;
 case 129:
  FUNC_3(VAR_0, VAR_7, " type=\"linear\"");
  FUNC_3(VAR_0, VAR_7, " extend=\"%d %d\"",
   VAR_2->u.l_or_r.extend[0],
   VAR_2->u.l_or_r.extend[1]);
  FUNC_3(VAR_0, VAR_7, " start=\"%g %g\"",
   VAR_2->u.l_or_r.coords[0][0],
   VAR_2->u.l_or_r.coords[0][1]);
  FUNC_3(VAR_0, VAR_7, " end=\"%g %g\"",
   VAR_2->u.l_or_r.coords[1][0],
   VAR_2->u.l_or_r.coords[1][1]);
  FUNC_3(VAR_0, VAR_7, "/>\n");
  break;
 case 128:
  FUNC_3(VAR_0, VAR_7, " type=\"radial\"");
  FUNC_3(VAR_0, VAR_7, " extend=\"%d %d\"",
   VAR_2->u.l_or_r.extend[0],
   VAR_2->u.l_or_r.extend[1]);
  FUNC_3(VAR_0, VAR_7, " inner=\"%g %g %g\"",
   VAR_2->u.l_or_r.coords[0][0],
   VAR_2->u.l_or_r.coords[0][1],
   VAR_2->u.l_or_r.coords[0][2]);
  FUNC_3(VAR_0, VAR_7, " outer=\"%g %g %g\"",
   VAR_2->u.l_or_r.coords[1][0],
   VAR_2->u.l_or_r.coords[1][1],
   VAR_2->u.l_or_r.coords[1][2]);
  FUNC_3(VAR_0, VAR_7, "/>\n");
  break;
 default:
  FUNC_3(VAR_0, VAR_7, " type=\"mesh\"/>\n");
  break;
 }
}

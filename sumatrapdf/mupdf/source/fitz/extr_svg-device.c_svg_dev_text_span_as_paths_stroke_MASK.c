
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_21__ {int * out; } ;
typedef TYPE_3__ svg_device ;
struct TYPE_19__ {int d; int c; int b; int a; } ;
struct TYPE_22__ {int len; TYPE_5__* items; TYPE_1__ trm; } ;
typedef TYPE_4__ fz_text_span ;
struct TYPE_23__ {int gid; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_5__ fz_text_item ;
typedef int fz_stroke_state ;
typedef int fz_output ;
struct TYPE_24__ {int member_0; int member_3; scalar_t__ f; scalar_t__ e; int d; int c; int b; int a; int member_5; int member_4; int member_2; int member_1; } ;
typedef TYPE_6__ fz_matrix ;
typedef int fz_device ;
typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_color_params ;
struct TYPE_25__ {int id; TYPE_2__* sentlist; } ;
typedef TYPE_7__ font ;
struct TYPE_20__ {scalar_t__ y_off; scalar_t__ x_off; } ;


 TYPE_6__ FUNC_0 (TYPE_6__,TYPE_6__) ;
 int FUNC_1 (int *,int *,char*,...) ;
 int FUNC_2 (int *,TYPE_3__*,TYPE_6__) ;
 int FUNC_3 (int *,TYPE_3__*,int *,float const*,float,int ) ;
 int FUNC_4 (int *,TYPE_3__*,int const*,TYPE_6__) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_0, fz_device *VAR_1, const fz_text_span *VAR_2,
 const fz_stroke_state *VAR_3, fz_matrix VAR_4,
 fz_colorspace *VAR_5, const float *VAR_6, float VAR_7, font *VAR_8, fz_color_params VAR_9)
{
 svg_device *VAR_10 = (svg_device*)VAR_1;
 fz_output *VAR_11 = VAR_10->out;
 fz_matrix VAR_12 = { 1, 0, 0, 1, 0, 0};
 fz_matrix VAR_13, VAR_14;
 int VAR_15;


 VAR_13.a = VAR_2->trm.a;
 VAR_13.b = VAR_2->trm.b;
 VAR_13.c = VAR_2->trm.c;
 VAR_13.d = VAR_2->trm.d;
 VAR_13.e = 0;
 VAR_13.f = 0;

 for (VAR_15=0; VAR_15 < VAR_2->len; VAR_15++)
 {
  fz_text_item *VAR_16 = &VAR_2->items[VAR_15];
  int VAR_17 = VAR_16->gid;
  if (VAR_17 < 0)
   continue;

  VAR_12.e = VAR_8->sentlist[VAR_17].x_off;
  VAR_12.f = VAR_8->sentlist[VAR_17].y_off;
  VAR_13.e = VAR_16->x;
  VAR_13.f = VAR_16->y;
  VAR_14 = FUNC_0(VAR_12, FUNC_0(VAR_13, VAR_4));

  FUNC_1(VAR_0, VAR_11, "<use xlink:href=\"#font_%x_%x\"", VAR_8->id, VAR_17);
  FUNC_4(VAR_0, VAR_10, VAR_3, VAR_14);
  FUNC_2(VAR_0, VAR_10, VAR_14);
  FUNC_3(VAR_0, VAR_10, VAR_5, VAR_6, VAR_7, VAR_9);
  FUNC_1(VAR_0, VAR_11, "/>\n");
 }
}

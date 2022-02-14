
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_19__ {int * out; } ;
typedef TYPE_3__ svg_device ;
struct TYPE_17__ {int d; int c; int b; int a; } ;
struct TYPE_20__ {int len; TYPE_5__* items; TYPE_1__ trm; } ;
typedef TYPE_4__ fz_text_span ;
struct TYPE_21__ {int gid; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_5__ fz_text_item ;
typedef int fz_output ;
struct TYPE_22__ {int member_0; int member_3; scalar_t__ f; scalar_t__ e; int d; int c; int b; int a; int member_5; int member_4; int member_2; int member_1; } ;
typedef TYPE_6__ fz_matrix ;
typedef int fz_device ;
typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_color_params ;
struct TYPE_23__ {int id; TYPE_2__* sentlist; } ;
typedef TYPE_7__ font ;
struct TYPE_18__ {scalar_t__ y_off; scalar_t__ x_off; } ;


 TYPE_6__ FUNC_0 (TYPE_6__,TYPE_6__) ;
 int FUNC_1 (int *,int *,char*,...) ;
 int FUNC_2 (int *,TYPE_3__*,TYPE_6__) ;
 int FUNC_3 (int *,TYPE_3__*,int *,float const*,float,int ) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_0, fz_device *VAR_1, const fz_text_span *VAR_2, fz_matrix VAR_3,
 fz_colorspace *VAR_4, const float *VAR_5, float VAR_6, font *VAR_7, fz_color_params VAR_8)
{
 svg_device *VAR_9 = (svg_device*)VAR_1;
 fz_output *VAR_10 = VAR_9->out;
 fz_matrix VAR_11 = { 1, 0, 0, 1, 0, 0};
 fz_matrix VAR_12, VAR_13;
 int VAR_14;


 VAR_12.a = VAR_2->trm.a;
 VAR_12.b = VAR_2->trm.b;
 VAR_12.c = VAR_2->trm.c;
 VAR_12.d = VAR_2->trm.d;
 VAR_12.e = 0;
 VAR_12.f = 0;

 for (VAR_14=0; VAR_14 < VAR_2->len; VAR_14++)
 {
  fz_text_item *VAR_15 = &VAR_2->items[VAR_14];
  int VAR_16 = VAR_15->gid;
  if (VAR_16 < 0)
   continue;

  VAR_11.e = VAR_7->sentlist[VAR_16].x_off;
  VAR_11.f = VAR_7->sentlist[VAR_16].y_off;
  VAR_12.e = VAR_15->x;
  VAR_12.f = VAR_15->y;
  VAR_13 = FUNC_0(VAR_11, FUNC_0(VAR_12, VAR_3));

  FUNC_1(VAR_0, VAR_10, "<use xlink:href=\"#font_%x_%x\"", VAR_7->id, VAR_16);
  FUNC_2(VAR_0, VAR_9, VAR_13);
  FUNC_3(VAR_0, VAR_9, VAR_4, VAR_5, VAR_6, VAR_8);
  FUNC_1(VAR_0, VAR_10, "/>\n");
 }
}

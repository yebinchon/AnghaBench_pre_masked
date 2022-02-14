
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


struct TYPE_31__ {scalar_t__ f; scalar_t__ e; } ;
struct TYPE_28__ {int len; int font; TYPE_2__* items; TYPE_6__ trm; struct TYPE_28__* next; } ;
typedef TYPE_3__ fz_text_span ;
struct TYPE_29__ {TYPE_3__* head; } ;
typedef TYPE_4__ fz_text ;
typedef int fz_stroke_state ;
typedef int fz_path ;
struct TYPE_26__ {int member_0; } ;
struct TYPE_30__ {TYPE_1__ member_0; } ;
typedef TYPE_5__ fz_overprint ;
typedef TYPE_6__ fz_matrix ;
typedef int fz_glyph ;
struct TYPE_32__ {int blendmode; int scissor; scalar_t__ group_alpha; scalar_t__ shape; scalar_t__ dest; } ;
typedef TYPE_7__ fz_draw_state ;
struct TYPE_33__ {size_t top; int default_cs; scalar_t__ resolve_spots; int rast; TYPE_7__* stack; TYPE_6__ transform; } ;
typedef TYPE_8__ fz_draw_device ;
typedef int fz_device ;
typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_color_params ;
struct TYPE_27__ {int gid; scalar_t__ y; scalar_t__ x; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,scalar_t__,int *,int,int,int *,TYPE_5__*) ;
 TYPE_6__ FUNC_1 (TYPE_6__,TYPE_6__) ;
 int * FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *,int *,int *,int const*,TYPE_6__,int *,float const*,float,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 TYPE_7__* FUNC_6 (int *,TYPE_8__*) ;
 int FUNC_7 (int *,TYPE_8__*) ;
 int * FUNC_8 (int *,int ,int,TYPE_6__) ;
 int FUNC_9 (int ) ;
 int * FUNC_10 (int *,int ,int,TYPE_6__*,TYPE_6__,int const*,int *,int) ;
 int FUNC_11 (int *,char*) ;
 TYPE_7__* FUNC_12 (int *,TYPE_8__*,int ,int ) ;
 TYPE_5__* FUNC_13 (int *,TYPE_5__*,float const*,int *,float,int ,unsigned char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_14(fz_context *VAR_2, fz_device *VAR_3, const fz_text *VAR_4, const fz_stroke_state *VAR_5,
 fz_matrix VAR_6, fz_colorspace *VAR_7, const float *VAR_8, float VAR_9, fz_color_params VAR_10)
{
 fz_draw_device *VAR_11 = (fz_draw_device*)VAR_3;
 fz_matrix VAR_12 = FUNC_1(VAR_6, VAR_11->transform);
 fz_draw_state *VAR_13 = &VAR_11->stack[VAR_11->top];
 unsigned char VAR_14[VAR_1 + 1];
 unsigned char VAR_15 = 255;
 unsigned char VAR_16 = VAR_9 * 255;
 fz_text_span *VAR_17;
 int VAR_18;
 fz_colorspace *VAR_19 = ((void*)0);
 int VAR_20 = FUNC_9(VAR_11->rast);
 fz_overprint VAR_21 = { { 0 } };
 fz_overprint *VAR_22;

 if (VAR_11->top == 0 && VAR_11->resolve_spots)
  VAR_13 = FUNC_12(VAR_2, VAR_11, VAR_10, VAR_11->default_cs);

 if (VAR_7)
  VAR_19 = FUNC_2(VAR_2, VAR_11->default_cs, VAR_7);

 if (VAR_13->blendmode & VAR_0)
  VAR_13 = FUNC_6(VAR_2, VAR_11);

 VAR_22 = FUNC_13(VAR_2, &VAR_21, VAR_8, VAR_19, VAR_9, VAR_10, VAR_14, VAR_13->dest);

 for (VAR_17 = VAR_4->head; VAR_17; VAR_17 = VAR_17->next)
 {
  fz_matrix VAR_23, VAR_24;
  fz_glyph *VAR_25;
  int VAR_26;

  VAR_23 = VAR_17->trm;

  for (VAR_18 = 0; VAR_18 < VAR_17->len; VAR_18++)
  {
   VAR_26 = VAR_17->items[VAR_18].gid;
   if (VAR_26 < 0)
    continue;

   VAR_23.e = VAR_17->items[VAR_18].x;
   VAR_23.f = VAR_17->items[VAR_18].y;
   VAR_24 = FUNC_1(VAR_23, VAR_12);

   VAR_25 = FUNC_10(VAR_2, VAR_17->font, VAR_26, &VAR_24, VAR_12, VAR_5, &VAR_13->scissor, VAR_20);
   if (VAR_25)
   {
    int VAR_27 = (int)VAR_24.e;
    int VAR_28 = (int)VAR_24.f;
    FUNC_0(VAR_14, VAR_13->dest, VAR_25, VAR_27, VAR_28, &VAR_13->scissor, VAR_22);
    if (VAR_13->shape)
     FUNC_0(&VAR_15, VAR_13->shape, VAR_25, VAR_27, VAR_28, &VAR_13->scissor, 0);
    if (VAR_13->group_alpha)
     FUNC_0(&VAR_16, VAR_13->group_alpha, VAR_25, VAR_27, VAR_28, &VAR_13->scissor, 0);
    FUNC_4(VAR_2, VAR_25);
   }
   else
   {
    fz_path *VAR_29 = FUNC_8(VAR_2, VAR_17->font, VAR_26, VAR_23);
    if (VAR_29)
    {
     FUNC_3(VAR_2, VAR_3, VAR_29, VAR_5, VAR_6, VAR_19, VAR_8, VAR_9, VAR_10);
     FUNC_5(VAR_2, VAR_29);
    }
    else
    {
     FUNC_11(VAR_2, "cannot render glyph");
    }
   }
  }
 }

 if (VAR_13->blendmode & VAR_0)
  FUNC_7(VAR_2, VAR_11);
}

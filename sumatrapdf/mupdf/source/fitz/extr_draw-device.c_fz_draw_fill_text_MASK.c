
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_52__ TYPE_9__ ;
typedef struct TYPE_51__ TYPE_8__ ;
typedef struct TYPE_50__ TYPE_7__ ;
typedef struct TYPE_49__ TYPE_6__ ;
typedef struct TYPE_48__ TYPE_5__ ;
typedef struct TYPE_47__ TYPE_4__ ;
typedef struct TYPE_46__ TYPE_3__ ;
typedef struct TYPE_45__ TYPE_2__ ;
typedef struct TYPE_44__ TYPE_1__ ;
typedef struct TYPE_43__ TYPE_14__ ;
typedef struct TYPE_42__ TYPE_11__ ;
typedef struct TYPE_41__ TYPE_10__ ;


struct TYPE_50__ {scalar_t__ f; scalar_t__ e; int d; scalar_t__ c; scalar_t__ b; int a; } ;
struct TYPE_46__ {int len; int font; TYPE_2__* items; TYPE_7__ trm; struct TYPE_46__* next; } ;
typedef TYPE_3__ fz_text_span ;
struct TYPE_47__ {TYPE_3__* head; } ;
typedef TYPE_4__ fz_text ;
typedef int fz_rasterizer ;
struct TYPE_48__ {int n; scalar_t__ y; scalar_t__ x; int h; int w; } ;
typedef TYPE_5__ fz_pixmap ;
typedef int fz_path ;
struct TYPE_44__ {int member_0; } ;
struct TYPE_49__ {TYPE_1__ member_0; } ;
typedef TYPE_6__ fz_overprint ;
typedef TYPE_7__ fz_matrix ;
struct TYPE_51__ {TYPE_5__* pixmap; } ;
typedef TYPE_8__ fz_glyph ;
struct TYPE_52__ {int blendmode; TYPE_14__* group_alpha; TYPE_14__* shape; int scissor; TYPE_14__* dest; } ;
typedef TYPE_9__ fz_draw_state ;
struct TYPE_41__ {size_t top; int default_cs; scalar_t__ resolve_spots; int * rast; TYPE_9__* stack; TYPE_7__ transform; } ;
typedef TYPE_10__ fz_draw_device ;
struct TYPE_42__ {int hints; int flags; } ;
typedef TYPE_11__ fz_device ;
typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_color_params ;
struct TYPE_45__ {int gid; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_43__ {int alpha; int * colorspace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned char*,TYPE_14__*,TYPE_8__*,int,int,int *,TYPE_6__*) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_7__ FUNC_2 (TYPE_7__,TYPE_7__) ;
 int * FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,TYPE_11__*,int *,int ,TYPE_7__,int *,float const*,float,int ) ;
 int FUNC_5 (int *,TYPE_8__*) ;
 int FUNC_6 (int *,int *) ;
 TYPE_9__* FUNC_7 (int *,TYPE_10__*) ;
 int FUNC_8 (int *,TYPE_10__*) ;
 int * FUNC_9 (int *,int ,int,TYPE_7__) ;
 int FUNC_10 (int *,TYPE_14__*,int *,TYPE_14__*,TYPE_14__*,TYPE_5__*,TYPE_7__,float,int,int,TYPE_6__*) ;
 int FUNC_11 (int *) ;
 TYPE_8__* FUNC_12 (int *,int ,int,TYPE_7__*,int *,int *,int ,int ) ;
 int FUNC_13 (int *,int ,char*) ;
 int FUNC_14 (int *,char*) ;
 TYPE_9__* FUNC_15 (int *,TYPE_10__*,int ,int ) ;
 TYPE_6__* FUNC_16 (int *,TYPE_6__*,float const*,int *,float,int ,unsigned char*,TYPE_14__*) ;

__attribute__((used)) static void
FUNC_17(fz_context *VAR_5, fz_device *VAR_6, const fz_text *VAR_7, fz_matrix VAR_8,
 fz_colorspace *VAR_9, const float *VAR_10, float VAR_11, fz_color_params VAR_12)
{
 fz_draw_device *VAR_13 = (fz_draw_device*)VAR_6;
 fz_matrix VAR_14 = FUNC_2(VAR_8, VAR_13->transform);
 fz_draw_state *VAR_15 = &VAR_13->stack[VAR_13->top];
 fz_colorspace *VAR_16 = VAR_15->dest->colorspace;
 unsigned char VAR_17[VAR_4 + 1];
 unsigned char VAR_18, VAR_19;
 fz_text_span *VAR_20;
 int VAR_21;
 fz_colorspace *VAR_22 = ((void*)0);
 fz_rasterizer *VAR_23 = VAR_13->rast;
 fz_overprint VAR_24 = { { 0 } };
 fz_overprint *VAR_25;

 if (VAR_13->top == 0 && VAR_13->resolve_spots)
  VAR_15 = FUNC_15(VAR_5, VAR_13, VAR_12, VAR_13->default_cs);

 if (VAR_9)
  VAR_22 = FUNC_3(VAR_5, VAR_13->default_cs, VAR_9);

 if (VAR_22 == ((void*)0) && VAR_16 != ((void*)0))
  FUNC_13(VAR_5, VAR_3, "color destination requires source color");

 if (VAR_15->blendmode & VAR_0)
  VAR_15 = FUNC_7(VAR_5, VAR_13);

 VAR_25 = FUNC_16(VAR_5, &VAR_24, VAR_10, VAR_22, VAR_11, VAR_12, VAR_17, VAR_15->dest);
 VAR_18 = 255;
 VAR_19 = 255 * VAR_11;

 for (VAR_20 = VAR_7->head; VAR_20; VAR_20 = VAR_20->next)
 {
  fz_matrix VAR_26, VAR_27;
  fz_glyph *VAR_28;
  int VAR_29;

  VAR_26 = VAR_20->trm;

  for (VAR_21 = 0; VAR_21 < VAR_20->len; VAR_21++)
  {
   VAR_29 = VAR_20->items[VAR_21].gid;
   if (VAR_29 < 0)
    continue;

   VAR_26.e = VAR_20->items[VAR_21].x;
   VAR_26.f = VAR_20->items[VAR_21].y;
   VAR_27 = FUNC_2(VAR_26, VAR_14);

   VAR_28 = FUNC_12(VAR_5, VAR_20->font, VAR_29, &VAR_27, VAR_16, &VAR_15->scissor, VAR_15->dest->alpha, FUNC_11(VAR_23));
   if (VAR_28)
   {
    fz_pixmap *VAR_30 = VAR_28->pixmap;
    int VAR_31 = FUNC_1(VAR_27.e);
    int VAR_32 = FUNC_1(VAR_27.f);
    if (VAR_30 == ((void*)0) || VAR_30->n == 1)
    {
     FUNC_0(VAR_17, VAR_15->dest, VAR_28, VAR_31, VAR_32, &VAR_15->scissor, VAR_25);
     if (VAR_15->shape)
      FUNC_0(&VAR_18, VAR_15->shape, VAR_28, VAR_31, VAR_32, &VAR_15->scissor, 0);
     if (VAR_15->group_alpha)
      FUNC_0(&VAR_19, VAR_15->group_alpha, VAR_28, VAR_31, VAR_32, &VAR_15->scissor, 0);
    }
    else
    {
     fz_matrix VAR_33;
     VAR_33.a = VAR_30->w; VAR_33.b = VAR_33.c = 0; VAR_33.d = VAR_30->h;
     VAR_33.e = VAR_31 + VAR_30->x; VAR_33.f = VAR_32 + VAR_30->y;
     FUNC_10(VAR_5, VAR_15->dest, &VAR_15->scissor, VAR_15->shape, VAR_15->group_alpha, VAR_30, VAR_33, VAR_11 * 255, !(VAR_6->hints & VAR_2), VAR_6->flags & VAR_1, VAR_25);
    }
    FUNC_5(VAR_5, VAR_28);
   }
   else
   {
    fz_path *VAR_34 = FUNC_9(VAR_5, VAR_20->font, VAR_29, VAR_26);
    if (VAR_34)
    {
     FUNC_4(VAR_5, VAR_6, VAR_34, 0, VAR_8, VAR_22, VAR_10, VAR_11, VAR_12);
     FUNC_6(VAR_5, VAR_34);
    }
    else
    {
     FUNC_14(VAR_5, "cannot render glyph");
    }
   }
  }
 }

 if (VAR_15->blendmode & VAR_0)
  FUNC_8(VAR_5, VAR_13);
}

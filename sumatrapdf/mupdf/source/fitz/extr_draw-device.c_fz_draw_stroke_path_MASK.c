
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_24__ {float linewidth; } ;
typedef TYPE_3__ fz_stroke_state ;
struct TYPE_23__ {int reusable; } ;
struct TYPE_25__ {TYPE_2__ fns; } ;
typedef TYPE_4__ fz_rasterizer ;
typedef int fz_path ;
struct TYPE_22__ {int member_0; } ;
struct TYPE_26__ {TYPE_1__ member_0; } ;
typedef TYPE_5__ fz_overprint ;
typedef int fz_matrix ;
typedef int fz_irect ;
struct TYPE_27__ {int blendmode; scalar_t__ group_alpha; scalar_t__ shape; scalar_t__ dest; int scissor; } ;
typedef TYPE_6__ fz_draw_state ;
struct TYPE_28__ {size_t top; int default_cs; scalar_t__ resolve_spots; TYPE_6__* stack; TYPE_4__* rast; int transform; } ;
typedef TYPE_7__ fz_draw_device ;
typedef int fz_device ;
typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_color_params ;


 float VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,TYPE_4__*,int ,scalar_t__,unsigned char*,TYPE_5__*) ;
 int * FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_5 (int *,TYPE_4__*,int const*,TYPE_3__ const*,int ,float,float,int *,int *) ;
 int FUNC_6 (int ,int ) ;
 TYPE_6__* FUNC_7 (int *,TYPE_7__*) ;
 int FUNC_8 (int *,TYPE_7__*) ;
 float FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (TYPE_4__*) ;
 float FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (char*) ;
 TYPE_6__* FUNC_14 (int *,TYPE_7__*,int ,int ) ;
 TYPE_5__* FUNC_15 (int *,TYPE_5__*,float const*,int *,float,int ,unsigned char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_16(fz_context *VAR_3, fz_device *VAR_4, const fz_path *VAR_5, const fz_stroke_state *VAR_6, fz_matrix VAR_7,
 fz_colorspace *VAR_8, const float *VAR_9, float VAR_10, fz_color_params VAR_11)
{
 fz_draw_device *VAR_12 = (fz_draw_device*)VAR_4;
 fz_matrix VAR_13 = FUNC_1(VAR_7, VAR_12->transform);
 fz_rasterizer *VAR_14 = VAR_12->rast;
 fz_colorspace *VAR_15 = FUNC_3(VAR_3, VAR_12->default_cs, VAR_8);
 float VAR_16 = FUNC_9(VAR_13);
 float VAR_17;
 float VAR_18 = VAR_6->linewidth;
 unsigned char VAR_19[VAR_2 + 1];
 fz_irect VAR_20;
 float VAR_21 = 2.0f/(FUNC_11(VAR_14)+2);
 fz_draw_state *VAR_22 = &VAR_12->stack[VAR_12->top];
 float VAR_23 = FUNC_12(VAR_14);
 fz_overprint VAR_24 = { { 0 } };
 fz_overprint *VAR_25;

 if (VAR_12->top == 0 && VAR_12->resolve_spots)
  VAR_22 = FUNC_14(VAR_3, VAR_12, VAR_11, VAR_12->default_cs);

 if (VAR_23 > VAR_21)
  VAR_21 = VAR_23;
 if (VAR_16 < VAR_0)
  VAR_16 = 1;
 if (VAR_18 * VAR_16 < VAR_21)
  VAR_18 = VAR_21 / VAR_16;
 VAR_17 = 0.3f / VAR_16;
 if (VAR_17 < 0.001f)
  VAR_17 = 0.001f;

 VAR_20 = FUNC_6(FUNC_10(VAR_22->dest), VAR_22->scissor);
 if (FUNC_5(VAR_3, VAR_14, VAR_5, VAR_6, VAR_13, VAR_17, VAR_18, &VAR_20, &VAR_20))
  return;

 if (VAR_22->blendmode & VAR_1)
  VAR_22 = FUNC_7(VAR_3, VAR_12);

 VAR_25 = FUNC_15(VAR_3, &VAR_24, VAR_9, VAR_15, VAR_10, VAR_11, VAR_19, VAR_22->dest);
 FUNC_2(VAR_3, VAR_14, 0, VAR_22->dest, VAR_19, VAR_25);
 if (VAR_22->shape)
 {
  if (!VAR_14->fns.reusable)
   (void)FUNC_5(VAR_3, VAR_14, VAR_5, VAR_6, VAR_13, VAR_17, VAR_18, &VAR_20, ((void*)0));

  VAR_19[0] = 255;
  FUNC_2(VAR_3, VAR_14, 0, VAR_22->shape, VAR_19, 0);
 }
 if (VAR_22->group_alpha)
 {
  if (!VAR_14->fns.reusable)
   (void)FUNC_5(VAR_3, VAR_14, VAR_5, VAR_6, VAR_13, VAR_17, VAR_18, &VAR_20, ((void*)0));

  VAR_19[0] = 255 * VAR_10;
  FUNC_2(VAR_3, VAR_14, 0, VAR_22->group_alpha, VAR_19, 0);
 }
 if (VAR_22->blendmode & VAR_1)
  FUNC_8(VAR_3, VAR_12);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {int reusable; } ;
struct TYPE_19__ {TYPE_2__ fns; } ;
typedef TYPE_3__ fz_rasterizer ;
typedef int fz_path ;
struct TYPE_17__ {int member_0; } ;
struct TYPE_20__ {TYPE_1__ member_0; } ;
typedef TYPE_4__ fz_overprint ;
typedef int fz_matrix ;
typedef int fz_irect ;
struct TYPE_21__ {int blendmode; scalar_t__ group_alpha; scalar_t__ shape; scalar_t__ dest; int scissor; } ;
typedef TYPE_5__ fz_draw_state ;
struct TYPE_22__ {size_t top; int default_cs; scalar_t__ resolve_spots; TYPE_5__* stack; TYPE_3__* rast; int transform; } ;
typedef TYPE_6__ fz_draw_device ;
typedef int fz_device ;
typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_color_params ;


 float VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,TYPE_3__*,int,scalar_t__,unsigned char*,TYPE_4__*) ;
 int * FUNC_2 (int *,int ,int *) ;
 scalar_t__ FUNC_3 (int *,TYPE_3__*,int const*,int ,float,int *,int *) ;
 int FUNC_4 (int ,int ) ;
 TYPE_5__* FUNC_5 (int *,TYPE_6__*) ;
 int FUNC_6 (int *,TYPE_6__*) ;
 float FUNC_7 (int ) ;
 int FUNC_8 (int *,scalar_t__) ;
 TYPE_5__* FUNC_9 (int *,TYPE_6__*,int ,int ) ;
 TYPE_4__* FUNC_10 (int *,TYPE_4__*,float const*,int *,float,int ,unsigned char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_11(fz_context *VAR_3, fz_device *VAR_4, const fz_path *VAR_5, int VAR_6, fz_matrix VAR_7,
 fz_colorspace *VAR_8, const float *VAR_9, float VAR_10, fz_color_params VAR_11)
{
 fz_draw_device *VAR_12 = (fz_draw_device*)VAR_4;
 fz_matrix VAR_13 = FUNC_0(VAR_7, VAR_12->transform);
 fz_rasterizer *VAR_14 = VAR_12->rast;
 fz_colorspace *VAR_15 = FUNC_2(VAR_3, VAR_12->default_cs, VAR_8);
 float VAR_16 = FUNC_7(VAR_13);
 float VAR_17;
 unsigned char VAR_18[VAR_2 + 1];
 fz_irect VAR_19;
 fz_draw_state *VAR_20 = &VAR_12->stack[VAR_12->top];
 fz_overprint VAR_21 = { { 0 } };
 fz_overprint *VAR_22;

 if (VAR_12->top == 0 && VAR_12->resolve_spots)
  VAR_20 = FUNC_9(VAR_3, VAR_12, VAR_11, VAR_12->default_cs);

 if (VAR_16 < VAR_0)
  VAR_16 = 1;
 VAR_17 = 0.3f / VAR_16;
 if (VAR_17 < 0.001f)
  VAR_17 = 0.001f;

 VAR_19 = FUNC_4(FUNC_8(VAR_3, VAR_20->dest), VAR_20->scissor);
 if (FUNC_3(VAR_3, VAR_14, VAR_5, VAR_13, VAR_17, &VAR_19, &VAR_19))
  return;

 if (VAR_20->blendmode & VAR_1)
  VAR_20 = FUNC_5(VAR_3, VAR_12);

 VAR_22 = FUNC_10(VAR_3, &VAR_21, VAR_9, VAR_15, VAR_10, VAR_11, VAR_18, VAR_20->dest);

 FUNC_1(VAR_3, VAR_14, VAR_6, VAR_20->dest, VAR_18, VAR_22);
 if (VAR_20->shape)
 {
  if (!VAR_14->fns.reusable)
   FUNC_3(VAR_3, VAR_14, VAR_5, VAR_13, VAR_17, &VAR_19, ((void*)0));

  VAR_18[0] = 255;
  FUNC_1(VAR_3, VAR_14, VAR_6, VAR_20->shape, VAR_18, 0);
 }
 if (VAR_20->group_alpha)
 {
  if (!VAR_14->fns.reusable)
   FUNC_3(VAR_3, VAR_14, VAR_5, VAR_13, VAR_17, &VAR_19, ((void*)0));

  VAR_18[0] = VAR_10 * 255;
  FUNC_1(VAR_3, VAR_14, VAR_6, VAR_20->group_alpha, VAR_18, 0);
 }

 if (VAR_20->blendmode & VAR_1)
  FUNC_6(VAR_3, VAR_12);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {float linewidth; } ;
typedef TYPE_1__ fz_stroke_state ;
typedef int fz_rect ;
typedef int fz_rasterizer ;
typedef int fz_path ;
typedef int fz_matrix ;
typedef void* fz_irect ;
struct TYPE_16__ {void* scissor; int blendmode; TYPE_8__* mask; TYPE_8__* group_alpha; TYPE_8__* shape; TYPE_8__* dest; } ;
typedef TYPE_2__ fz_draw_state ;
struct TYPE_17__ {size_t top; int default_cs; int transform; scalar_t__ resolve_spots; TYPE_2__* stack; int * rast; } ;
typedef TYPE_3__ fz_draw_device ;
typedef int fz_device ;
typedef int fz_context ;
typedef int fz_colorspace ;
struct TYPE_18__ {int alpha; int * seps; int * colorspace; } ;


 float VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,TYPE_8__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *,int ,TYPE_8__*,int *,int ) ;
 int FUNC_4 (int *,TYPE_8__*,TYPE_8__*,void*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int *,int *,int const*,TYPE_1__ const*,int ,float,float,void**,void**) ;
 void* FUNC_6 (void*,void*) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 float FUNC_9 (int ) ;
 void* FUNC_10 (int *,int *,void*,int *,int) ;
 void* FUNC_11 (int *,TYPE_8__*) ;
 int FUNC_12 (int *) ;
 float FUNC_13 (int *) ;
 int FUNC_14 (int ,int ) ;
 TYPE_2__* FUNC_15 (int *,TYPE_3__*,int ,int ) ;
 TYPE_2__* FUNC_16 (int *,TYPE_3__*,char*) ;

__attribute__((used)) static void
FUNC_17(fz_context *VAR_3, fz_device *VAR_4, const fz_path *VAR_5, const fz_stroke_state *VAR_6, fz_matrix VAR_7, fz_rect VAR_8)
{
 fz_draw_device *VAR_9 = (fz_draw_device*)VAR_4;
 fz_matrix VAR_10 = FUNC_2(VAR_7, VAR_9->transform);
 fz_rasterizer *VAR_11 = VAR_9->rast;

 float VAR_12 = FUNC_9(VAR_10);
 float VAR_13;
 float VAR_14 = VAR_6->linewidth;
 fz_irect VAR_15;
 fz_draw_state *VAR_16 = &VAR_9->stack[VAR_9->top];
 fz_colorspace *VAR_17;
 float VAR_18 = 2.0f/(FUNC_12(VAR_11)+2);
 float VAR_19 = FUNC_13(VAR_11);

 if (VAR_9->top == 0 && VAR_9->resolve_spots)
  VAR_16 = FUNC_15(VAR_3, VAR_9, VAR_2 , VAR_9->default_cs);

 if (VAR_19 > VAR_18)
  VAR_18 = VAR_19;
 if (VAR_12 < VAR_0)
  VAR_12 = 1;
 if (VAR_14 * VAR_12 < VAR_18)
  VAR_14 = VAR_18 / VAR_12;
 VAR_13 = 0.3f / VAR_12;
 if (VAR_13 < 0.001f)
  VAR_13 = 0.001f;

 VAR_16 = FUNC_16(VAR_3, VAR_9, "clip stroke");

 VAR_17 = VAR_16->dest->colorspace;

 if (!FUNC_8(VAR_8))
 {
  VAR_15 = FUNC_7(FUNC_14(VAR_8, VAR_9->transform));
  VAR_15 = FUNC_6(VAR_15, FUNC_11(VAR_3, VAR_16->dest));
  VAR_15 = FUNC_6(VAR_15, VAR_16->scissor);
 }
 else
 {
  VAR_15 = FUNC_6(FUNC_11(VAR_3, VAR_16->dest), VAR_16->scissor);
 }

 if (FUNC_5(VAR_3, VAR_11, VAR_5, VAR_6, VAR_10, VAR_13, VAR_14, &VAR_15, &VAR_15))
 {
  VAR_16[1].scissor = VAR_15;
  VAR_16[1].mask = ((void*)0);



  return;
 }

 VAR_16[1].mask = FUNC_10(VAR_3, ((void*)0), VAR_15, ((void*)0), 1);
 FUNC_1(VAR_3, VAR_16[1].mask);




 VAR_16[1].dest = FUNC_10(VAR_3, VAR_17, VAR_15, VAR_16[0].dest->seps, VAR_16[0].dest->alpha);
 if (VAR_16[0].dest->alpha)
  FUNC_1(VAR_3, VAR_16[1].dest);
 else
  FUNC_4(VAR_3, VAR_16[1].dest, VAR_16[0].dest, VAR_15, VAR_9->default_cs);
 if (VAR_16->shape)
 {
  VAR_16[1].shape = FUNC_10(VAR_3, ((void*)0), VAR_15, ((void*)0), 1);
  FUNC_1(VAR_3, VAR_16[1].shape);
 }
 if (VAR_16->group_alpha)
 {
  VAR_16[1].group_alpha = FUNC_10(VAR_3, ((void*)0), VAR_15, ((void*)0), 1);
  FUNC_1(VAR_3, VAR_16[1].group_alpha);
 }

 FUNC_3(VAR_3, VAR_11, 0, VAR_16[1].mask, ((void*)0), 0);

 VAR_16[1].blendmode |= VAR_1;
 VAR_16[1].scissor = VAR_15;




}

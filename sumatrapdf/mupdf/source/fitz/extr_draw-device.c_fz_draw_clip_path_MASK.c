
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int fz_rect ;
typedef int fz_rasterizer ;
typedef int fz_path ;
typedef int fz_matrix ;
typedef void* fz_irect ;
struct TYPE_10__ {void* scissor; int * mask; int * group_alpha; int * shape; TYPE_7__* dest; } ;
typedef TYPE_1__ fz_draw_state ;
struct TYPE_11__ {size_t top; int default_cs; int transform; scalar_t__ resolve_spots; TYPE_1__* stack; int * rast; } ;
typedef TYPE_2__ fz_draw_device ;
typedef int fz_device ;
typedef int fz_context ;
typedef int fz_colorspace ;
struct TYPE_12__ {int alpha; int * seps; int * colorspace; } ;


 float VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *,int,int *,int *,int ) ;
 int FUNC_4 (int *,TYPE_7__*,TYPE_7__*,void*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int *,int *,int const*,int ,float,void**,void**) ;
 void* FUNC_6 (void*,void*) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 float FUNC_10 (int ) ;
 void* FUNC_11 (int *,int *,void*,int *,int) ;
 void* FUNC_12 (int *,TYPE_7__*) ;
 int FUNC_13 (int ,int ) ;
 TYPE_1__* FUNC_14 (int *,TYPE_2__*,int ,int ) ;
 TYPE_1__* FUNC_15 (int *,TYPE_2__*,char*) ;

__attribute__((used)) static void
FUNC_16(fz_context *VAR_2, fz_device *VAR_3, const fz_path *VAR_4, int VAR_5, fz_matrix VAR_6, fz_rect VAR_7)
{
 fz_draw_device *VAR_8 = (fz_draw_device*)VAR_3;
 fz_matrix VAR_9 = FUNC_2(VAR_6, VAR_8->transform);
 fz_rasterizer *VAR_10 = VAR_8->rast;

 float VAR_11 = FUNC_10(VAR_9);
 float VAR_12;
 fz_irect VAR_13;
 fz_draw_state *VAR_14 = &VAR_8->stack[VAR_8->top];
 fz_colorspace *VAR_15;

 if (VAR_8->top == 0 && VAR_8->resolve_spots)
  VAR_14 = FUNC_14(VAR_2, VAR_8, VAR_1 , VAR_8->default_cs);

 if (VAR_11 < VAR_0)
  VAR_11 = 1;
 VAR_12 = 0.3f / VAR_11;
 if (VAR_12 < 0.001f)
  VAR_12 = 0.001f;

 VAR_14 = FUNC_15(VAR_2, VAR_8, "clip path");

 VAR_15 = VAR_14->dest->colorspace;

 if (!FUNC_8(VAR_7))
 {
  VAR_13 = FUNC_7(FUNC_13(VAR_7, VAR_8->transform));
  VAR_13 = FUNC_6(VAR_13, FUNC_12(VAR_2, VAR_14->dest));
  VAR_13 = FUNC_6(VAR_13, VAR_14->scissor);
 }
 else
 {
  VAR_13 = FUNC_6(FUNC_12(VAR_2, VAR_14->dest), VAR_14->scissor);
 }

 if (FUNC_5(VAR_2, VAR_10, VAR_4, VAR_9, VAR_12, &VAR_13, &VAR_13) || FUNC_9(VAR_2, VAR_10))
 {
  VAR_14[1].scissor = VAR_13;
  VAR_14[1].mask = ((void*)0);



  return;
 }

 VAR_14[1].mask = FUNC_11(VAR_2, ((void*)0), VAR_13, ((void*)0), 1);
 FUNC_1(VAR_2, VAR_14[1].mask);
 VAR_14[1].dest = FUNC_11(VAR_2, VAR_15, VAR_13, VAR_14[0].dest->seps, VAR_14[0].dest->alpha);
 FUNC_4(VAR_2, VAR_14[1].dest, VAR_14[0].dest, VAR_13, VAR_8->default_cs);
 if (VAR_14[1].shape)
 {
  VAR_14[1].shape = FUNC_11(VAR_2, ((void*)0), VAR_13, ((void*)0), 1);
  FUNC_1(VAR_2, VAR_14[1].shape);
 }
 if (VAR_14[1].group_alpha)
 {
  VAR_14[1].group_alpha = FUNC_11(VAR_2, ((void*)0), VAR_13, ((void*)0), 1);
  FUNC_1(VAR_2, VAR_14[1].group_alpha);
 }

 FUNC_3(VAR_2, VAR_10, VAR_5, VAR_14[1].mask, ((void*)0), 0);

 VAR_14[1].scissor = VAR_13;




}

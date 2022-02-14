
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int fz_rect ;
typedef int fz_pixmap ;
typedef int fz_irect ;
struct TYPE_7__ {int scissor; int * group_alpha; int * shape; int * dest; scalar_t__ blendmode; } ;
typedef TYPE_1__ fz_draw_state ;
struct TYPE_8__ {scalar_t__ top; int transform; int default_cs; scalar_t__ resolve_spots; } ;
typedef TYPE_2__ fz_draw_device ;
typedef int fz_device ;
typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_color_params ;


 int FUNC_0 (scalar_t__,char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *,float const*,int *,float*,int *,int ) ;
 int * FUNC_4 (int *,int ,int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int *,int *,int ,int *,int) ;
 int FUNC_9 (int ,int ) ;
 TYPE_1__* FUNC_10 (int *,TYPE_2__*,int ,int ) ;
 TYPE_1__* FUNC_11 (int *,TYPE_2__*,char*) ;

__attribute__((used)) static void
FUNC_12(fz_context *VAR_0, fz_device *VAR_1, fz_rect VAR_2, int VAR_3, fz_colorspace *VAR_4, const float *VAR_5, fz_color_params VAR_6)
{
 fz_draw_device *VAR_7 = (fz_draw_device*)VAR_1;
 fz_pixmap *VAR_8;
 fz_irect VAR_9;
 fz_draw_state *VAR_10 = FUNC_11(VAR_0, VAR_7, "mask");
 fz_pixmap *VAR_11 = VAR_10->shape;
 fz_pixmap *VAR_12 = VAR_10->group_alpha;
 fz_rect VAR_13;
 fz_colorspace *VAR_14 = ((void*)0);

 if (VAR_7->top == 0 && VAR_7->resolve_spots)
  VAR_10 = FUNC_10(VAR_0, VAR_7, VAR_6, VAR_7->default_cs);

 if (VAR_4)
  VAR_14 = FUNC_4(VAR_0, VAR_7->default_cs, VAR_4);

 VAR_13 = FUNC_9(VAR_2, VAR_7->transform);
 VAR_9 = FUNC_6(FUNC_7(VAR_13), VAR_10->scissor);



 VAR_10[1].blendmode = 0;




 if (VAR_3)
  VAR_10[1].dest = VAR_8 = FUNC_8(VAR_0, FUNC_5(VAR_0), VAR_9, ((void*)0), 0);
 else
  VAR_10[1].dest = VAR_8 = FUNC_8(VAR_0, ((void*)0), VAR_9, ((void*)0), 1);
 if (VAR_10->shape)
 {






  VAR_10[1].shape = VAR_11 = ((void*)0);
 }
 if (VAR_10->group_alpha)
 {
  VAR_10[1].group_alpha = VAR_12 = ((void*)0);
 }

 if (VAR_3)
 {
  float VAR_15;
  if (!VAR_14)
   VAR_14 = FUNC_5(VAR_0);
  FUNC_3(VAR_0, VAR_14, VAR_5, FUNC_5(VAR_0), &VAR_15, ((void*)0), VAR_6);
  FUNC_2(VAR_0, VAR_8, VAR_15 * 255);
  if (VAR_11)
   FUNC_2(VAR_0, VAR_11, 255);
  if (VAR_12)
   FUNC_2(VAR_0, VAR_12, 255);
 }
 else
 {
  FUNC_1(VAR_0, VAR_8);
  if (VAR_11)
   FUNC_1(VAR_0, VAR_11);
  if (VAR_12)
   FUNC_1(VAR_0, VAR_12);
 }




 VAR_10[1].scissor = VAR_9;
}

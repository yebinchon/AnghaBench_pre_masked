
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int fz_rect ;
struct TYPE_13__ {scalar_t__ alpha; int * seps; int * colorspace; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_irect ;
struct TYPE_14__ {int blendmode; float alpha; int scissor; TYPE_1__* group_alpha; TYPE_1__* shape; TYPE_1__* dest; } ;
typedef TYPE_2__ fz_draw_state ;
struct TYPE_15__ {size_t top; int default_cs; int transform; scalar_t__ resolve_spots; TYPE_2__* stack; } ;
typedef TYPE_3__ fz_draw_device ;
typedef int fz_device ;
typedef int fz_context ;
typedef int fz_colorspace ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*,TYPE_1__*,int ,int ) ;
 int VAR_2 ;
 int * FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,char*,TYPE_1__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,TYPE_3__*) ;
 void* FUNC_8 (int *,int *,int ,int *,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char*) ;
 TYPE_2__* FUNC_11 (int *,TYPE_3__*,int ,int ) ;
 TYPE_2__* FUNC_12 (int *,TYPE_3__*,char*) ;
 int FUNC_13 (char*,char*,...) ;

__attribute__((used)) static void
FUNC_14(fz_context *VAR_3, fz_device *VAR_4, fz_rect VAR_5, fz_colorspace *VAR_6, int VAR_7, int VAR_8, int VAR_9, float VAR_10)
{
 fz_draw_device *VAR_11 = (fz_draw_device*)VAR_4;
 fz_irect VAR_12;
 fz_pixmap *VAR_13;
 fz_draw_state *VAR_14 = &VAR_11->stack[VAR_11->top];
 fz_colorspace *VAR_15 = VAR_14->dest->colorspace;
 fz_rect VAR_16;

 if (VAR_11->top == 0 && VAR_11->resolve_spots)
  VAR_14 = FUNC_11(VAR_3, VAR_11, VAR_2 , VAR_11->default_cs);

 if (VAR_6 != ((void*)0))
  VAR_15 = FUNC_3(VAR_3, VAR_11->default_cs, VAR_6);

 if (VAR_14->blendmode & VAR_1)
  FUNC_7(VAR_3, VAR_11);

 VAR_14 = FUNC_12(VAR_3, VAR_11, "group");

 VAR_16 = FUNC_9(VAR_5, VAR_11->transform);
 VAR_12 = FUNC_5(FUNC_6(VAR_16), VAR_14->scissor);


 VAR_8 = 0;
 VAR_7 = 1;


 VAR_14[1].dest = VAR_13 = FUNC_8(VAR_3, VAR_15, VAR_12, VAR_14[0].dest->seps, VAR_14[0].dest->alpha || VAR_7);

 if (VAR_7)
 {
  FUNC_1(VAR_3, VAR_13);
  VAR_14[1].group_alpha = ((void*)0);
 }
 else
 {
  FUNC_2(VAR_3, VAR_13, VAR_14[0].dest, VAR_12, VAR_11->default_cs);
  VAR_14[1].group_alpha = FUNC_8(VAR_3, ((void*)0), VAR_12, ((void*)0), 1);
  FUNC_1(VAR_3, VAR_14[1].group_alpha);
 }


 VAR_14[1].alpha = VAR_10;
 VAR_14[1].scissor = VAR_12;
 VAR_14[1].blendmode = VAR_9 | (VAR_7 ? VAR_0 : 0) | (VAR_8 ? VAR_1 : 0);
}

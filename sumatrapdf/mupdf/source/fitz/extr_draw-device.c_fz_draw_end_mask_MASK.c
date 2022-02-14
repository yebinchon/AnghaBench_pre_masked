
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int alpha; int * seps; int * colorspace; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_irect ;
struct TYPE_15__ {int scissor; TYPE_1__* group_alpha; TYPE_1__* shape; int blendmode; TYPE_1__* dest; TYPE_1__* mask; } ;
typedef TYPE_2__ fz_draw_state ;
struct TYPE_16__ {scalar_t__ top; int default_cs; } ;
typedef TYPE_3__ fz_draw_device ;
typedef int fz_device ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *,TYPE_3__*,char*) ;
 int FUNC_1 (scalar_t__,char*) ;
 TYPE_1__* FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*,TYPE_1__*,int ,int ) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *,char*,TYPE_1__*) ;
 void* FUNC_7 (int *,int *,int ,int *,int) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (int *,int ,char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void
FUNC_11(fz_context *VAR_2, fz_device *VAR_3)
{
 fz_draw_device *VAR_4 = (fz_draw_device*)VAR_3;
 fz_pixmap *VAR_5, *VAR_6;
 fz_irect VAR_7;
 fz_draw_state *VAR_8;

 if (VAR_4->top == 0)
  FUNC_9(VAR_2, VAR_1, "unexpected end mask");

 VAR_8 = FUNC_0(VAR_2, VAR_4, "mask");
 {

  VAR_5 = FUNC_2(VAR_2, VAR_8[1].dest);
  if (VAR_8[1].mask != VAR_8[0].mask)
   FUNC_5(VAR_2, VAR_8[1].mask);
  VAR_8[1].mask = VAR_5;
  if (VAR_8[1].dest != VAR_8[0].dest)
   FUNC_5(VAR_2, VAR_8[1].dest);
  VAR_8[1].dest = ((void*)0);
  if (VAR_8[1].shape != VAR_8[0].shape)
   FUNC_5(VAR_2, VAR_8[1].shape);
  VAR_8[1].shape = ((void*)0);
  if (VAR_8[1].group_alpha != VAR_8[0].group_alpha)
   FUNC_5(VAR_2, VAR_8[1].group_alpha);
  VAR_8[1].group_alpha = ((void*)0);







  VAR_7 = FUNC_8(VAR_2, VAR_5);
  VAR_6 = FUNC_7(VAR_2, VAR_8->dest->colorspace, VAR_7, VAR_8->dest->seps, VAR_8->dest->alpha);
  FUNC_4(VAR_2, VAR_6, VAR_8->dest, VAR_7, VAR_4->default_cs);


  VAR_8[1].dest = VAR_6;
  VAR_8[1].blendmode |= VAR_0;


  if (VAR_8[0].shape)
  {
   VAR_8[1].shape = FUNC_7(VAR_2, ((void*)0), VAR_7, ((void*)0), 1);
   FUNC_3(VAR_2, VAR_8[1].shape);
  }
  if (VAR_8[0].group_alpha)
  {
   VAR_8[1].group_alpha = FUNC_7(VAR_2, ((void*)0), VAR_7, ((void*)0), 1);
   FUNC_3(VAR_2, VAR_8[1].group_alpha);
  }
  VAR_8[1].scissor = VAR_7;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ colorspace; } ;
typedef TYPE_1__ fz_pixmap ;
struct TYPE_19__ {float alpha; int blendmode; TYPE_1__* dest; TYPE_1__* group_alpha; TYPE_1__* shape; } ;
typedef TYPE_2__ fz_draw_state ;
struct TYPE_20__ {scalar_t__ top; int default_cs; } ;
typedef TYPE_3__ fz_draw_device ;
typedef int fz_device ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,char*) ;
 int FUNC_2 (int *,TYPE_1__*,TYPE_1__*,float,int,int,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *,TYPE_1__*,scalar_t__,int *,int ,int ,int) ;
 int VAR_4 ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,char*,TYPE_1__*) ;
 int FUNC_6 (int *,TYPE_3__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_9 (int *,int ,char*) ;
 TYPE_2__* FUNC_10 (int *,TYPE_3__*,char*) ;
 int FUNC_11 (char*,...) ;

__attribute__((used)) static void
FUNC_12(fz_context *VAR_5, fz_device *VAR_6)
{
 fz_draw_device *VAR_7 = (fz_draw_device*)VAR_6;
 int VAR_8;
 int VAR_9;
 float VAR_10;
 fz_draw_state *VAR_11;

 if (VAR_7->top == 0)
  FUNC_9(VAR_5, VAR_3, "unexpected end group");

 VAR_11 = FUNC_10(VAR_5, VAR_7, "group");

 VAR_10 = VAR_11[1].alpha;
 VAR_8 = VAR_11[1].blendmode & VAR_2;
 VAR_9 = VAR_11[1].blendmode & VAR_0;
 if (VAR_11[0].dest->colorspace != VAR_11[1].dest->colorspace)
 {
  fz_pixmap *VAR_12 = FUNC_3(VAR_5, VAR_11[1].dest, VAR_11[0].dest->colorspace, ((void*)0), VAR_7->default_cs, VAR_4, 1);
  FUNC_4(VAR_5, VAR_11[1].dest);
  VAR_11[1].dest = VAR_12;
 }

 if ((VAR_8 == 0) && (VAR_11[0].shape == VAR_11[1].shape) && (VAR_11[0].group_alpha == VAR_11[1].group_alpha))
  FUNC_7(VAR_11[0].dest, VAR_11[1].dest, VAR_10 * 255);
 else
  FUNC_2(VAR_5, VAR_11[0].dest, VAR_11[1].dest, VAR_10 * 255, VAR_8, VAR_9, VAR_11[1].group_alpha);

 if (VAR_11[0].shape != VAR_11[1].shape)
 {


  if (VAR_11[0].shape)
  {
   if (VAR_11[1].shape)
    FUNC_7(VAR_11[0].shape, VAR_11[1].shape, VAR_10 * 255);
   else
    FUNC_8(VAR_11[0].shape, VAR_11[1].dest, VAR_10 * 255);
  }
 }
 FUNC_0(VAR_11[0].group_alpha == ((void*)0) || VAR_11[0].group_alpha != VAR_11[1].group_alpha);
 if (VAR_11[0].group_alpha && VAR_11[0].group_alpha != VAR_11[1].group_alpha)
 {




  if (VAR_11[1].group_alpha)
   FUNC_7(VAR_11[0].group_alpha, VAR_11[1].group_alpha, VAR_9 ? 255 : VAR_10 * 255);
  else
   FUNC_8(VAR_11[0].group_alpha, VAR_11[1].dest, VAR_9 ? 255 : VAR_10 * 255);
 }

 FUNC_0(VAR_11[0].dest != VAR_11[1].dest);
 if (VAR_11[0].shape != VAR_11[1].shape)
 {
  FUNC_4(VAR_5, VAR_11[1].shape);
  VAR_11[1].shape = ((void*)0);
 }
 FUNC_4(VAR_5, VAR_11[1].group_alpha);
 VAR_11[1].group_alpha = ((void*)0);
 FUNC_4(VAR_5, VAR_11[1].dest);
 VAR_11[1].dest = ((void*)0);

 if (VAR_11[0].blendmode & VAR_1)
  FUNC_6(VAR_5, VAR_7);
}

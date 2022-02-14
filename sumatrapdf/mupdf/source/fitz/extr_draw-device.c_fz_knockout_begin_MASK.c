
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int fz_irect ;
struct TYPE_12__ {int blendmode; int scissor; TYPE_5__* group_alpha; TYPE_5__* shape; TYPE_5__* dest; } ;
typedef TYPE_1__ fz_draw_state ;
struct TYPE_13__ {size_t top; int default_cs; TYPE_1__* stack; } ;
typedef TYPE_2__ fz_draw_device ;
typedef int fz_context ;
struct TYPE_14__ {int alpha; int * seps; int * colorspace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,TYPE_5__*) ;
 int FUNC_2 (int *,TYPE_5__*,TYPE_5__*,int ,int ) ;
 int FUNC_3 (int *,char*,TYPE_5__*) ;
 int FUNC_4 (int ,int ) ;
 void* FUNC_5 (int *,int *,int ,int *,int) ;
 int FUNC_6 (int *,TYPE_5__*) ;
 int FUNC_7 (char*) ;
 TYPE_1__* FUNC_8 (int *,TYPE_2__*,char*) ;

__attribute__((used)) static fz_draw_state *
FUNC_9(fz_context *VAR_3, fz_draw_device *VAR_4)
{
 fz_irect VAR_5, VAR_6;
 fz_draw_state *VAR_7 = &VAR_4->stack[VAR_4->top];
 int VAR_8 = VAR_7->blendmode & VAR_0;

 if ((VAR_7->blendmode & VAR_1) == 0)
  return VAR_7;

 VAR_7 = FUNC_8(VAR_3, VAR_4, "knockout");

 VAR_5 = FUNC_6(VAR_3, VAR_7->dest);
 VAR_5 = FUNC_4(VAR_5, VAR_7->scissor);
 VAR_7[1].dest = FUNC_5(VAR_3, VAR_7->dest->colorspace, VAR_5, VAR_7->dest->seps, VAR_7->dest->alpha);
 if (VAR_7[0].group_alpha)
 {
  VAR_6 = FUNC_6(VAR_3, VAR_7->group_alpha);
  VAR_6 = FUNC_4(VAR_6, VAR_7->scissor);
  VAR_7[1].group_alpha = FUNC_5(VAR_3, VAR_7->group_alpha->colorspace, VAR_6, VAR_7->group_alpha->seps, VAR_7->group_alpha->alpha);
 }

 if (VAR_8)
 {
  FUNC_1(VAR_3, VAR_7[1].dest);
  if (VAR_7[1].group_alpha)
   FUNC_1(VAR_3, VAR_7[1].group_alpha);
 }
 else
 {

  int VAR_9 = VAR_4->top-1;
  fz_draw_state *VAR_10 = VAR_7;
  while (VAR_9 > 0)
  {
   VAR_10 = &VAR_4->stack[--VAR_9];
   if (VAR_10->dest != VAR_7->dest)
    break;
  }
  if (VAR_10->dest)
  {
   FUNC_2(VAR_3, VAR_7[1].dest, VAR_10->dest, VAR_5, VAR_4->default_cs);
   if (VAR_7[1].group_alpha)
   {
    if (VAR_10->group_alpha)
     FUNC_2(VAR_3, VAR_7[1].group_alpha, VAR_10->group_alpha, VAR_6, VAR_4->default_cs);
    else
     FUNC_1(VAR_3, VAR_7[1].group_alpha);
   }
  }
  else
  {
   FUNC_1(VAR_3, VAR_7[1].dest);
   if (VAR_7[1].group_alpha)
    FUNC_1(VAR_3, VAR_7[1].group_alpha);
  }
 }


 VAR_7[1].shape = FUNC_5(VAR_3, ((void*)0), VAR_5, ((void*)0), 1);
 FUNC_1(VAR_3, VAR_7[1].shape);
 VAR_7[1].scissor = VAR_5;
 VAR_7[1].blendmode &= ~(VAR_2 | VAR_0);

 return &VAR_7[1];
}

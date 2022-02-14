
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * group_alpha; int * shape; int * dest; int * mask; } ;
typedef TYPE_1__ fz_draw_state ;
struct TYPE_6__ {scalar_t__ top; } ;
typedef TYPE_2__ fz_draw_device ;
typedef int fz_device ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int ,char*) ;
 TYPE_1__* FUNC_5 (int *,TYPE_2__*,char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(fz_context *VAR_1, fz_device *VAR_2)
{
 fz_draw_device *VAR_3 = (fz_draw_device*)VAR_2;
 fz_draw_state *VAR_4;

 if (VAR_3->top == 0)
  FUNC_4(VAR_1, VAR_0, "unexpected pop clip");

 VAR_4 = FUNC_5(VAR_1, VAR_3, "clip");




 if (VAR_4[1].mask)
 {
  FUNC_3(VAR_4[0].dest, VAR_4[1].dest, VAR_4[1].mask);
  if (VAR_4[0].shape != VAR_4[1].shape)
  {
   FUNC_3(VAR_4[0].shape, VAR_4[1].shape, VAR_4[1].mask);
   FUNC_1(VAR_1, VAR_4[1].shape);
   VAR_4[1].shape = ((void*)0);
  }
  if (VAR_4[0].group_alpha != VAR_4[1].group_alpha)
  {
   FUNC_3(VAR_4[0].group_alpha, VAR_4[1].group_alpha, VAR_4[1].mask);
   FUNC_1(VAR_1, VAR_4[1].group_alpha);
   VAR_4[1].group_alpha = ((void*)0);
  }
  FUNC_1(VAR_1, VAR_4[1].mask);
  VAR_4[1].mask = ((void*)0);
  FUNC_1(VAR_1, VAR_4[1].dest);
  VAR_4[1].dest = ((void*)0);
 }
 else
 {



 }
}

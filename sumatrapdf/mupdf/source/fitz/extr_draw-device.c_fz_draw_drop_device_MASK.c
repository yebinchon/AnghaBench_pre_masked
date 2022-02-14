
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_rasterizer ;
struct TYPE_4__ {scalar_t__ mask; scalar_t__ dest; scalar_t__ shape; scalar_t__ group_alpha; } ;
typedef TYPE_1__ fz_draw_state ;
struct TYPE_5__ {int top; int cache_y; int cache_x; TYPE_1__* stack; TYPE_1__* init_stack; int proof_cs; int default_cs; int * rast; } ;
typedef TYPE_2__ fz_draw_device ;
typedef int fz_device ;
typedef int fz_context ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(fz_context *VAR_0, fz_device *VAR_1)
{
 fz_draw_device *VAR_2 = (fz_draw_device*)VAR_1;
 fz_rasterizer *VAR_3 = VAR_2->rast;

 FUNC_1(VAR_0, VAR_2->default_cs);
 FUNC_0(VAR_0, VAR_2->proof_cs);


 for (; VAR_2->top > 0; VAR_2->top--)
 {
  fz_draw_state *VAR_4 = &VAR_2->stack[VAR_2->top - 1];
  if (VAR_4[1].mask != VAR_4[0].mask)
   FUNC_2(VAR_0, VAR_4[1].mask);
  if (VAR_4[1].dest != VAR_4[0].dest)
   FUNC_2(VAR_0, VAR_4[1].dest);
  if (VAR_4[1].shape != VAR_4[0].shape)
   FUNC_2(VAR_0, VAR_4[1].shape);
  if (VAR_4[1].group_alpha != VAR_4[0].group_alpha)
   FUNC_2(VAR_0, VAR_4[1].group_alpha);
 }






 if (VAR_2->stack != &VAR_2->init_stack[0])
  FUNC_5(VAR_0, VAR_2->stack);
 FUNC_4(VAR_0, VAR_2->cache_x);
 FUNC_4(VAR_0, VAR_2->cache_y);
 FUNC_3(VAR_0, VAR_3);
}

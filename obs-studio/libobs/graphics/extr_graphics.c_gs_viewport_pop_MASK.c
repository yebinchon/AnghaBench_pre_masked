
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gs_rect {int cy; int cx; int y; int x; } ;
struct TYPE_5__ {int num; } ;
struct TYPE_4__ {TYPE_2__ viewport_stack; } ;


 struct gs_rect* FUNC_0 (TYPE_2__) ;
 int FUNC_1 (TYPE_2__) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (char*) ;
 TYPE_1__* VAR_0 ;

void FUNC_4(void)
{
 struct gs_rect *VAR_1;

 if (!FUNC_3("gs_viewport_pop"))
  return;
 if (!VAR_0->viewport_stack.num)
  return;

 VAR_1 = FUNC_0(VAR_0->viewport_stack);
 FUNC_2(VAR_1->x, VAR_1->y, VAR_1->cx, VAR_1->cy);
 FUNC_1(VAR_0->viewport_stack);
}

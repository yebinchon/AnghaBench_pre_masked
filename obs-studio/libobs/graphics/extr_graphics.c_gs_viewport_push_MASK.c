
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gs_rect {int dummy; } ;
struct TYPE_2__ {int viewport_stack; } ;


 struct gs_rect* FUNC_0 (int ) ;
 int FUNC_1 (struct gs_rect*) ;
 int FUNC_2 (char*) ;
 TYPE_1__* VAR_0 ;

void FUNC_3(void)
{
 if (!FUNC_2("gs_viewport_push"))
  return;

 struct gs_rect *VAR_1 =
  FUNC_0(VAR_0->viewport_stack);
 FUNC_1(VAR_1);
}

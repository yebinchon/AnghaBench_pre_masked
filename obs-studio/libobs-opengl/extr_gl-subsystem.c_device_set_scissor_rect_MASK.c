
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gs_rect {int cy; int cx; int y; int x; } ;
typedef int gs_device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*) ;

void FUNC_6(gs_device_t *VAR_2, const struct gs_rect *VAR_3)
{
 FUNC_0(VAR_2);

 if (VAR_3 != ((void*)0)) {
  FUNC_2(VAR_3->x, VAR_3->y, VAR_3->cx, VAR_3->cy);
  if (FUNC_5("glScissor") && FUNC_4(VAR_0))
   return;

 } else if (FUNC_3(VAR_0)) {
  return;
 }

 FUNC_1(VAR_1, "device_set_scissor_rect (GL) failed");
}

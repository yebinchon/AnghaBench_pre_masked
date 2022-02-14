
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int x; int y; int cx; int cy; } ;
struct TYPE_6__ {TYPE_1__ cur_viewport; scalar_t__ cur_swap; scalar_t__ cur_render_target; } ;
typedef TYPE_2__ gs_device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int,int,int,int) ;
 int FUNC_3 (scalar_t__,int*,int*) ;
 int FUNC_4 (char*) ;

void FUNC_5(gs_device_t *VAR_1, int VAR_2, int VAR_3, int VAR_4,
    int VAR_5)
{
 uint32_t VAR_6 = 0;
 int VAR_7 = 0;


 if (VAR_1->cur_render_target) {
  VAR_6 = FUNC_1(VAR_1);
 } else if (VAR_1->cur_swap) {
  uint32_t VAR_8;
  FUNC_3(VAR_1->cur_swap, &VAR_8, &VAR_6);
 }

 if (VAR_6)
  VAR_7 = VAR_6 - VAR_3 - VAR_5;

 FUNC_2(VAR_2, VAR_7, VAR_4, VAR_5);
 if (!FUNC_4("glViewport"))
  FUNC_0(VAR_0, "device_set_viewport (GL) failed");

 VAR_1->cur_viewport.x = VAR_2;
 VAR_1->cur_viewport.y = VAR_3;
 VAR_1->cur_viewport.cx = VAR_4;
 VAR_1->cur_viewport.cy = VAR_5;
}

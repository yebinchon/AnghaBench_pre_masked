
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wl_fixed_t ;
typedef int uint32_t ;
struct wl_touch {int dummy; } ;
struct touch_slot {int x; int start_x; TYPE_1__* output; void* y; } ;
struct swaybar_seat {int bar; int touch; } ;
typedef int int32_t ;
struct TYPE_2__ {int width; } ;


 int FUNC_0 (int) ;
 struct touch_slot* FUNC_1 (int *,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, struct wl_touch *VAR_1,
  uint32_t VAR_2, int32_t VAR_3, wl_fixed_t VAR_4, wl_fixed_t VAR_5) {
 struct swaybar_seat *VAR_6 = VAR_0;
 struct touch_slot *VAR_7 = FUNC_1(&VAR_6->touch, VAR_3);
 if (!VAR_7) {
  return;
 }
 int VAR_8 = (int)((VAR_7->x - VAR_7->start_x)
   / VAR_7->output->width * 100);
 VAR_7->x = FUNC_2(VAR_4);
 VAR_7->y = FUNC_2(VAR_5);



 int VAR_9 = (int)((VAR_7->x - VAR_7->start_x)
   / VAR_7->output->width * 100);
 if (FUNC_0(VAR_9) / 20 != FUNC_0(VAR_8) / 20) {
  FUNC_3(VAR_6->bar, VAR_7->output, VAR_9 - VAR_8 < 0);
 }
}

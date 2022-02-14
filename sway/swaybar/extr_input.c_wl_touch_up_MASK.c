
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct wl_touch {int dummy; } ;
struct touch_slot {int time; int * output; int y; int x; } ;
struct swaybar_seat {int touch; } ;
typedef int int32_t ;


 int VAR_0 ;
 struct touch_slot* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, struct wl_touch *VAR_2,
  uint32_t VAR_3, uint32_t VAR_4, int32_t VAR_5) {
 struct swaybar_seat *VAR_6 = VAR_1;
 struct touch_slot *VAR_7 = FUNC_0(&VAR_6->touch, VAR_5);
 if (!VAR_7) {
  return;
 }
 if (VAR_4 - VAR_7->time < 500) {

  FUNC_1(VAR_7->output, VAR_7->x, VAR_7->y, VAR_0);
 }
 VAR_7->output = ((void*)0);
}

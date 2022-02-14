
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct wl_pointer {int dummy; } ;
struct swaybar_pointer {int y; int x; struct swaybar_output* current; } ;
struct swaybar_seat {int bar; struct swaybar_pointer pointer; } ;
struct swaybar_output {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct swaybar_output*,int ,int ,int ) ;
 int FUNC_2 (struct swaybar_output*,char*) ;

__attribute__((used)) static void FUNC_3(void *VAR_1, struct wl_pointer *VAR_2,
  uint32_t VAR_3, uint32_t VAR_4, uint32_t VAR_5, uint32_t VAR_6) {
 struct swaybar_seat *VAR_7 = VAR_1;
 struct swaybar_pointer *VAR_8 = &VAR_7->pointer;
 struct swaybar_output *VAR_9 = VAR_8->current;
 if (!FUNC_2(VAR_9, "button with no active output")) {
  return;
 }

 if (FUNC_0(VAR_7->bar, VAR_5, VAR_6)) {
  return;
 }

 if (VAR_6 != VAR_0) {
  return;
 }
 FUNC_1(VAR_9, VAR_8->x, VAR_8->y, VAR_5);
}

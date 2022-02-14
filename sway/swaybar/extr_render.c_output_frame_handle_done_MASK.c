
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct wl_callback {int dummy; } ;
struct swaybar_output {int frame_scheduled; int dirty; } ;


 int FUNC_0 (struct swaybar_output*) ;
 int FUNC_1 (struct wl_callback*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, struct wl_callback *VAR_1,
  uint32_t VAR_2) {
 FUNC_1(VAR_1);
 struct swaybar_output *VAR_3 = VAR_0;
 VAR_3->frame_scheduled = 0;
 if (VAR_3->dirty) {
  FUNC_0(VAR_3);
  VAR_3->dirty = 0;
 }
}

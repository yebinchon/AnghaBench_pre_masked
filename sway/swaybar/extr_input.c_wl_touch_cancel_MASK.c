
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl_touch {int dummy; } ;
struct swaybar_touch {TYPE_1__* slots; } ;
struct swaybar_seat {struct swaybar_touch touch; } ;
struct TYPE_2__ {int * output; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0, struct wl_touch *VAR_1) {
 struct swaybar_seat *VAR_2 = VAR_0;
 struct swaybar_touch *VAR_3 = &VAR_2->touch;
 for (size_t VAR_4 = 0; VAR_4 < sizeof(VAR_3->slots) / sizeof(*VAR_3->slots); ++VAR_4) {
  VAR_3->slots[VAR_4].output = ((void*)0);
 }
}

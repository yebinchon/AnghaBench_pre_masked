
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * touch; } ;
struct TYPE_3__ {int * cursor_surface; int * pointer; } ;
struct swaybar_seat {int link; int wl_seat; TYPE_2__ touch; TYPE_1__ pointer; } ;


 int FUNC_0 (struct swaybar_seat*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct swaybar_seat *VAR_0) {
 if (!VAR_0) {
  return;
 }
 if (VAR_0->pointer.pointer != ((void*)0)) {
  FUNC_2(VAR_0->pointer.pointer);
 }
 if (VAR_0->pointer.cursor_surface != ((void*)0)) {
  FUNC_4(VAR_0->pointer.cursor_surface);
 }
 if (VAR_0->touch.touch != ((void*)0)) {
  FUNC_5(VAR_0->touch.touch);
 }
 FUNC_3(VAR_0->wl_seat);
 FUNC_1(&VAR_0->link);
 FUNC_0(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wl_seat {int dummy; } ;
struct TYPE_6__ {int * touch; } ;
struct TYPE_5__ {int * pointer; scalar_t__ cursor_surface; } ;
struct swaybar_seat {TYPE_3__ touch; TYPE_2__ pointer; TYPE_1__* bar; } ;
typedef enum wl_seat_capability { ____Placeholder_wl_seat_capability } wl_seat_capability ;
struct TYPE_4__ {int compositor; scalar_t__ running; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,struct swaybar_seat*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (struct wl_seat*) ;
 int * FUNC_5 (struct wl_seat*) ;
 int FUNC_6 (int *,int *,struct swaybar_seat*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(void *VAR_4, struct wl_seat *VAR_5,
  enum wl_seat_capability VAR_6) {
 struct swaybar_seat *VAR_7 = VAR_4;
 if (VAR_7->pointer.pointer != ((void*)0)) {
  FUNC_3(VAR_7->pointer.pointer);
  VAR_7->pointer.pointer = ((void*)0);
 }
 if (VAR_7->touch.touch != ((void*)0)) {
  FUNC_7(VAR_7->touch.touch);
  VAR_7->touch.touch = ((void*)0);
 }
 if ((VAR_6 & VAR_0)) {
  VAR_7->pointer.pointer = FUNC_4(VAR_5);
  if (VAR_7->bar->running && !VAR_7->pointer.cursor_surface) {
   VAR_7->pointer.cursor_surface =
    FUNC_1(VAR_7->bar->compositor);
   FUNC_0(VAR_7->pointer.cursor_surface);
  }
  FUNC_2(VAR_7->pointer.pointer, &VAR_2, VAR_7);
 }
 if ((VAR_6 & VAR_1)) {
  VAR_7->touch.touch = FUNC_5(VAR_5);
  FUNC_6(VAR_7->touch.touch, &VAR_3, VAR_7);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wlr_event_pointer_motion_absolute {int device; int time_msec; int y; int x; } ;
struct wl_listener {int dummy; } ;
struct sway_cursor {TYPE_1__* cursor; } ;
struct TYPE_2__ {double x; double y; } ;


 struct sway_cursor* VAR_0 ;
 int FUNC_0 (struct sway_cursor*,int ,int ,double,double,double,double) ;
 int VAR_1 ;
 int FUNC_1 () ;
 struct sway_cursor* FUNC_2 (struct wl_listener*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ,double*,double*) ;

__attribute__((used)) static void FUNC_4(
  struct wl_listener *VAR_2, void *VAR_3) {
 struct sway_cursor *VAR_4 =
  FUNC_2(VAR_2, VAR_4, VAR_1);
 struct wlr_event_pointer_motion_absolute *VAR_5 = VAR_3;

 double VAR_6, VAR_7;
 FUNC_3(VAR_4->cursor, VAR_5->device,
   VAR_5->x, VAR_5->y, &VAR_6, &VAR_7);

 double VAR_8 = VAR_6 - VAR_4->cursor->x;
 double VAR_9 = VAR_7 - VAR_4->cursor->y;

 FUNC_0(VAR_4, VAR_5->time_msec, VAR_5->device, VAR_8, VAR_9, VAR_8, VAR_9);
 FUNC_1();
}

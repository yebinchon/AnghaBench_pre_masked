
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int destroy; } ;
struct wlr_tablet_tool {struct sway_tablet_tool* data; TYPE_3__ events; } ;
struct TYPE_13__ {int notify; } ;
struct sway_tablet_tool {TYPE_6__ set_cursor; TYPE_5__* tablet_v2_tool; TYPE_6__ tool_destroy; struct sway_tablet* tablet; TYPE_1__* seat; } ;
struct sway_tablet {TYPE_2__* seat_device; } ;
struct TYPE_14__ {int tablet_v2; } ;
struct TYPE_11__ {int set_cursor; } ;
struct TYPE_12__ {TYPE_4__ events; } ;
struct TYPE_9__ {TYPE_1__* sway_seat; } ;
struct TYPE_8__ {int wlr_seat; } ;


 struct sway_tablet_tool* FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__ VAR_2 ;
 int FUNC_1 (struct sway_tablet_tool*,char*) ;
 int FUNC_2 (int *,TYPE_6__*) ;
 TYPE_5__* FUNC_3 (int ,int ,struct wlr_tablet_tool*) ;

void FUNC_4(struct sway_tablet *VAR_3,
  struct wlr_tablet_tool *VAR_4) {
 struct sway_tablet_tool *VAR_5 =
  FUNC_0(1, sizeof(struct sway_tablet_tool));
 if (!FUNC_1(VAR_5, "could not allocate sway tablet tool for tablet")) {
  return;
 }

 VAR_5->seat = VAR_3->seat_device->sway_seat;
 VAR_5->tablet = VAR_3;
 VAR_5->tablet_v2_tool =
  FUNC_3(VAR_2.tablet_v2,
   VAR_3->seat_device->sway_seat->wlr_seat, VAR_4);

 VAR_5->tool_destroy.notify = VAR_0;
 FUNC_2(&VAR_4->events.destroy, &VAR_5->tool_destroy);

 VAR_5->set_cursor.notify = VAR_1;
 FUNC_2(&VAR_5->tablet_v2_tool->events.set_cursor,
  &VAR_5->set_cursor);

 VAR_4->data = VAR_5;
}

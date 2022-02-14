
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wlr_tablet_tool {int type; struct sway_tablet_tool* data; } ;
struct wlr_surface {int dummy; } ;
struct sway_tablet_tool {int tablet_v2_tool; } ;
struct sway_tablet {int tablet_v2; TYPE_1__* seat_device; } ;
struct sway_seat {int dummy; } ;
struct sway_input_device {int wlr_device; } ;
struct sway_cursor {TYPE_2__* cursor; struct sway_seat* seat; } ;
struct input_config {int * mapped_from_region; } ;
typedef int int32_t ;
struct TYPE_5__ {int y; int x; } ;
struct TYPE_4__ {struct sway_input_device* input_device; } ;


 double VAR_0 ;

 int FUNC_0 (int ,int *,double*,double*) ;
 int FUNC_1 (struct sway_cursor*,int ,int ,double,double,double,double) ;
 struct input_config* FUNC_2 (struct sway_input_device*) ;
 int FUNC_3 (struct sway_seat*,int ,int ,struct wlr_surface**,double*,double*) ;
 int FUNC_4 (TYPE_2__*,int ,double,double) ;
 int FUNC_5 (TYPE_2__*,int ,double,double) ;
 int FUNC_6 (int ,struct wlr_surface*) ;
 int FUNC_7 (int ,double,double) ;
 int FUNC_8 (int ,int ,struct wlr_surface*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct sway_cursor *VAR_1,
  struct sway_tablet *VAR_2,
  struct wlr_tablet_tool *VAR_3,
  bool VAR_4, bool VAR_5,
  double VAR_6, double VAR_7, double VAR_8, double VAR_9,
  int32_t VAR_10) {
 if (!VAR_4 && !VAR_5) {
  return;
 }

 struct sway_input_device *VAR_11 = VAR_2->seat_device->input_device;
 struct input_config *VAR_12 = FUNC_2(VAR_11);
 if (VAR_12 != ((void*)0) && VAR_12->mapped_from_region != ((void*)0)) {
  FUNC_0(VAR_11->wlr_device,
   VAR_12->mapped_from_region, &VAR_6, &VAR_7);
 }

 switch (VAR_3->type) {
 case 128:
  FUNC_4(VAR_1->cursor, VAR_11->wlr_device, VAR_8, VAR_9);
  break;
 default:
  FUNC_5(VAR_1->cursor, VAR_11->wlr_device,
   VAR_4 ? VAR_6 : VAR_0, VAR_5 ? VAR_7 : VAR_0);
 }

 double VAR_13, VAR_14;
 struct wlr_surface *VAR_15 = ((void*)0);
 struct sway_seat *VAR_16 = VAR_1->seat;
 FUNC_3(VAR_16, VAR_1->cursor->x, VAR_1->cursor->y,
  &VAR_15, &VAR_13, &VAR_14);
 struct sway_tablet_tool *VAR_17 = VAR_3->data;

 if (!VAR_15 || !FUNC_6(VAR_2->tablet_v2, VAR_15)) {
  FUNC_9(VAR_17->tablet_v2_tool);
  FUNC_1(VAR_1, VAR_10, VAR_11->wlr_device, VAR_8, VAR_9, VAR_8, VAR_9);
  return;
 }

 FUNC_8(VAR_17->tablet_v2_tool,
  VAR_2->tablet_v2, VAR_15);

 FUNC_7(VAR_17->tablet_v2_tool, VAR_13, VAR_14);
}

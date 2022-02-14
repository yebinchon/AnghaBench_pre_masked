
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_seat_request_set_selection_event {int serial; int source; } ;
struct wl_listener {int dummy; } ;
struct sway_seat {int wlr_seat; } ;


 int VAR_0 ;
 struct sway_seat* VAR_1 ;
 struct sway_seat* FUNC_0 (struct wl_listener*,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct wl_listener *VAR_2,
  void *VAR_3) {
 struct sway_seat *VAR_4 =
  FUNC_0(VAR_2, VAR_4, VAR_0);
 struct wlr_seat_request_set_selection_event *VAR_5 = VAR_3;
 FUNC_1(VAR_4->wlr_seat, VAR_5->source, VAR_5->serial);
}

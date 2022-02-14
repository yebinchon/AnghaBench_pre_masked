
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_event_pointer_axis {int dummy; } ;
struct wl_listener {int dummy; } ;
struct sway_cursor {int dummy; } ;


 int VAR_0 ;
 struct sway_cursor* VAR_1 ;
 int FUNC_0 (struct sway_cursor*) ;
 int FUNC_1 (struct sway_cursor*,struct wlr_event_pointer_axis*) ;
 int FUNC_2 () ;
 struct sway_cursor* FUNC_3 (struct wl_listener*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct wl_listener *VAR_2, void *VAR_3) {
 struct sway_cursor *VAR_4 = FUNC_3(VAR_2, VAR_4, VAR_0);
 struct wlr_event_pointer_axis *VAR_5 = VAR_3;
 FUNC_0(VAR_4);
 FUNC_1(VAR_4, VAR_5);
 FUNC_2();
}

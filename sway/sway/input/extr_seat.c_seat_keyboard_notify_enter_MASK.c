
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_surface {int dummy; } ;
struct wlr_keyboard {int modifiers; } ;
struct sway_shortcut_state {int npressed; int * pressed_keycodes; } ;
struct sway_seat {int wlr_seat; } ;
struct sway_keyboard {struct sway_shortcut_state state_pressed_sent; } ;


 int FUNC_0 (int) ;
 struct sway_keyboard* FUNC_1 (struct sway_seat*,struct wlr_keyboard*) ;
 struct wlr_keyboard* FUNC_2 (int ) ;
 int FUNC_3 (int ,struct wlr_surface*,int *,int ,int *) ;

__attribute__((used)) static void FUNC_4(struct sway_seat *VAR_0,
  struct wlr_surface *VAR_1) {
 struct wlr_keyboard *VAR_2 = FUNC_2(VAR_0->wlr_seat);
 if (!VAR_2) {
  FUNC_3(VAR_0->wlr_seat, VAR_1, ((void*)0), 0, ((void*)0));
  return;
 }

 struct sway_keyboard *VAR_3 =
  FUNC_1(VAR_0, VAR_2);
 FUNC_0(VAR_3 && "Cannot find sway_keyboard for seat keyboard");

 struct sway_shortcut_state *VAR_4 = &VAR_3->state_pressed_sent;
 FUNC_3(VAR_0->wlr_seat, VAR_1,
   VAR_4->pressed_keycodes, VAR_4->npressed, &VAR_2->modifiers);
}

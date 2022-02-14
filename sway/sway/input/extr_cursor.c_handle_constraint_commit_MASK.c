
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_pointer_constraint_v1 {void* surface; } ;
struct wl_listener {int dummy; } ;
struct sway_cursor {struct wlr_pointer_constraint_v1* active_constraint; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct sway_cursor*) ;
 int VAR_0 ;
 struct sway_cursor* VAR_1 ;
 struct sway_cursor* FUNC_2 (struct wl_listener*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct wl_listener *VAR_2,
  void *VAR_3) {
 struct sway_cursor *VAR_4 =
  FUNC_2(VAR_2, VAR_4, VAR_0);
 struct wlr_pointer_constraint_v1 *VAR_5 = VAR_4->active_constraint;
 FUNC_0(VAR_5->surface == VAR_3);

 FUNC_1(VAR_4);
}

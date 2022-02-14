
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl_listener {int dummy; } ;
struct sway_cursor {TYPE_1__* seat; } ;
struct TYPE_2__ {int wlr_seat; } ;


 struct sway_cursor* VAR_0 ;
 int FUNC_0 (struct sway_cursor*) ;
 int VAR_1 ;
 struct sway_cursor* FUNC_1 (struct wl_listener*,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct wl_listener *VAR_2, void *VAR_3) {
 struct sway_cursor *VAR_4 = FUNC_1(VAR_2, VAR_4, VAR_1);
 FUNC_0(VAR_4);
 FUNC_2(VAR_4->seat->wlr_seat);
}

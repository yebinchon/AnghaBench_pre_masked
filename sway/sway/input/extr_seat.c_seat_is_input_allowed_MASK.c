
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_surface {int resource; } ;
struct wl_client {int dummy; } ;
struct sway_seat {struct wl_client* exclusive_client; } ;


 struct wl_client* FUNC_0 (int ) ;

bool FUNC_1(struct sway_seat *VAR_0,
  struct wlr_surface *VAR_1) {
 struct wl_client *VAR_2 = FUNC_0(VAR_1->resource);
 return !VAR_0->exclusive_client || VAR_0->exclusive_client == VAR_2;
}

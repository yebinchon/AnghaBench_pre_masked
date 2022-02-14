
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlr_xwayland_surface {scalar_t__ x; scalar_t__ y; int surface; } ;
struct wl_listener {int dummy; } ;
struct sway_xwayland_unmanaged {scalar_t__ lx; scalar_t__ ly; struct wlr_xwayland_surface* wlr_xwayland_surface; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__,int) ;
 struct sway_xwayland_unmanaged* VAR_1 ;
 struct sway_xwayland_unmanaged* FUNC_1 (struct wl_listener*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct wl_listener *VAR_2, void *VAR_3) {
 struct sway_xwayland_unmanaged *VAR_4 =
  FUNC_1(VAR_2, VAR_4, VAR_0);
 struct wlr_xwayland_surface *VAR_5 = VAR_4->wlr_xwayland_surface;

 if (VAR_5->x != VAR_4->lx || VAR_5->y != VAR_4->ly) {

  FUNC_0(VAR_5->surface, VAR_4->lx, VAR_4->ly,
   1);
  VAR_4->lx = VAR_5->x;
  VAR_4->ly = VAR_5->y;
  FUNC_0(VAR_5->surface, VAR_4->lx, VAR_4->ly,
   1);
 } else {
  FUNC_0(VAR_5->surface, VAR_5->x, VAR_5->y,
   0);
 }
}

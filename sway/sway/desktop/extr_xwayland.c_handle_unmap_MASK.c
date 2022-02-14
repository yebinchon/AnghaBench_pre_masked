
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl_listener {int dummy; } ;
struct TYPE_2__ {int link; } ;
struct sway_view {int surface; } ;
struct sway_xwayland_view {TYPE_1__ commit; struct sway_view view; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct sway_view*) ;
 struct sway_xwayland_view* FUNC_2 (struct wl_listener*,int ,int ) ;
 int FUNC_3 (int *) ;
 struct sway_xwayland_view* VAR_1 ;

__attribute__((used)) static void FUNC_4(struct wl_listener *VAR_2, void *VAR_3) {
 struct sway_xwayland_view *VAR_4 =
  FUNC_2(VAR_2, VAR_4, VAR_0);
 struct sway_view *VAR_5 = &VAR_4->view;

 if (!FUNC_0(VAR_5->surface, "Cannot unmap unmapped view")) {
  return;
 }

 FUNC_1(VAR_5);

 FUNC_3(&VAR_4->commit.link);
}

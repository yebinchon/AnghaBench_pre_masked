
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wlr_xwayland_surface {int dummy; } ;
struct wlr_xdg_surface {int dummy; } ;
struct wlr_surface {TYPE_1__* role; } ;
struct wlr_subsurface {struct wlr_surface* parent; } ;
struct sway_view {int dummy; } ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*,struct wlr_surface*) ;
 struct sway_view* FUNC_1 (struct wlr_xdg_surface*) ;
 struct sway_view* FUNC_2 (struct wlr_xwayland_surface*) ;
 struct wlr_subsurface* FUNC_3 (struct wlr_surface*) ;
 scalar_t__ FUNC_4 (struct wlr_surface*) ;
 scalar_t__ FUNC_5 (struct wlr_surface*) ;
 scalar_t__ FUNC_6 (struct wlr_surface*) ;
 scalar_t__ FUNC_7 (struct wlr_surface*) ;
 struct wlr_xdg_surface* FUNC_8 (struct wlr_surface*) ;
 struct wlr_xwayland_surface* FUNC_9 (struct wlr_surface*) ;

struct sway_view *FUNC_10(struct wlr_surface *VAR_1) {
 if (FUNC_6(VAR_1)) {
  struct wlr_xdg_surface *VAR_2 =
   FUNC_8(VAR_1);
  return FUNC_1(VAR_2);
 }







 if (FUNC_5(VAR_1)) {
  struct wlr_subsurface *VAR_3 =
   FUNC_3(VAR_1);
  return FUNC_10(VAR_3->parent);
 }
 if (FUNC_4(VAR_1)) {
  return ((void*)0);
 }

 const char *VAR_4 = VAR_1->role ? VAR_1->role->name : ((void*)0);
 FUNC_0(VAR_0, "Surface of unknown type (role %s): %p",
  VAR_4, VAR_1);
 return ((void*)0);
}

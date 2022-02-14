
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_view {TYPE_1__* wlr_xwayland_surface; } ;
typedef enum sway_view_prop { ____Placeholder_sway_view_prop } sway_view_prop ;
struct TYPE_2__ {char const* title; char const* class; char const* instance; char const* role; } ;






 int * FUNC_0 (struct sway_view*) ;

__attribute__((used)) static const char *FUNC_1(struct sway_view *VAR_0, enum sway_view_prop VAR_1) {
 if (FUNC_0(VAR_0) == ((void*)0)) {
  return ((void*)0);
 }
 switch (VAR_1) {
 case 129:
  return VAR_0->wlr_xwayland_surface->title;
 case 131:
  return VAR_0->wlr_xwayland_surface->class;
 case 130:
  return VAR_0->wlr_xwayland_surface->instance;
 case 128:
  return VAR_0->wlr_xwayland_surface->role;
 default:
  return ((void*)0);
 }
}

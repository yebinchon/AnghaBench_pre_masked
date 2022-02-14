
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_view {TYPE_2__* wlr_xdg_surface; } ;
typedef enum sway_view_prop { ____Placeholder_sway_view_prop } sway_view_prop ;
struct TYPE_4__ {TYPE_1__* toplevel; } ;
struct TYPE_3__ {char const* title; char const* app_id; } ;




 int * FUNC_0 (struct sway_view*) ;

__attribute__((used)) static const char *FUNC_1(struct sway_view *VAR_0,
  enum sway_view_prop VAR_1) {
 if (FUNC_0(VAR_0) == ((void*)0)) {
  return ((void*)0);
 }
 switch (VAR_1) {
 case 128:
  return VAR_0->wlr_xdg_surface->toplevel->title;
 case 129:
  return VAR_0->wlr_xdg_surface->toplevel->app_id;
 default:
  return ((void*)0);
 }
}

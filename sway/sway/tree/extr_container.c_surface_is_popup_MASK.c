
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wlr_xdg_surface {scalar_t__ role; TYPE_1__* toplevel; } ;
struct wlr_surface {int dummy; } ;
struct TYPE_2__ {struct wlr_xdg_surface* parent; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct wlr_surface*) ;
 struct wlr_xdg_surface* FUNC_1 (struct wlr_surface*) ;

__attribute__((used)) static bool FUNC_2(struct wlr_surface *VAR_2) {
 if (FUNC_0(VAR_2)) {
  struct wlr_xdg_surface *VAR_3 =
   FUNC_1(VAR_2);
  while (VAR_3 && VAR_3->role != VAR_0) {
   if (VAR_3->role == VAR_1) {
    return 1;
   }
   VAR_3 = VAR_3->toplevel->parent;
  }
  return 0;
 }

 return 0;
}

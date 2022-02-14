
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wlr_surface {int dummy; } ;
struct TYPE_9__ {scalar_t__ y; scalar_t__ x; } ;
struct wlr_subsurface {struct wlr_surface* parent; TYPE_4__ current; } ;
struct sway_view_child {TYPE_5__* parent; TYPE_2__* view; struct wlr_surface* surface; } ;
struct TYPE_10__ {TYPE_3__* impl; } ;
struct TYPE_8__ {int (* get_root_coords ) (TYPE_5__*,int*,int*) ;} ;
struct TYPE_6__ {int x; int y; } ;
struct TYPE_7__ {TYPE_1__ geometry; } ;


 int FUNC_0 (TYPE_5__*,int*,int*) ;
 struct wlr_subsurface* FUNC_1 (struct wlr_surface*) ;
 scalar_t__ FUNC_2 (struct wlr_surface*) ;

__attribute__((used)) static void FUNC_3(struct sway_view_child *VAR_0,
  int *VAR_1, int *VAR_2) {
 struct wlr_surface *VAR_3 = VAR_0->surface;
 *VAR_1 = -VAR_0->view->geometry.x;
 *VAR_2 = -VAR_0->view->geometry.y;

 if (VAR_0->parent && VAR_0->parent->impl &&
   VAR_0->parent->impl->get_root_coords) {
  int VAR_4, VAR_5;
  VAR_0->parent->impl->get_root_coords(VAR_0->parent, &VAR_4, &VAR_5);
  *VAR_1 += VAR_4;
  *VAR_2 += VAR_5;
 } else {
  while (VAR_3 && FUNC_2(VAR_3)) {
   struct wlr_subsurface *VAR_6 =
    FUNC_1(VAR_3);
   if (VAR_6 == ((void*)0)) {
    break;
   }
   *VAR_1 += VAR_6->current.x;
   *VAR_2 += VAR_6->current.y;
   VAR_3 = VAR_6->parent;
  }
 }
}

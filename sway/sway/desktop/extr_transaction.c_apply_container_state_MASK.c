
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ width; scalar_t__ height; } ;
struct wlr_surface {TYPE_3__ current; } ;
struct wlr_box {scalar_t__ width; scalar_t__ height; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_7__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_6__ {scalar_t__ y; scalar_t__ x; } ;
struct sway_view {scalar_t__ saved_buffer_width; scalar_t__ saved_buffer_height; struct wlr_surface* surface; TYPE_2__ geometry; scalar_t__ saved_buffer; TYPE_1__ saved_geometry; } ;
struct sway_container_state {int dummy; } ;
struct TYPE_9__ {int ntxnrefs; int destroying; } ;
struct TYPE_10__ {scalar_t__ content_y; scalar_t__ content_x; int children; } ;
struct sway_container {scalar_t__ width; int content_width; scalar_t__ height; int content_height; int surface_width; int surface_height; TYPE_4__ node; scalar_t__ content_y; scalar_t__ surface_y; scalar_t__ content_x; scalar_t__ surface_x; TYPE_5__ current; struct sway_view* view; } ;


 int FUNC_0 (struct sway_container*) ;
 int FUNC_1 (struct wlr_box*) ;
 int FUNC_2 (struct sway_container*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_5__*,struct sway_container_state*,int) ;
 int FUNC_5 (struct sway_view*) ;

__attribute__((used)) static void FUNC_6(struct sway_container *VAR_0,
  struct sway_container_state *VAR_1) {
 struct sway_view *VAR_2 = VAR_0->view;

 FUNC_2(VAR_0);
 if (VAR_2 && VAR_2->saved_buffer) {
  struct wlr_box VAR_3 = {
   .x = VAR_0->current.content_x - VAR_2->saved_geometry.x,
   .y = VAR_0->current.content_y - VAR_2->saved_geometry.y,
   .width = VAR_2->saved_buffer_width,
   .height = VAR_2->saved_buffer_height,
  };
  FUNC_1(&VAR_3);
 }






 FUNC_3(VAR_0->current.children);

 FUNC_4(&VAR_0->current, VAR_1, sizeof(struct sway_container_state));

 if (VAR_2 && VAR_2->saved_buffer) {
  if (!VAR_0->node.destroying || VAR_0->node.ntxnrefs == 1) {
   FUNC_5(VAR_2);
  }
 }


 FUNC_2(VAR_0);
 if (VAR_2 && VAR_2->surface) {
  struct wlr_surface *VAR_4 = VAR_2->surface;
  struct wlr_box VAR_5 = {
   .x = VAR_0->current.content_x - VAR_2->geometry.x,
   .y = VAR_0->current.content_y - VAR_2->geometry.y,
   .width = VAR_4->current.width,
   .height = VAR_4->current.height,
  };
  FUNC_1(&VAR_5);
 }




 if (VAR_2 && VAR_2->surface) {
  if (VAR_2->surface->current.width < VAR_0->width) {
   VAR_0->surface_x = VAR_0->content_x +
    (VAR_0->content_width - VAR_2->surface->current.width) / 2;
  } else {
   VAR_0->surface_x = VAR_0->content_x;
  }
  if (VAR_2->surface->current.height < VAR_0->height) {
   VAR_0->surface_y = VAR_0->content_y +
    (VAR_0->content_height - VAR_2->surface->current.height) / 2;
  } else {
   VAR_0->surface_y = VAR_0->content_y;
  }
  VAR_0->surface_width = VAR_2->surface->current.width;
  VAR_0->surface_height = VAR_2->surface->current.height;
 }

 if (!VAR_0->node.destroying) {
  FUNC_0(VAR_0);
 }
}

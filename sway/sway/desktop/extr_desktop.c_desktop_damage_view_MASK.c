
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wlr_box {int height; int width; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_8__ {scalar_t__ y; scalar_t__ x; } ;
struct sway_view {TYPE_2__* surface; TYPE_3__ geometry; TYPE_5__* container; } ;
struct TYPE_9__ {scalar_t__ content_y; scalar_t__ content_x; } ;
struct TYPE_10__ {TYPE_4__ current; } ;
struct TYPE_6__ {int height; int width; } ;
struct TYPE_7__ {TYPE_1__ current; } ;


 int FUNC_0 (struct wlr_box*) ;
 int FUNC_1 (TYPE_5__*) ;

void FUNC_2(struct sway_view *VAR_0) {
 FUNC_1(VAR_0->container);
 struct wlr_box VAR_1 = {
  .x = VAR_0->container->current.content_x - VAR_0->geometry.x,
  .y = VAR_0->container->current.content_y - VAR_0->geometry.y,
  .width = VAR_0->surface->current.width,
  .height = VAR_0->surface->current.height,
 };
 FUNC_0(&VAR_1);
}

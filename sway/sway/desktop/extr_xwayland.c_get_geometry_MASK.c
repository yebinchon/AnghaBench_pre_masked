
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlr_box {scalar_t__ height; scalar_t__ width; scalar_t__ y; scalar_t__ x; } ;
struct sway_view {TYPE_2__* surface; } ;
struct TYPE_3__ {scalar_t__ height; scalar_t__ width; } ;
struct TYPE_4__ {TYPE_1__ current; } ;



__attribute__((used)) static void FUNC_0(struct sway_view *VAR_0, struct wlr_box *VAR_1) {
 VAR_1->x = VAR_1->y = 0;
 if (VAR_0->surface) {
  VAR_1->width = VAR_0->surface->current.width;
  VAR_1->height = VAR_0->surface->current.height;
 } else {
  VAR_1->width = 0;
  VAR_1->height = 0;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlr_surface {int dummy; } ;
struct sway_cursor {TYPE_2__* cursor; } ;
struct sway_container {scalar_t__ border; scalar_t__ border_thickness; scalar_t__ x; scalar_t__ y; scalar_t__ width; scalar_t__ height; TYPE_1__* view; } ;
typedef enum wlr_edges { ____Placeholder_wlr_edges } wlr_edges ;
struct TYPE_4__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_3__ {struct wlr_surface* surface; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static enum wlr_edges FUNC_0(struct sway_container *VAR_7,
  struct wlr_surface *VAR_8, struct sway_cursor *VAR_9) {
 if (!VAR_7->view || (VAR_8 && VAR_7->view->surface != VAR_8)) {
  return VAR_4;
 }
 if (VAR_7->border == VAR_1 || !VAR_7->border_thickness ||
   VAR_7->border == VAR_0) {
  return VAR_4;
 }

 enum wlr_edges VAR_10 = 0;
 if (VAR_9->cursor->x < VAR_7->x + VAR_7->border_thickness) {
  VAR_10 |= VAR_3;
 }
 if (VAR_9->cursor->y < VAR_7->y + VAR_7->border_thickness) {
  VAR_10 |= VAR_6;
 }
 if (VAR_9->cursor->x >= VAR_7->x + VAR_7->width - VAR_7->border_thickness) {
  VAR_10 |= VAR_5;
 }
 if (VAR_9->cursor->y >= VAR_7->y + VAR_7->height - VAR_7->border_thickness) {
  VAR_10 |= VAR_2;
 }

 return VAR_10;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_seat {int dummy; } ;
struct sway_node {int dummy; } ;
struct sway_container {int x; int width; int y; int height; struct sway_node node; TYPE_2__* workspace; } ;
typedef enum wlr_direction { ____Placeholder_wlr_direction } wlr_direction ;
struct TYPE_4__ {TYPE_1__* floating; } ;
struct TYPE_3__ {int length; struct sway_container** items; } ;


 double VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct sway_node *FUNC_0(
  struct sway_container *VAR_4, struct sway_seat *VAR_5,
  enum wlr_direction VAR_6) {
 double VAR_7 = VAR_4->x + VAR_4->width / 2;
 double VAR_8 = VAR_4->y + VAR_4->height / 2;
 double VAR_9 = VAR_0;
 struct sway_container *VAR_10 = ((void*)0);

 if (!VAR_4->workspace) {
  return ((void*)0);
 }

 for (int VAR_11 = 0; VAR_11 < VAR_4->workspace->floating->length; VAR_11++) {
  struct sway_container *VAR_12 = VAR_4->workspace->floating->items[VAR_11];
  if (VAR_12 == VAR_4) {
   continue;
  }
  float VAR_13 = VAR_6 == VAR_1 || VAR_6 == VAR_2
   ? (VAR_12->x + VAR_12->width / 2) - VAR_7
   : (VAR_12->y + VAR_12->height / 2) - VAR_8;
  if (VAR_6 == VAR_1 || VAR_6 == VAR_3) {
   VAR_13 = -VAR_13;
  }
  if (VAR_13 < 0) {
   continue;
  }
  if (VAR_13 < VAR_9) {
   VAR_9 = VAR_13;
   VAR_10 = VAR_12;
  }
 }

 return VAR_10 ? &VAR_10->node : ((void*)0);
}

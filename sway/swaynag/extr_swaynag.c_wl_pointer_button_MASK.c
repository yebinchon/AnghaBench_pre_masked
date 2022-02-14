
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct wl_pointer {int dummy; } ;
struct swaynag_button {double x; double y; double width; double height; } ;
struct TYPE_6__ {int total_lines; int visible_lines; int offset; struct swaynag_button button_down; struct swaynag_button button_up; scalar_t__ visible; } ;
struct TYPE_4__ {double x; double y; } ;
struct swaynag {double scale; TYPE_3__ details; TYPE_2__* buttons; TYPE_1__ pointer; } ;
struct TYPE_5__ {int length; struct swaynag_button** items; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct swaynag*) ;
 int FUNC_1 (struct swaynag*,struct swaynag_button*) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, struct wl_pointer *VAR_2,
  uint32_t VAR_3, uint32_t VAR_4, uint32_t VAR_5, uint32_t VAR_6) {
 struct swaynag *VAR_7 = VAR_1;

 if (VAR_6 != VAR_0) {
  return;
 }

 double VAR_8 = VAR_7->pointer.x * VAR_7->scale;
 double VAR_9 = VAR_7->pointer.y * VAR_7->scale;
 for (int VAR_10 = 0; VAR_10 < VAR_7->buttons->length; VAR_10++) {
  struct swaynag_button *VAR_11 = VAR_7->buttons->items[VAR_10];
  if (VAR_8 >= VAR_11->x
    && VAR_9 >= VAR_11->y
    && VAR_8 < VAR_11->x + VAR_11->width
    && VAR_9 < VAR_11->y + VAR_11->height) {
   FUNC_1(VAR_7, VAR_11);
   return;
  }
 }

 if (VAR_7->details.visible &&
   VAR_7->details.total_lines != VAR_7->details.visible_lines) {
  struct swaynag_button VAR_12 = VAR_7->details.button_up;
  if (VAR_8 >= VAR_12.x
    && VAR_9 >= VAR_12.y
    && VAR_8 < VAR_12.x + VAR_12.width
    && VAR_9 < VAR_12.y + VAR_12.height
    && VAR_7->details.offset > 0) {
   VAR_7->details.offset--;
   FUNC_0(VAR_7);
   return;
  }

  struct swaynag_button VAR_13 = VAR_7->details.button_down;
  int VAR_14 = VAR_7->details.total_lines;
  VAR_14 -= VAR_7->details.visible_lines;
  if (VAR_8 >= VAR_13.x
    && VAR_9 >= VAR_13.y
    && VAR_8 < VAR_13.x + VAR_13.width
    && VAR_9 < VAR_13.y + VAR_13.height
    && VAR_7->details.offset < VAR_14) {
   VAR_7->details.offset++;
   FUNC_0(VAR_7);
   return;
  }
 }
}

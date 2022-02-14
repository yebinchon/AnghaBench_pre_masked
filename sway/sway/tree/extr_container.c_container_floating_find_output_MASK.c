
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlr_box {int dummy; } ;
struct sway_output {int dummy; } ;
struct sway_container {int x; int width; int y; int height; } ;
struct TYPE_4__ {TYPE_1__* outputs; } ;
struct TYPE_3__ {int length; struct sway_output** items; } ;


 double VAR_0 ;
 int FUNC_0 (struct sway_output*,struct wlr_box*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (struct wlr_box*,double,double,double*,double*) ;

struct sway_output *FUNC_2(struct sway_container *VAR_2) {
 double VAR_3 = VAR_2->x + VAR_2->width / 2;
 double VAR_4 = VAR_2->y + VAR_2->height / 2;
 struct sway_output *VAR_5 = ((void*)0);
 double VAR_6 = VAR_0;
 for (int VAR_7 = 0; VAR_7 < VAR_1->outputs->length; ++VAR_7) {
  struct sway_output *VAR_8 = VAR_1->outputs->items[VAR_7];
  struct wlr_box VAR_9;
  double VAR_10, VAR_11;
  FUNC_0(VAR_8, &VAR_9);
  FUNC_1(&VAR_9, VAR_3, VAR_4,
    &VAR_10, &VAR_11);
  if (VAR_3 == VAR_10 && VAR_4 == VAR_11) {

   return VAR_8;
  }
  double VAR_12 = VAR_10 - VAR_3;
  double VAR_13 = VAR_11 - VAR_4;
  double VAR_14 = VAR_12 * VAR_12 + VAR_13 * VAR_13;
  if (VAR_14 < VAR_6) {
   VAR_5 = VAR_8;
   VAR_6 = VAR_14;
  }
 }
 return VAR_5;
}

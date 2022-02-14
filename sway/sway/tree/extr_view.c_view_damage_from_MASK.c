
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_view {int dummy; } ;
struct sway_output {int dummy; } ;
struct TYPE_4__ {TYPE_1__* outputs; } ;
struct TYPE_3__ {int length; struct sway_output** items; } ;


 int FUNC_0 (struct sway_output*,struct sway_view*) ;
 TYPE_2__* VAR_0 ;

void FUNC_1(struct sway_view *VAR_1) {
 for (int VAR_2 = 0; VAR_2 < VAR_0->outputs->length; ++VAR_2) {
  struct sway_output *VAR_3 = VAR_0->outputs->items[VAR_2];
  FUNC_0(VAR_3, VAR_1);
 }
}

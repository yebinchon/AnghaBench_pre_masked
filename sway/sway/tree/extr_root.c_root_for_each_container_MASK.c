
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sway_workspace {int dummy; } ;
struct sway_output {int dummy; } ;
typedef struct sway_container sway_container ;
struct TYPE_10__ {TYPE_4__* noop_output; TYPE_2__* scratchpad; TYPE_1__* outputs; } ;
struct TYPE_9__ {TYPE_3__* workspaces; } ;
struct TYPE_8__ {int length; struct sway_workspace** items; } ;
struct TYPE_7__ {int length; struct sway_container** items; } ;
struct TYPE_6__ {int length; struct sway_output** items; } ;


 int FUNC_0 (struct sway_container*,void (*) (struct sway_container*,void*),void*) ;
 scalar_t__ FUNC_1 (struct sway_container*) ;
 int FUNC_2 (struct sway_output*,void (*) (struct sway_container*,void*),void*) ;
 TYPE_5__* VAR_0 ;
 int FUNC_3 (struct sway_workspace*,void (*) (struct sway_container*,void*),void*) ;

void FUNC_4(void (*VAR_1)(struct sway_container *VAR_2, void *VAR_3),
  void *VAR_4) {
 for (int VAR_5 = 0; VAR_5 < VAR_0->outputs->length; ++VAR_5) {
  struct sway_output *VAR_6 = VAR_0->outputs->items[VAR_5];
  FUNC_2(VAR_6, VAR_1, VAR_4);
 }


 for (int VAR_7 = 0; VAR_7 < VAR_0->scratchpad->length; ++VAR_7) {
  struct sway_container *VAR_8 = VAR_0->scratchpad->items[VAR_7];
  if (FUNC_1(VAR_8)) {
   VAR_1(VAR_8, VAR_4);
   FUNC_0(VAR_8, VAR_1, VAR_4);
  }
 }


 for (int VAR_9 = 0; VAR_9 < VAR_0->noop_output->workspaces->length; ++VAR_9) {
  struct sway_workspace *VAR_10 = VAR_0->noop_output->workspaces->items[VAR_9];
  FUNC_3(VAR_10, VAR_1, VAR_4);
 }
}

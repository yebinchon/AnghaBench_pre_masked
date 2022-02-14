
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
struct sway_container {int dummy; } ;
struct TYPE_10__ {TYPE_4__* noop_output; TYPE_2__* scratchpad; TYPE_1__* outputs; } ;
struct TYPE_9__ {TYPE_3__* workspaces; } ;
struct TYPE_8__ {int length; struct sway_workspace** items; } ;
struct TYPE_7__ {int length; struct sway_container** items; } ;
struct TYPE_6__ {int length; struct sway_output** items; } ;


 struct sway_container* FUNC_0 (struct sway_container*,int (*) (struct sway_container*,void*),void*) ;
 scalar_t__ FUNC_1 (struct sway_container*) ;
 struct sway_container* FUNC_2 (struct sway_output*,int (*) (struct sway_container*,void*),void*) ;
 TYPE_5__* VAR_0 ;
 struct sway_container* FUNC_3 (struct sway_workspace*,int (*) (struct sway_container*,void*),void*) ;

struct sway_container *FUNC_4(
  bool (*VAR_1)(struct sway_container *VAR_2, void *VAR_3), void *VAR_4) {
 struct sway_container *VAR_5 = ((void*)0);
 for (int VAR_6 = 0; VAR_6 < VAR_0->outputs->length; ++VAR_6) {
  struct sway_output *VAR_7 = VAR_0->outputs->items[VAR_6];
  if ((VAR_5 = FUNC_2(VAR_7, VAR_1, VAR_4))) {
   return VAR_5;
  }
 }


 for (int VAR_8 = 0; VAR_8 < VAR_0->scratchpad->length; ++VAR_8) {
  struct sway_container *VAR_9 = VAR_0->scratchpad->items[VAR_8];
  if (FUNC_1(VAR_9)) {
   if (VAR_1(VAR_9, VAR_4)) {
    return VAR_9;
   }
   if ((VAR_5 = FUNC_0(VAR_9, VAR_1, VAR_4))) {
    return VAR_5;
   }
  }
 }


 for (int VAR_10 = 0; VAR_10 < VAR_0->noop_output->workspaces->length; ++VAR_10) {
  struct sway_workspace *VAR_11 = VAR_0->noop_output->workspaces->items[VAR_10];
  if ((VAR_5 = FUNC_3(VAR_11, VAR_1, VAR_4))) {
   return VAR_5;
  }
 }

 return ((void*)0);
}

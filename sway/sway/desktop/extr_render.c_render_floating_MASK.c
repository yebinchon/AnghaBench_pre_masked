
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {TYPE_4__* floating; } ;
struct sway_workspace {TYPE_5__ current; } ;
struct TYPE_9__ {TYPE_2__* workspaces; } ;
struct sway_output {TYPE_3__ current; } ;
struct sway_container {scalar_t__ fullscreen_mode; } ;
typedef int pixman_region32_t ;
struct TYPE_12__ {TYPE_1__* outputs; } ;
struct TYPE_10__ {int length; struct sway_container** items; } ;
struct TYPE_8__ {int length; struct sway_workspace** items; } ;
struct TYPE_7__ {int length; struct sway_output** items; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sway_output*,int *,struct sway_container*) ;
 TYPE_6__* VAR_1 ;
 int FUNC_1 (struct sway_workspace*) ;

__attribute__((used)) static void FUNC_2(struct sway_output *VAR_2,
  pixman_region32_t *VAR_3) {
 for (int VAR_4 = 0; VAR_4 < VAR_1->outputs->length; ++VAR_4) {
  struct sway_output *VAR_5 = VAR_1->outputs->items[VAR_4];
  for (int VAR_6 = 0; VAR_6 < VAR_5->current.workspaces->length; ++VAR_6) {
   struct sway_workspace *VAR_7 = VAR_5->current.workspaces->items[VAR_6];
   if (!FUNC_1(VAR_7)) {
    continue;
   }
   for (int VAR_8 = 0; VAR_8 < VAR_7->current.floating->length; ++VAR_8) {
    struct sway_container *VAR_9 = VAR_7->current.floating->items[VAR_8];
    if (VAR_9->fullscreen_mode != VAR_0) {
     continue;
    }
    FUNC_0(VAR_2, VAR_3, VAR_9);
   }
  }
 }
}

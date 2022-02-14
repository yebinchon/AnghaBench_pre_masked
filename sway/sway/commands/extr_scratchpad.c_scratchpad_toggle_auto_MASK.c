
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sway_workspace {TYPE_1__* floating; } ;
struct sway_seat {int dummy; } ;
struct sway_container {int title; struct sway_container* parent; scalar_t__ scratchpad; } ;
struct TYPE_6__ {TYPE_2__* scratchpad; } ;
struct TYPE_5__ {int length; struct sway_container** items; } ;
struct TYPE_4__ {int length; struct sway_container** items; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sway_container*) ;
 struct sway_seat* FUNC_1 () ;
 int FUNC_2 (struct sway_container*,char*) ;
 TYPE_3__* VAR_1 ;
 int FUNC_3 (struct sway_container*) ;
 int FUNC_4 (struct sway_container*) ;
 struct sway_container* FUNC_5 (struct sway_seat*) ;
 struct sway_workspace* FUNC_6 (struct sway_seat*) ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (int ,char*,...) ;

__attribute__((used)) static void FUNC_9(void) {
 struct sway_seat *VAR_2 = FUNC_1();
 struct sway_container *VAR_3 = FUNC_5(VAR_2);
 struct sway_workspace *VAR_4 = FUNC_6(VAR_2);
 if (!VAR_4) {
  FUNC_8(VAR_0,
    "No focused workspace to toggle scratchpad windows on");
  return;
 }



 if (VAR_3 && FUNC_0(VAR_3)) {
  while (VAR_3->parent) {
   VAR_3 = VAR_3->parent;
  }
 }



 if (VAR_3 && VAR_3->scratchpad) {
  FUNC_8(VAR_0, "Focus is a scratchpad window - hiding %s",
    VAR_3->title);
  FUNC_3(VAR_3);
  return;
 }



 for (int VAR_5 = 0; VAR_5 < VAR_4->floating->length; ++VAR_5) {
  struct sway_container *VAR_6 = VAR_4->floating->items[VAR_5];
  if (VAR_6->scratchpad && VAR_3 != VAR_6) {
   FUNC_8(VAR_0,
     "Focusing other scratchpad window (%s) in this workspace",
     VAR_6->title);
   FUNC_4(VAR_6);
   return;
  }
 }



 for (int VAR_7 = 0; VAR_7 < VAR_1->scratchpad->length; ++VAR_7) {
  struct sway_container *VAR_8 = VAR_1->scratchpad->items[VAR_7];
  if (VAR_8->parent) {
   FUNC_8(VAR_0,
     "Moving a visible scratchpad window (%s) to this workspace",
     VAR_8->title);
   FUNC_4(VAR_8);
   FUNC_2(VAR_8, "move");
   return;
  }
 }


 if (!FUNC_7(VAR_1->scratchpad->length, "Scratchpad is empty")) {
  return;
 }
 struct sway_container *VAR_9 = VAR_1->scratchpad->items[0];
 FUNC_8(VAR_0, "Showing %s from list", VAR_9->title);
 FUNC_4(VAR_9);
 FUNC_2(VAR_9, "move");
}

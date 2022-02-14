
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sway_workspace {TYPE_3__* floating; } ;
struct sway_output {TYPE_2__* workspaces; } ;
struct TYPE_8__ {struct sway_output* noop_output; TYPE_1__* outputs; } ;
struct TYPE_7__ {scalar_t__ length; } ;
struct TYPE_6__ {struct sway_workspace** items; scalar_t__ length; } ;
struct TYPE_5__ {int length; struct sway_output** items; } ;


 int FUNC_0 (struct sway_workspace*,struct sway_output*) ;
 int FUNC_1 (int *,struct sway_workspace*,char*) ;
 int FUNC_2 (struct sway_output*,struct sway_workspace*) ;
 struct sway_workspace* FUNC_3 (struct sway_output*) ;
 int FUNC_4 (struct sway_output*) ;
 TYPE_4__* VAR_0 ;
 int FUNC_5 (struct sway_workspace*) ;
 int FUNC_6 (struct sway_workspace*) ;
 int FUNC_7 (struct sway_workspace*) ;
 scalar_t__ FUNC_8 (struct sway_workspace*) ;
 int FUNC_9 (struct sway_workspace*,struct sway_output*) ;
 struct sway_output* FUNC_10 (struct sway_workspace*,struct sway_output*) ;

__attribute__((used)) static void FUNC_11(struct sway_output *VAR_1) {
 if (!VAR_1->workspaces->length) {
  return;
 }
 struct sway_output *VAR_2 = ((void*)0);
 if (VAR_0->outputs->length > 1) {
  VAR_2 = VAR_0->outputs->items[0];
  if (VAR_2 == VAR_1) {
   VAR_2 = VAR_0->outputs->items[1];
  }
 }

 while (VAR_1->workspaces->length) {
  struct sway_workspace *VAR_3 = VAR_1->workspaces->items[0];

  FUNC_7(VAR_3);

  struct sway_output *VAR_4 =
   FUNC_10(VAR_3, VAR_1);
  if (!VAR_4) {
   VAR_4 = VAR_2;
  }
  if (!VAR_4) {
   VAR_4 = VAR_0->noop_output;
  }

  if (FUNC_8(VAR_3)) {

   if (VAR_3->floating->length) {
    FUNC_0(VAR_3, VAR_4);
   }
   FUNC_5(VAR_3);
   continue;
  }

  struct sway_workspace *VAR_5 =
   FUNC_3(VAR_4);

  FUNC_9(VAR_3, VAR_4);
  FUNC_2(VAR_4, VAR_3);
  FUNC_4(VAR_4);
  FUNC_1(((void*)0), VAR_3, "move");



  if (VAR_5) {
   FUNC_6(VAR_5);
  }
 }
}

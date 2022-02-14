
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sway_workspace {TYPE_6__* floating; } ;
struct sway_output {scalar_t__ width; scalar_t__ height; scalar_t__ lx; scalar_t__ ly; TYPE_3__* wlr_output; TYPE_2__* workspaces; } ;
struct sway_container {scalar_t__ width; scalar_t__ height; scalar_t__ x; scalar_t__ y; } ;
struct TYPE_14__ {TYPE_5__* noop_output; TYPE_1__* outputs; } ;
struct TYPE_13__ {int length; struct sway_container** items; } ;
struct TYPE_12__ {TYPE_4__* workspaces; } ;
struct TYPE_11__ {struct sway_workspace** items; scalar_t__ length; } ;
struct TYPE_10__ {int name; } ;
struct TYPE_9__ {int length; struct sway_workspace** items; } ;
struct TYPE_8__ {int length; struct sway_output** items; } ;


 int FUNC_0 (struct sway_container*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,struct sway_workspace*,char*) ;
 int FUNC_3 (struct sway_output*,struct sway_workspace*) ;
 int FUNC_4 (struct sway_output*) ;
 TYPE_7__* VAR_0 ;
 struct sway_workspace* FUNC_5 (struct sway_output*,char*) ;
 int FUNC_6 (struct sway_workspace*) ;
 char* FUNC_7 (int ) ;
 struct sway_output* FUNC_8 (struct sway_workspace*,int *) ;

__attribute__((used)) static void FUNC_9(struct sway_output *VAR_1) {

 for (int VAR_2 = 0; VAR_2 < VAR_0->outputs->length; VAR_2++) {
  struct sway_output *VAR_3 = VAR_0->outputs->items[VAR_2];
  if (VAR_3 == VAR_1) {
   continue;
  }

  for (int VAR_4 = 0; VAR_4 < VAR_3->workspaces->length; VAR_4++) {
   struct sway_workspace *VAR_5 = VAR_3->workspaces->items[VAR_4];
   struct sway_output *VAR_6 =
    FUNC_8(VAR_5, ((void*)0));
   if (VAR_6 == VAR_1) {
    FUNC_6(VAR_5);
    FUNC_3(VAR_1, VAR_5);
    FUNC_2(((void*)0), VAR_5, "move");
    VAR_4--;
   }
  }

  if (VAR_3->workspaces->length == 0) {
   char *VAR_7 = FUNC_7(VAR_3->wlr_output->name);
   struct sway_workspace *VAR_8 = FUNC_5(VAR_3, VAR_7);
   FUNC_1(VAR_7);
   FUNC_2(((void*)0), VAR_8, "init");
  }
 }


 while (VAR_0->noop_output->workspaces->length) {
  struct sway_workspace *VAR_9 = VAR_0->noop_output->workspaces->items[0];
  FUNC_6(VAR_9);
  FUNC_3(VAR_1, VAR_9);
  for (int VAR_10 = 0; VAR_10 < VAR_9->floating->length; VAR_10++) {
   struct sway_container *VAR_11 = VAR_9->floating->items[VAR_10];
   if (VAR_11->width == 0 || VAR_11->height == 0 ||
     VAR_11->width > VAR_1->width ||
     VAR_11->height > VAR_1->height ||
     VAR_11->x > VAR_1->lx + VAR_1->width ||
     VAR_11->y > VAR_1->ly + VAR_1->height ||
     VAR_11->x + VAR_11->width < VAR_1->lx ||
     VAR_11->y + VAR_11->height < VAR_1->ly) {
    FUNC_0(VAR_11);
   }
  }

  FUNC_2(((void*)0), VAR_9, "move");
 }

 FUNC_4(VAR_1);
}

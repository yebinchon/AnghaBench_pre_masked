
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sway_workspace {int node; } ;
struct sway_container {double x; double y; scalar_t__ view; struct sway_workspace* workspace; scalar_t__ fullscreen_mode; } ;
struct cmd_results {int dummy; } ;
typedef enum wlr_direction { ____Placeholder_wlr_direction } wlr_direction ;
struct TYPE_4__ {int seat; struct sway_container* container; } ;
struct TYPE_6__ {TYPE_1__ handler_context; } ;
struct TYPE_5__ {scalar_t__ fullscreen_global; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 () ;
 int FUNC_1 (struct sway_workspace*) ;
 struct cmd_results* FUNC_2 (int ,char*) ;
 TYPE_3__* VAR_2 ;
 int FUNC_3 (struct sway_container*) ;
 int FUNC_4 (struct sway_container*,double,double) ;
 scalar_t__ FUNC_5 (struct sway_container*) ;
 int FUNC_6 (struct sway_container*,int) ;
 int FUNC_7 (struct sway_container*,char*) ;
 int FUNC_8 (struct sway_workspace*,struct sway_workspace*,char*) ;
 TYPE_2__* VAR_3 ;
 int FUNC_9 (int ,struct sway_container*) ;
 int FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 scalar_t__ FUNC_12 (char*,char**,int) ;
 int FUNC_13 (struct sway_workspace*) ;

__attribute__((used)) static struct cmd_results *FUNC_14(
  enum wlr_direction VAR_4, int VAR_5, char **VAR_6) {
 int VAR_7 = 10;
 if (VAR_5) {
  char *VAR_8;
  VAR_7 = (int)FUNC_12(VAR_6[0], &VAR_8, 10);
  if (*VAR_8 != '\0' && FUNC_11(VAR_8, "px") != 0) {
   return FUNC_2(VAR_0, "Invalid distance specified");
  }
 }

 struct sway_container *VAR_9 = VAR_2->handler_context.container;
 if (!VAR_9) {
  return FUNC_2(VAR_0,
    "Cannot move workspaces in a direction");
 }
 if (FUNC_5(VAR_9)) {
  if (VAR_9->fullscreen_mode) {
   return FUNC_2(VAR_0,
     "Cannot move fullscreen floating container");
  }
  double VAR_10 = VAR_9->x;
  double VAR_11 = VAR_9->y;
  switch (VAR_4) {
  case 130:
   VAR_10 -= VAR_7;
   break;
  case 129:
   VAR_10 += VAR_7;
   break;
  case 128:
   VAR_11 -= VAR_7;
   break;
  case 131:
   VAR_11 += VAR_7;
   break;
  }
  FUNC_4(VAR_9, VAR_10, VAR_11);
  return FUNC_2(VAR_1, ((void*)0));
 }
 struct sway_workspace *VAR_12 = VAR_9->workspace;

 if (!FUNC_6(VAR_9, VAR_4)) {

  return FUNC_2(VAR_1, ((void*)0));
 }

 struct sway_workspace *VAR_13 = VAR_9->workspace;

 if (VAR_3->fullscreen_global) {
  FUNC_0();
 } else {
  FUNC_1(VAR_12);
  if (VAR_13 != VAR_12) {
   FUNC_1(VAR_13);
  }
 }

 if (VAR_9->view) {
  FUNC_7(VAR_9, "move");
 }


 FUNC_10(VAR_2->handler_context.seat, &VAR_13->node);
 FUNC_9(VAR_2->handler_context.seat, VAR_9);

 if (VAR_12 != VAR_13) {
  FUNC_8(VAR_12, VAR_13, "focus");
  FUNC_13(VAR_12);
  FUNC_13(VAR_13);
 }
 FUNC_3(VAR_9);

 return FUNC_2(VAR_1, ((void*)0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_view {int xdg_decoration; } ;
struct sway_container {int border_thickness; struct sway_view* view; } ;
struct cmd_results {int dummy; } ;
struct TYPE_3__ {struct sway_container* container; } ;
struct TYPE_4__ {TYPE_1__ handler_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sway_container*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct sway_container*) ;
 struct cmd_results* FUNC_3 (int,char*,int ,int) ;
 struct cmd_results* FUNC_4 (int ,char*) ;
 TYPE_2__* VAR_7 ;
 scalar_t__ FUNC_5 (struct sway_container*) ;
 int FUNC_6 (struct sway_container*) ;
 int FUNC_7 (struct sway_container*,int ) ;
 scalar_t__ FUNC_8 (char*,char*) ;

struct cmd_results *FUNC_9(int VAR_8, char **VAR_9) {
 struct cmd_results *VAR_10 = ((void*)0);
 if ((VAR_10 = FUNC_3(VAR_8, "border", VAR_6, 1))) {
  return VAR_10;
 }

 struct sway_container *VAR_11 = VAR_7->handler_context.container;
 if (!VAR_11 || !VAR_11->view) {
  return FUNC_4(VAR_4, "Only views can have borders");
 }
 struct sway_view *VAR_12 = VAR_11->view;

 if (FUNC_8(VAR_9[0], "none") == 0) {
  FUNC_7(VAR_11, VAR_1);
 } else if (FUNC_8(VAR_9[0], "normal") == 0) {
  FUNC_7(VAR_11, VAR_2);
 } else if (FUNC_8(VAR_9[0], "pixel") == 0) {
  FUNC_7(VAR_11, VAR_3);
 } else if (FUNC_8(VAR_9[0], "csd") == 0) {
  if (!VAR_12->xdg_decoration) {
   return FUNC_4(VAR_4,
     "This window doesn't support client side decorations");
  }
  FUNC_7(VAR_11, VAR_0);
 } else if (FUNC_8(VAR_9[0], "toggle") == 0) {
  FUNC_2(VAR_11);
 } else {
  return FUNC_4(VAR_4,
    "Expected 'border <none|normal|pixel|csd|toggle>' "
    "or 'border pixel <px>'");
 }
 if (VAR_8 == 2) {
  VAR_11->border_thickness = FUNC_1(VAR_9[1]);
 }

 if (FUNC_5(VAR_11)) {
  FUNC_6(VAR_11);
 }

 FUNC_0(VAR_11);

 return FUNC_4(VAR_5, ((void*)0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sway_container {int dummy; } ;
struct cmd_results {int dummy; } ;
struct TYPE_6__ {struct sway_container* container; } ;
struct TYPE_8__ {TYPE_2__ handler_context; } ;
struct TYPE_7__ {TYPE_1__* outputs; } ;
struct TYPE_5__ {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*) ;
 TYPE_4__* VAR_6 ;
 scalar_t__ FUNC_2 (struct sway_container*) ;
 struct cmd_results* FUNC_3 (scalar_t__) ;
 TYPE_3__* VAR_7 ;
 scalar_t__ FUNC_4 (char*,char*) ;

struct cmd_results *FUNC_5(int VAR_8, char **VAR_9) {
 struct cmd_results *VAR_10 = ((void*)0);
 if ((VAR_10 = FUNC_0(VAR_8, "split", VAR_3, 1))) {
  return VAR_10;
 }
 if (!VAR_7->outputs->length) {
  return FUNC_1(VAR_1,
    "Can't run this command while there's no outputs connected.");
 }
 if (FUNC_4(VAR_9[0], "v") == 0 || FUNC_4(VAR_9[0], "vertical") == 0) {
  return FUNC_3(VAR_5);
 } else if (FUNC_4(VAR_9[0], "h") == 0 ||
   FUNC_4(VAR_9[0], "horizontal") == 0) {
  return FUNC_3(VAR_4);
 } else if (FUNC_4(VAR_9[0], "t") == 0 ||
   FUNC_4(VAR_9[0], "toggle") == 0) {
  struct sway_container *VAR_11 = VAR_6->handler_context.container;

  if (VAR_11 && FUNC_2(VAR_11) == VAR_5) {
   return FUNC_3(VAR_4);
  } else {
   return FUNC_3(VAR_5);
  }
 } else {
  return FUNC_1(VAR_0,
   "Invalid split command (expected either horizontal or vertical).");
 }
 return FUNC_1(VAR_2, ((void*)0));
}

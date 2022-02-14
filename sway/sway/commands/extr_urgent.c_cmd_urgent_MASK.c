
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_view {int allow_request_urgent; } ;
struct sway_container {struct sway_view* view; } ;
struct cmd_results {int dummy; } ;
struct TYPE_3__ {struct sway_container* container; } ;
struct TYPE_4__ {TYPE_1__ handler_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*) ;
 TYPE_2__* VAR_4 ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (struct sway_view*) ;
 int FUNC_5 (struct sway_view*,int ) ;

struct cmd_results *FUNC_6(int VAR_5, char **VAR_6) {
 struct cmd_results *VAR_7 = ((void*)0);
 if ((VAR_7 = FUNC_0(VAR_5, "urgent", VAR_3, 1))) {
  return VAR_7;
 }
 struct sway_container *VAR_8 = VAR_4->handler_context.container;
 if (!VAR_8) {
  return FUNC_1(VAR_0, "No current container");
 }
 if (!VAR_8->view) {
  return FUNC_1(VAR_1, "Only views can be urgent");
 }
 struct sway_view *VAR_9 = VAR_8->view;

 if (FUNC_3(VAR_6[0], "allow") == 0) {
  VAR_9->allow_request_urgent = 1;
 } else if (FUNC_3(VAR_6[0], "deny") == 0) {
  VAR_9->allow_request_urgent = 0;
 } else {
  FUNC_5(VAR_9, FUNC_2(VAR_6[0], FUNC_4(VAR_9)));
 }

 return FUNC_1(VAR_2, ((void*)0));
}

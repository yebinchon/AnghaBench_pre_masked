
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_workspace {int output; } ;
struct sway_container {struct sway_workspace* workspace; scalar_t__ is_sticky; } ;
struct cmd_results {int dummy; } ;
struct TYPE_3__ {struct sway_container* container; } ;
struct TYPE_4__ {TYPE_1__ handler_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sway_workspace*) ;
 struct cmd_results* FUNC_1 (int,char*,int ,int) ;
 struct cmd_results* FUNC_2 (int ,char*) ;
 TYPE_2__* VAR_3 ;
 int FUNC_3 (struct sway_container*) ;
 int FUNC_4 (struct sway_container*) ;
 scalar_t__ FUNC_5 (struct sway_container*) ;
 int FUNC_6 (struct sway_container*) ;
 struct sway_workspace* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (char*,scalar_t__) ;
 int FUNC_9 (struct sway_workspace*,char*) ;
 int FUNC_10 (struct sway_workspace*,struct sway_container*) ;
 int FUNC_11 (struct sway_workspace*) ;

struct cmd_results *FUNC_12(int VAR_4, char **VAR_5) {
 struct cmd_results *VAR_6 = ((void*)0);
 if ((VAR_6 = FUNC_1(VAR_4, "sticky", VAR_2, 1))) {
  return VAR_6;
 }
 struct sway_container *VAR_7 = VAR_3->handler_context.container;

 if (VAR_7 == ((void*)0)) {
  return FUNC_2(VAR_0, "No current container");
 };

 VAR_7->is_sticky = FUNC_8(VAR_5[0], VAR_7->is_sticky);

 if (VAR_7->is_sticky && FUNC_5(VAR_7) &&
   !FUNC_6(VAR_7)) {

  struct sway_workspace *VAR_8 =
   FUNC_7(VAR_7->workspace->output);
  if (!FUNC_9(VAR_8,
     "Expected output to have a workspace")) {
   return FUNC_2(VAR_0,
     "Expected output to have a workspace");
  }
  if (VAR_7->workspace != VAR_8) {
   struct sway_workspace *VAR_9 = VAR_7->workspace;
   FUNC_3(VAR_7);
   FUNC_10(VAR_8, VAR_7);
   FUNC_4(VAR_7);
   FUNC_0(VAR_8);
   FUNC_11(VAR_9);
  }
 }

 return FUNC_2(VAR_1, ((void*)0));
}

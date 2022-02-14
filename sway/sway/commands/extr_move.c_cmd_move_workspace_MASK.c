
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_workspace {int width; int x; int height; int y; struct sway_output* output; } ;
struct sway_output {int dummy; } ;
struct cmd_results {int dummy; } ;
struct TYPE_3__ {struct sway_workspace* workspace; } ;
struct TYPE_4__ {TYPE_1__ handler_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sway_output*) ;
 struct cmd_results* FUNC_1 (int,char*,int ,int) ;
 struct cmd_results* FUNC_2 (int ,char*,...) ;
 TYPE_2__* VAR_4 ;
 struct sway_output* FUNC_3 (char*,struct sway_output*,int,int) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (struct sway_workspace*,struct sway_output*) ;

__attribute__((used)) static struct cmd_results *FUNC_6(int VAR_5, char **VAR_6) {
 struct cmd_results *VAR_7 = ((void*)0);
 if ((VAR_7 = FUNC_1(VAR_5, "move workspace", VAR_3, 1))) {
  return VAR_7;
 }

 if (FUNC_4(VAR_6[0], "output") == 0) {
  --VAR_5; ++VAR_6;
 }

 if (!VAR_5) {
  return FUNC_2(VAR_1,
    "Expected 'move workspace to [output] <output>'");
 }

 struct sway_workspace *VAR_8 = VAR_4->handler_context.workspace;
 if (!VAR_8) {
  return FUNC_2(VAR_0, "No workspace to move");
 }

 struct sway_output *VAR_9 = VAR_8->output;
 int VAR_10 = VAR_8->width / 2 + VAR_8->x,
  VAR_11 = VAR_8->height / 2 + VAR_8->y;
 struct sway_output *VAR_12 = FUNC_3(VAR_6[0],
   VAR_9, VAR_10, VAR_11);
 if (!VAR_12) {
  return FUNC_2(VAR_0,
   "Can't find output with name/direction '%s'", VAR_6[0]);
 }
 FUNC_5(VAR_8, VAR_12);

 FUNC_0(VAR_9);
 FUNC_0(VAR_12);

 return FUNC_2(VAR_2, ((void*)0));
}

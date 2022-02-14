
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sway_workspace {int dummy; } ;
struct sway_output {int dummy; } ;
struct cmd_results {int dummy; } ;
struct TYPE_6__ {int titlebar_v_padding; int titlebar_border_thickness; } ;
struct TYPE_5__ {TYPE_1__* outputs; } ;
struct TYPE_4__ {int length; struct sway_output** items; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sway_workspace*) ;
 struct cmd_results* FUNC_1 (int,char*,int ,int) ;
 struct cmd_results* FUNC_2 (int ,char*) ;
 TYPE_3__* VAR_3 ;
 int FUNC_3 (struct sway_output*) ;
 struct sway_workspace* FUNC_4 (struct sway_output*) ;
 TYPE_2__* VAR_4 ;
 int FUNC_5 (char*,char**,int) ;
 int FUNC_6 (struct sway_workspace*,char*) ;

struct cmd_results *FUNC_7(int VAR_5, char **VAR_6) {
 struct cmd_results *VAR_7 = ((void*)0);
 if ((VAR_7 = FUNC_1(VAR_5, "titlebar_border_thickness", VAR_2, 1))) {
  return VAR_7;
 }

 char *VAR_8;
 int VAR_9 = FUNC_5(VAR_6[0], &VAR_8, 10);
 if (*VAR_8 != '\0' || VAR_9 < 0 || VAR_9 > VAR_3->titlebar_v_padding) {
  return FUNC_2(VAR_0, "Invalid size specified");
 }

 VAR_3->titlebar_border_thickness = VAR_9;

 for (int VAR_10 = 0; VAR_10 < VAR_4->outputs->length; ++VAR_10) {
  struct sway_output *VAR_11 = VAR_4->outputs->items[VAR_10];
  struct sway_workspace *VAR_12 = FUNC_4(VAR_11);
  if (!FUNC_6(VAR_12, "Expected output to have a workspace")) {
   return FUNC_2(VAR_0,
     "Expected output to have a workspace");
  }
  FUNC_0(VAR_12);
  FUNC_3(VAR_11);
 }

 return FUNC_2(VAR_1, ((void*)0));
}

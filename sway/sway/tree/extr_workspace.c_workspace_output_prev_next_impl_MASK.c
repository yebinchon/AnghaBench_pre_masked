
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_workspace {struct sway_output* output; } ;
struct sway_seat {int dummy; } ;
struct sway_output {TYPE_2__* workspaces; TYPE_1__* wlr_output; } ;
struct TYPE_4__ {int length; struct sway_workspace** items; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 struct sway_seat* FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,struct sway_workspace*) ;
 struct sway_workspace* FUNC_3 (struct sway_seat*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct sway_output*,char*) ;
 int FUNC_6 (struct sway_workspace*) ;
 char* FUNC_7 (int ) ;
 size_t FUNC_8 (int,int) ;

__attribute__((used)) static struct sway_workspace *FUNC_9(
  struct sway_output *VAR_1, int VAR_2, bool VAR_3) {
 struct sway_seat *VAR_4 = FUNC_1();
 struct sway_workspace *VAR_5 = FUNC_3(VAR_4);
 if (!VAR_5) {
  FUNC_4(VAR_0,
    "No focused workspace to base prev/next on output off of");
  return ((void*)0);
 }

 int VAR_6 = FUNC_2(VAR_1->workspaces, VAR_5);
 if (!FUNC_6(VAR_5) && VAR_3 &&
   (VAR_6 + VAR_2 < 0 || VAR_6 + VAR_2 == VAR_1->workspaces->length)) {
  struct sway_output *VAR_7 = VAR_5->output;
  char *VAR_8 = FUNC_7(VAR_7->wlr_output->name);
  FUNC_5(VAR_7, VAR_8);
  FUNC_0(VAR_8);
 }
 size_t VAR_9 = FUNC_8(VAR_6 + VAR_2, VAR_1->workspaces->length);
 return VAR_1->workspaces->items[VAR_9];
}

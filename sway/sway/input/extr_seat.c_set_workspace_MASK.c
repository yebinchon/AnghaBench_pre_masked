
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_workspace {int name; } ;
struct sway_seat {struct sway_workspace* workspace; int prev_workspace_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sway_workspace*,struct sway_workspace*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(struct sway_seat *VAR_1,
  struct sway_workspace *VAR_2) {
 if (VAR_1->workspace == VAR_2) {
  return;
 }

 if (VAR_1->workspace) {
  FUNC_0(VAR_1->prev_workspace_name);
  VAR_1->prev_workspace_name = FUNC_2(VAR_1->workspace->name);
  if (!VAR_1->prev_workspace_name) {
   FUNC_3(VAR_0, "Unable to allocate previous workspace name");
  }
 }

 FUNC_1(VAR_1->workspace, VAR_2, "focus");
 VAR_1->workspace = VAR_2;
}

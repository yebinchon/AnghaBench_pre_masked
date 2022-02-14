
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swaybar_output {struct swaybar_output* identifier; struct swaybar_output* name; int link; int workspaces; int hotspots; int * buffers; int output; int xdg_output; int * input_region; int * surface; int * layer_surface; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct swaybar_output*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,struct swaybar_output*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct swaybar_output *VAR_1) {
 if (!VAR_1) {
  return;
 }
 FUNC_4(VAR_0, "Removing output %s", VAR_1->name);
 if (VAR_1->layer_surface != ((void*)0)) {
  FUNC_9(VAR_1->layer_surface);
 }
 if (VAR_1->surface != ((void*)0)) {
  FUNC_8(VAR_1->surface);
 }
 if (VAR_1->input_region != ((void*)0)) {
  FUNC_7(VAR_1->input_region);
 }
 FUNC_10(VAR_1->xdg_output);
 FUNC_6(VAR_1->output);
 FUNC_0(&VAR_1->buffers[0]);
 FUNC_0(&VAR_1->buffers[1]);
 FUNC_2(&VAR_1->hotspots);
 FUNC_3(&VAR_1->workspaces);
 FUNC_5(&VAR_1->link);
 FUNC_1(VAR_1->name);
 FUNC_1(VAR_1->identifier);
 FUNC_1(VAR_1);
}

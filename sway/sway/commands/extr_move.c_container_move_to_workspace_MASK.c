
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_workspace {struct sway_output* output; } ;
struct sway_output {int dummy; } ;
struct sway_container {scalar_t__ view; scalar_t__ height_fraction; scalar_t__ width_fraction; scalar_t__ height; scalar_t__ width; int fullscreen_mode; struct sway_workspace* workspace; } ;


 int FUNC_0 (struct sway_container*) ;
 int FUNC_1 (struct sway_container*) ;
 int FUNC_2 (struct sway_container*) ;
 scalar_t__ FUNC_3 (struct sway_container*) ;
 int FUNC_4 (struct sway_container*) ;
 int FUNC_5 (struct sway_container*,char*) ;
 int FUNC_6 (struct sway_workspace*,struct sway_container*) ;
 int FUNC_7 (struct sway_workspace*,struct sway_container*) ;
 int FUNC_8 (struct sway_workspace*) ;
 int FUNC_9 (struct sway_workspace*) ;

__attribute__((used)) static void FUNC_10(struct sway_container *VAR_0,
  struct sway_workspace *VAR_1) {
 if (VAR_0->workspace == VAR_1) {
  return;
 }
 struct sway_workspace *VAR_2 = VAR_0->workspace;
 if (FUNC_3(VAR_0)) {
  struct sway_output *VAR_3 = VAR_0->workspace->output;
  FUNC_0(VAR_0);
  FUNC_6(VAR_1, VAR_0);
  FUNC_2(VAR_0);

  if (VAR_3 != VAR_1->output && !VAR_0->fullscreen_mode) {
   FUNC_1(VAR_0);
  }
 } else {
  FUNC_0(VAR_0);
  VAR_0->width = VAR_0->height = 0;
  VAR_0->width_fraction = VAR_0->height_fraction = 0;
  FUNC_7(VAR_1, VAR_0);
  FUNC_4(VAR_0);
 }
 if (VAR_0->view) {
  FUNC_5(VAR_0, "move");
 }
 FUNC_8(VAR_2);
 FUNC_8(VAR_1);
 FUNC_9(VAR_1);
}

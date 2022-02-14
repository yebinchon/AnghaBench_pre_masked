
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_workspace_state {int focused; struct sway_container* focused_inactive_child; void* tiling; void* floating; int output; int layout; int height; int width; int y; int x; int fullscreen; } ;
struct sway_workspace {int node; int tiling; int floating; int output; int layout; int height; int width; int y; int x; int fullscreen; } ;
struct sway_transaction_instruction {struct sway_workspace_state workspace_state; } ;
struct sway_seat {int dummy; } ;
struct sway_container {struct sway_container* parent; } ;


 void* FUNC_0 () ;
 struct sway_seat* FUNC_1 () ;
 int FUNC_2 (void*,int ) ;
 int * FUNC_3 (struct sway_seat*) ;
 struct sway_container* FUNC_4 (struct sway_seat*,struct sway_workspace*) ;

__attribute__((used)) static void FUNC_5(struct sway_workspace *VAR_0,
  struct sway_transaction_instruction *VAR_1) {
 struct sway_workspace_state *VAR_2 = &VAR_1->workspace_state;

 VAR_2->fullscreen = VAR_0->fullscreen;
 VAR_2->x = VAR_0->x;
 VAR_2->y = VAR_0->y;
 VAR_2->width = VAR_0->width;
 VAR_2->height = VAR_0->height;
 VAR_2->layout = VAR_0->layout;

 VAR_2->output = VAR_0->output;
 VAR_2->floating = FUNC_0();
 VAR_2->tiling = FUNC_0();
 FUNC_2(VAR_2->floating, VAR_0->floating);
 FUNC_2(VAR_2->tiling, VAR_0->tiling);

 struct sway_seat *VAR_3 = FUNC_1();
 VAR_2->focused = FUNC_3(VAR_3) == &VAR_0->node;


 struct sway_container *VAR_4 = FUNC_4(VAR_3, VAR_0);
 if (VAR_4) {
  while (VAR_4->parent) {
   VAR_4 = VAR_4->parent;
  }
 }
 VAR_2->focused_inactive_child = VAR_4;
}

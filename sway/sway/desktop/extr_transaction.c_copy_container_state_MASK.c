
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_container_state {int focused; int * focused_inactive_child; int children; int content_height; int content_width; int content_y; int content_x; int border_bottom; int border_right; int border_left; int border_top; int border_thickness; int border; int workspace; int parent; int fullscreen_mode; int height; int width; int y; int x; int layout; } ;
struct sway_transaction_instruction {struct sway_container_state container_state; } ;
struct sway_seat {int dummy; } ;
struct sway_node {int * sway_container; } ;
struct sway_container {int node; int view; int children; int content_height; int content_width; int content_y; int content_x; int border_bottom; int border_right; int border_left; int border_top; int border_thickness; int border; int workspace; int parent; int fullscreen_mode; int height; int width; int y; int x; int layout; } ;


 int FUNC_0 () ;
 struct sway_seat* FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 struct sway_node* FUNC_3 (struct sway_seat*,int *) ;
 int * FUNC_4 (struct sway_seat*) ;

__attribute__((used)) static void FUNC_5(struct sway_container *VAR_0,
  struct sway_transaction_instruction *VAR_1) {
 struct sway_container_state *VAR_2 = &VAR_1->container_state;

 VAR_2->layout = VAR_0->layout;
 VAR_2->x = VAR_0->x;
 VAR_2->y = VAR_0->y;
 VAR_2->width = VAR_0->width;
 VAR_2->height = VAR_0->height;
 VAR_2->fullscreen_mode = VAR_0->fullscreen_mode;
 VAR_2->parent = VAR_0->parent;
 VAR_2->workspace = VAR_0->workspace;
 VAR_2->border = VAR_0->border;
 VAR_2->border_thickness = VAR_0->border_thickness;
 VAR_2->border_top = VAR_0->border_top;
 VAR_2->border_left = VAR_0->border_left;
 VAR_2->border_right = VAR_0->border_right;
 VAR_2->border_bottom = VAR_0->border_bottom;
 VAR_2->content_x = VAR_0->content_x;
 VAR_2->content_y = VAR_0->content_y;
 VAR_2->content_width = VAR_0->content_width;
 VAR_2->content_height = VAR_0->content_height;

 if (!VAR_0->view) {
  VAR_2->children = FUNC_0();
  FUNC_2(VAR_2->children, VAR_0->children);
 }

 struct sway_seat *VAR_3 = FUNC_1();
 VAR_2->focused = FUNC_4(VAR_3) == &VAR_0->node;

 if (!VAR_0->view) {
  struct sway_node *VAR_4 =
   FUNC_3(VAR_3, &VAR_0->node);
  VAR_2->focused_inactive_child = VAR_4 ? VAR_4->sway_container : ((void*)0);
 }
}

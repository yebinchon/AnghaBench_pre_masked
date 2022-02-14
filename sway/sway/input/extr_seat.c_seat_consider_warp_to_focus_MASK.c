
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct wlr_box {int dummy; } ;
struct sway_seat {TYPE_2__* cursor; } ;
struct sway_output {int dummy; } ;
struct sway_node {scalar_t__ type; int sway_workspace; int sway_container; } ;
struct TYPE_9__ {scalar_t__ mouse_warping; } ;
struct TYPE_8__ {int hide_source; scalar_t__ hidden; TYPE_1__* cursor; } ;
struct TYPE_7__ {int y; int x; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_6__* VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 struct sway_output* FUNC_4 (struct sway_node*) ;
 int FUNC_5 (struct sway_output*,struct wlr_box*) ;
 struct sway_node* FUNC_6 (struct sway_seat*) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (struct wlr_box*,int ,int ) ;

void FUNC_9(struct sway_seat *VAR_4) {
 struct sway_node *VAR_5 = FUNC_6(VAR_4);
 if (VAR_3->mouse_warping == VAR_1 || !VAR_5) {
  return;
 }
 if (VAR_3->mouse_warping == VAR_2) {
  struct sway_output *VAR_6 = FUNC_4(VAR_5);
  if (VAR_6) {
   struct wlr_box VAR_7;
   FUNC_5(VAR_6, &VAR_7);
   if (FUNC_8(&VAR_7,
      VAR_4->cursor->cursor->x, VAR_4->cursor->cursor->y)) {
    return;
   }
  }
 }

 if (VAR_5->type == VAR_0) {
  FUNC_2(VAR_4->cursor, VAR_5->sway_container);
 } else {
  FUNC_3(VAR_4->cursor, VAR_5->sway_workspace);
 }
 if (VAR_4->cursor->hidden){
  FUNC_1(VAR_4->cursor);
  FUNC_7(VAR_4->cursor->hide_source, FUNC_0(VAR_4->cursor));
 }
}

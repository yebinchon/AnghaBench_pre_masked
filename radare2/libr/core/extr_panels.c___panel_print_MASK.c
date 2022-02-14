
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_27__ {scalar_t__ w; scalar_t__ h; } ;
struct TYPE_26__ {TYPE_6__* cons; } ;
struct TYPE_25__ {TYPE_3__* view; TYPE_1__* model; } ;
struct TYPE_24__ {TYPE_5__* context; } ;
struct TYPE_22__ {int graph_box; int graph_box2; } ;
struct TYPE_23__ {TYPE_4__ pal; } ;
struct TYPE_20__ {scalar_t__ x; scalar_t__ y; int h; int w; } ;
struct TYPE_21__ {int refresh; TYPE_2__ pos; int sy; int sx; } ;
struct TYPE_19__ {scalar_t__ type; } ;
typedef TYPE_7__ RPanel ;
typedef TYPE_8__ RCore ;
typedef TYPE_9__ RConsCanvas ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_8__*,TYPE_7__*) ;
 int FUNC_1 (TYPE_9__*,TYPE_7__*,int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_9__*,scalar_t__,scalar_t__,int ,int ,int ) ;
 int FUNC_3 (TYPE_9__*,scalar_t__,scalar_t__,int ,int ,char) ;

void FUNC_4(RCore *VAR_1, RConsCanvas *VAR_2, RPanel *VAR_3, int VAR_4) {
 if (!VAR_2 || !VAR_3|| !VAR_3->view->refresh) {
  return;
 }

 if (VAR_2->w <= VAR_3->view->pos.x || VAR_2->h <= VAR_3->view->pos.y) {
  return;
 }
 VAR_3->view->refresh = 0;
 FUNC_3 (VAR_2, VAR_3->view->pos.x, VAR_3->view->pos.y, VAR_3->view->pos.w, VAR_3->view->pos.h, ' ');
 if (VAR_3->model->type == VAR_0) {
  FUNC_1 (VAR_2, VAR_3, VAR_3->view->sx, VAR_3->view->sy, VAR_3->view->pos.w, VAR_3->view->pos.h);
 } else {
  FUNC_0 (VAR_1, VAR_3);
 }
 if (VAR_4) {
  FUNC_2 (VAR_2, VAR_3->view->pos.x, VAR_3->view->pos.y, VAR_3->view->pos.w, VAR_3->view->pos.h, VAR_1->cons->context->pal.graph_box2);
 } else {
  FUNC_2 (VAR_2, VAR_3->view->pos.x, VAR_3->view->pos.y, VAR_3->view->pos.w, VAR_3->view->pos.h, VAR_1->cons->context->pal.graph_box);
 }
}

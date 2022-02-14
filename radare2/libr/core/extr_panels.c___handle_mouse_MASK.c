
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_26__ {TYPE_2__* panels; } ;
struct TYPE_25__ {TYPE_1__* model; } ;
struct TYPE_24__ {scalar_t__ mode; int mouse_on_edge_x; int mouse_on_edge_y; } ;
struct TYPE_23__ {int cmd; int title; } ;
typedef TYPE_2__ RPanels ;
typedef TYPE_3__ RPanel ;
typedef TYPE_4__ RCore ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (TYPE_4__*,int,int) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (TYPE_4__*,int,int) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 TYPE_3__* FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_4__*,int,int) ;
 int FUNC_7 (TYPE_4__*,int,int) ;
 scalar_t__ FUNC_8 (TYPE_4__*,TYPE_3__*,int,int,int*) ;
 scalar_t__ FUNC_9 (TYPE_4__*,int,int) ;
 int FUNC_10 (TYPE_4__*,TYPE_3__*,int ,int ) ;
 int FUNC_11 (TYPE_4__*,TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_12 (int*,int*) ;
 int FUNC_13 (int*) ;

bool FUNC_14(RCore *VAR_2, RPanel *VAR_3, int *VAR_4) {
 const int VAR_5 = 1;
 RPanels *VAR_6 = VAR_2->panels;
 if (FUNC_4 (VAR_2)) {
  return 1;
 }
 if (*VAR_4 == 0) {
  int VAR_7, VAR_8;
  if (FUNC_12 (&VAR_7, &VAR_8)) {
   if (VAR_8 == VAR_5 && FUNC_9 (VAR_2, VAR_7, VAR_8)) {
    return 1;
   }
   if (VAR_6->mode == VAR_1) {
    FUNC_7 (VAR_2, VAR_7, VAR_8);
    return 1;
   }
   if (FUNC_6 (VAR_2, VAR_7, VAR_8)) {
    return 1;
   }
   if (FUNC_0 (VAR_2, VAR_7) || FUNC_2 (VAR_2, VAR_8)) {
    VAR_6->mouse_on_edge_x = 0;
    VAR_6->mouse_on_edge_y = 0;
    return 1;
   }
   VAR_6->mouse_on_edge_x = FUNC_1 (VAR_2, VAR_7, VAR_8);
   VAR_6->mouse_on_edge_y = FUNC_3 (VAR_2, VAR_7, VAR_8);
   if (VAR_6->mouse_on_edge_x || VAR_6->mouse_on_edge_y) {
    return 1;
   }
   if (FUNC_8 (VAR_2, VAR_3, VAR_7, VAR_8, VAR_4)) {
    return 1;
   }
   int VAR_9, VAR_10 = FUNC_13 (&VAR_9);
   if (VAR_8 == VAR_9) {
    RPanel *VAR_11 = FUNC_5 (VAR_6);
    FUNC_10 (VAR_2, VAR_11, VAR_11->model->title, VAR_11->model->cmd);
   } else if (VAR_7 == VAR_10) {
    RPanel *VAR_12 = FUNC_5 (VAR_6);
    FUNC_11 (VAR_2, VAR_12, VAR_12->model->title, VAR_12->model->cmd);
   }
  } else {
   return 0;
  }
 }
 if (*VAR_4 == VAR_0) {
  *VAR_4 = '"';
  return 0;
 }
 return 0;
}

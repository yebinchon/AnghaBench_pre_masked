
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {TYPE_4__* panels; } ;
struct TYPE_13__ {TYPE_3__* view; TYPE_1__* model; } ;
struct TYPE_12__ {int * can; } ;
struct TYPE_10__ {int x; int y; int w; int h; } ;
struct TYPE_11__ {int sx; TYPE_2__ pos; int sy; } ;
struct TYPE_9__ {char* readOnly; } ;
typedef TYPE_4__ RPanels ;
typedef TYPE_5__ RPanel ;
typedef TYPE_6__ RCore ;
typedef int RConsCanvas ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,char*) ;
 char* FUNC_5 (char*,int,int,int,int) ;
 scalar_t__ FUNC_6 (char,int) ;
 char* FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*) ;

void FUNC_9(RCore *VAR_0, RPanel *VAR_1) {
 char *VAR_2 = VAR_1->model->readOnly;
 char *VAR_3 = ((void*)0);
 int VAR_4 = VAR_1->view->sx;
 int VAR_5 = FUNC_0 (VAR_1->view->sy, 0);
 int VAR_6 = VAR_1->view->pos.x;
 int VAR_7 = VAR_1->view->pos.y;
 int VAR_8 = VAR_1->view->pos.w;
 int VAR_9 = VAR_1->view->pos.h;
 RPanels *VAR_10 = VAR_0->panels;
 RConsCanvas *VAR_11 = VAR_10->can;
 (void) FUNC_3 (VAR_11, VAR_6 + 2, VAR_7 + 2);
 if (VAR_4 < 0) {
  char *VAR_12 = (char*)FUNC_6 (' ', 128);
  int VAR_13 = FUNC_1 (-VAR_4, FUNC_8 (VAR_12) - 1);
  VAR_12[VAR_13] = 0;
  VAR_3 = FUNC_5 (VAR_2,
    0, VAR_5, VAR_8 + VAR_4 - 3, VAR_9 - 2 + VAR_5);
  char *VAR_14 = FUNC_7 (VAR_3, VAR_12);
  if (VAR_14) {
   FUNC_2 (VAR_3);
   VAR_3 = VAR_14;
  }
 } else {
  VAR_3 = FUNC_5 (VAR_2,
    VAR_4, VAR_5, VAR_8 + VAR_4 - 3, VAR_9 - 2 + VAR_5);
 }
 if (VAR_3) {
  FUNC_4 (VAR_11, VAR_3);
  FUNC_2 (VAR_3);
 }
}

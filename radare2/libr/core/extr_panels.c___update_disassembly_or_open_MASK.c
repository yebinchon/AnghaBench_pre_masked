
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_20__ {int x; int y; int w; int h; } ;
struct TYPE_19__ {int offset; TYPE_2__* panels; } ;
struct TYPE_18__ {TYPE_1__* view; } ;
struct TYPE_17__ {int n_panels; } ;
struct TYPE_16__ {TYPE_9__ pos; } ;
typedef TYPE_2__ RPanels ;
typedef TYPE_3__ RPanel ;
typedef TYPE_4__ RCore ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (TYPE_9__*,int,int,int,int) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_4__*,int,int) ;

void FUNC_8 (RCore *VAR_2) {
 RPanels *VAR_3 = VAR_2->panels;
 int VAR_4;
 bool VAR_5 = 1;
 for (VAR_4 = 0; VAR_4 < VAR_3->n_panels; VAR_4++) {
  RPanel *VAR_6 = FUNC_1 (VAR_3, VAR_4);
  if (FUNC_0 (VAR_6, VAR_0)) {
   FUNC_6 (VAR_2, VAR_6, VAR_2->offset);
   VAR_5 = 0;
  }
 }
 if (VAR_5) {
  RPanel *VAR_7 = FUNC_1 (VAR_3, 0);
  int VAR_8 = VAR_7->view->pos.x;
  int VAR_9 = VAR_7->view->pos.y;
  int VAR_10 = VAR_7->view->pos.w;
  int VAR_11 = VAR_7->view->pos.h;
  int VAR_12 = VAR_8 + VAR_7->view->pos.w;
  int VAR_13 = VAR_8 + VAR_10 / 2 - 1;
  int VAR_14 = VAR_12 - VAR_13;

  FUNC_2 (VAR_2, 0, VAR_1, VAR_0);
  RPanel *VAR_15 = FUNC_1 (VAR_3, 0);
  FUNC_5 (&VAR_15->view->pos, VAR_8, VAR_9, VAR_10 / 2, VAR_11);

  RPanel *VAR_16 = FUNC_1 (VAR_3, 1);
  FUNC_5 (&VAR_16->view->pos, VAR_13, VAR_9, VAR_14, VAR_11);

  FUNC_4 (VAR_2, 0);
  FUNC_3 (VAR_2, 0);
 }
 FUNC_7 (VAR_2, 0, 0);
}

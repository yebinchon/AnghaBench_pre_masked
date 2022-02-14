
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {int h; int w; scalar_t__ y; int x; } ;
struct TYPE_17__ {TYPE_2__* panels; } ;
struct TYPE_16__ {TYPE_1__* view; } ;
struct TYPE_15__ {scalar_t__ curnode; } ;
struct TYPE_14__ {TYPE_8__ pos; scalar_t__ curpos; } ;
typedef TYPE_2__ RPanels ;
typedef TYPE_3__ RPanel ;
typedef TYPE_4__ RCore ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (TYPE_4__*,scalar_t__,char const*,char const*) ;
 int FUNC_4 (TYPE_8__*,int ,scalar_t__,int ,int) ;
 int FUNC_5 (TYPE_4__*,int,int) ;

void FUNC_6(RCore *VAR_0, RPanel *VAR_1, const char *VAR_2, const char *VAR_3) {
 RPanels *VAR_4 = VAR_0->panels;
 if (!FUNC_0 (VAR_0)) {
  return;
 }
 FUNC_3 (VAR_0, VAR_4->curnode + 1, VAR_2, VAR_3);
 RPanel *VAR_5 = FUNC_2 (VAR_4, VAR_4->curnode + 1);
 int VAR_6 = VAR_1->view->pos.h;
 VAR_1->view->curpos = 0;
 VAR_1->view->pos.h = VAR_6 / 2 + 1;
 FUNC_4 (&VAR_5->view->pos, VAR_1->view->pos.x, VAR_1->view->pos.y + VAR_1->view->pos.h - 1,
   VAR_1->view->pos.w, VAR_6 - VAR_1->view->pos.h + 1);
 FUNC_1 (VAR_0);
 FUNC_5 (VAR_0, 0, 1);
}

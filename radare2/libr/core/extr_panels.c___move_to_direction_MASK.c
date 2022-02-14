
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {TYPE_3__* panels; } ;
struct TYPE_15__ {TYPE_2__* view; } ;
struct TYPE_14__ {int n_panels; } ;
struct TYPE_12__ {int x; int w; int y; int h; } ;
struct TYPE_13__ {TYPE_1__ pos; } ;
typedef TYPE_3__ RPanels ;
typedef TYPE_4__ RPanel ;
typedef TYPE_5__ RCore ;
typedef int Direction ;






 TYPE_4__* FUNC_0 (TYPE_3__*) ;
 TYPE_4__* FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_5__*,int) ;

bool FUNC_3(RCore *VAR_0, Direction VAR_1) {
 RPanels *VAR_2 = VAR_0->panels;
 RPanel *VAR_3 = FUNC_0 (VAR_2);
 int VAR_4 = VAR_3->view->pos.x, VAR_5 = VAR_3->view->pos.x + VAR_3->view->pos.w - 1, VAR_6 = VAR_3->view->pos.y, VAR_7 = VAR_3->view->pos.y + VAR_3->view->pos.h - 1;
 int VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12;
 for (VAR_12 = 0; VAR_12 < VAR_2->n_panels; VAR_12++) {
  RPanel *VAR_13 = FUNC_1 (VAR_2, VAR_12);
  VAR_8 = VAR_13->view->pos.x;
  VAR_9 = VAR_13->view->pos.x + VAR_13->view->pos.w - 1;
  VAR_10 = VAR_13->view->pos.y;
  VAR_11 = VAR_13->view->pos.y + VAR_13->view->pos.h - 1;
  switch (VAR_1) {
  case 130:
   if (VAR_9 == VAR_4) {
    if (VAR_11 <= VAR_6 || VAR_7 <= VAR_10) {
     continue;
    }
    FUNC_2 (VAR_0, VAR_12);
    return 1;
   }
   break;
  case 129:
   if (VAR_8 == VAR_5) {
    if (VAR_11 <= VAR_6 || VAR_7 <= VAR_10) {
     continue;
    }
    FUNC_2 (VAR_0, VAR_12);
    return 1;
   }
   break;
  case 128:
   if (VAR_11 == VAR_6) {
    if (VAR_9 <= VAR_4 || VAR_5 <= VAR_8) {
     continue;
    }
    FUNC_2 (VAR_0, VAR_12);
    return 1;
   }
   break;
  case 131:
   if (VAR_10 == VAR_7) {
    if (VAR_9 <= VAR_4 || VAR_5 <= VAR_8) {
     continue;
    }
    FUNC_2 (VAR_0, VAR_12);
    return 1;
   }
   break;
  default:
   break;
  }
 }
 return 0;
}

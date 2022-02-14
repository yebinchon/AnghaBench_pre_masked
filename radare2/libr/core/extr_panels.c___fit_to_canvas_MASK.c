
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ w; scalar_t__ h; } ;
struct TYPE_12__ {TYPE_2__* view; } ;
struct TYPE_11__ {int n_panels; TYPE_5__* can; } ;
struct TYPE_9__ {scalar_t__ x; int w; scalar_t__ y; int h; } ;
struct TYPE_10__ {int edgeflag; int refresh; TYPE_1__ pos; } ;
typedef TYPE_3__ RPanels ;
typedef TYPE_4__ RPanel ;
typedef TYPE_5__ RConsCanvas ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (TYPE_3__*,int) ;

void FUNC_1(RPanels *VAR_2) {
 RConsCanvas *VAR_3 = VAR_2->can;
 int VAR_4, VAR_5, VAR_6;
 for (VAR_4 = 0; VAR_4 < VAR_2->n_panels; VAR_4++) {
  RPanel *VAR_7 = FUNC_0 (VAR_2, VAR_4);
  if (!VAR_7) {
   continue;
  }
  if (VAR_7->view->edgeflag & 1 << VAR_1 && VAR_7->view->pos.x < VAR_3->w) {
   VAR_5 = VAR_3->w - VAR_7->view->pos.x;
   if (VAR_5 != VAR_7->view->pos.w) {
    VAR_7->view->pos.w = VAR_5;
    VAR_7->view->refresh = 1;
   }
  }
  if (VAR_7->view->edgeflag & 1 << VAR_0 && VAR_7->view->pos.y < VAR_3->h) {
   VAR_6 = VAR_3->h - VAR_7->view->pos.y;
   if (VAR_6 != VAR_7->view->pos.h) {
    VAR_7->view->pos.h = VAR_6;
    VAR_7->view->refresh = 1;
   }
  }
 }
}

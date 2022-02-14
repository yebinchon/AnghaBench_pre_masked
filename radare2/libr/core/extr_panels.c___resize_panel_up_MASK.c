
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {TYPE_2__* view; } ;
struct TYPE_14__ {int n_panels; int curnode; } ;
struct TYPE_12__ {int x; int w; int y; int h; } ;
struct TYPE_13__ {int refresh; TYPE_1__ pos; } ;
typedef TYPE_3__ RPanels ;
typedef TYPE_4__ RPanel ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (TYPE_3__*) ;
 TYPE_4__* FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_4__**) ;
 TYPE_4__** FUNC_3 (int) ;

void FUNC_4(RPanels *VAR_1) {
 RPanel *VAR_2 = FUNC_0 (VAR_1);
 int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
 int VAR_12 = VAR_2->view->pos.x;
 int VAR_13 = VAR_2->view->pos.x + VAR_2->view->pos.w - 1;
 int VAR_14 = VAR_2->view->pos.y;
 int VAR_15 = VAR_2->view->pos.y + VAR_2->view->pos.h - 1;
 RPanel **VAR_16 = FUNC_3 (sizeof (RPanel *) * VAR_1->n_panels);
 RPanel **VAR_17 = FUNC_3 (sizeof (RPanel *) * VAR_1->n_panels);
 RPanel **VAR_18 = FUNC_3 (sizeof (RPanel *) * VAR_1->n_panels);
 RPanel **VAR_19 = FUNC_3 (sizeof (RPanel *) * VAR_1->n_panels);
 if (!VAR_16 || !VAR_17 || !VAR_18 || !VAR_19) {
  goto beach;
 }
 for (VAR_3 = 0; VAR_3 < VAR_1->n_panels; VAR_3++) {
  if (VAR_3 == VAR_1->curnode) {
   continue;
  }
  RPanel *VAR_20 = FUNC_1 (VAR_1, VAR_3);
  VAR_4 = VAR_20->view->pos.x;
  VAR_5 = VAR_20->view->pos.x + VAR_20->view->pos.w - 1;
  VAR_6 = VAR_20->view->pos.y;
  VAR_7 = VAR_20->view->pos.y + VAR_20->view->pos.h - 1;
  if (VAR_4 == VAR_12 && VAR_5 == VAR_13 && VAR_7 == VAR_14 && VAR_7 - VAR_0 > VAR_6) {
   VAR_20->view->pos.h -= VAR_0;
   VAR_2->view->pos.y -= VAR_0;
   VAR_2->view->pos.h += VAR_0;
   VAR_20->view->refresh = 1;
   VAR_2->view->refresh = 1;
   goto beach;
  }
  bool VAR_21 = (VAR_5 >= VAR_12 && VAR_13 >= VAR_5) || (VAR_4 >= VAR_12 && VAR_13 >= VAR_4);
  if (VAR_7 == VAR_14 && VAR_21) {
   if (VAR_7 - VAR_0 > VAR_6) {
    VAR_16[VAR_8++] = VAR_20;
   }
  }
  if (VAR_6 == VAR_15 && VAR_21) {
   if (VAR_6 - VAR_0 > VAR_14) {
    VAR_18[VAR_10++] = VAR_20;
   }
  }
  if (VAR_6 == VAR_14) {
   if (VAR_6 - VAR_0 > 0) {
    VAR_17[VAR_9++] = VAR_20;
   }
  }
  if (VAR_7 == VAR_15) {
   if (VAR_7 - VAR_0 > VAR_6) {
    VAR_19[VAR_11++] = VAR_20;
   }
  }
 }
 if (VAR_8 > 0) {
  for (VAR_3 = 0; VAR_3 < VAR_8; VAR_3++) {
   VAR_16[VAR_3]->view->pos.h -= VAR_0;
   VAR_16[VAR_3]->view->refresh = 1;
  }
  for (VAR_3 = 0; VAR_3 < VAR_9; VAR_3++) {
   VAR_17[VAR_3]->view->pos.y -= VAR_0;
   VAR_17[VAR_3]->view->pos.h += VAR_0;
   VAR_17[VAR_3]->view->refresh = 1;
  }
  VAR_2->view->pos.y -= VAR_0;
  VAR_2->view->pos.h += VAR_0;
  VAR_2->view->refresh = 1;
 } else if (VAR_10 > 0) {
  for (VAR_3 = 0; VAR_3 < VAR_10; VAR_3++) {
   VAR_18[VAR_3]->view->pos.h += VAR_0;
   VAR_18[VAR_3]->view->pos.y -= VAR_0;
   VAR_18[VAR_3]->view->refresh = 1;
  }
  for (VAR_3 = 0; VAR_3 < VAR_11; VAR_3++) {
   VAR_19[VAR_3]->view->pos.h -= VAR_0;
   VAR_19[VAR_3]->view->refresh = 1;
  }
  VAR_2->view->pos.h -= VAR_0;
  VAR_2->view->refresh = 1;
 }
beach:
 FUNC_2 (VAR_16);
 FUNC_2 (VAR_17);
 FUNC_2 (VAR_18);
 FUNC_2 (VAR_19);
}

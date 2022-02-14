
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int up ;
typedef int right ;
typedef int left ;
typedef int down ;
struct TYPE_12__ {TYPE_2__* view; } ;
struct TYPE_11__ {int n_panels; } ;
struct TYPE_9__ {int x; int y; int w; int h; } ;
struct TYPE_10__ {TYPE_1__ pos; } ;
typedef TYPE_3__ RPanels ;
typedef TYPE_4__ RPanel ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int*,int,int) ;

void FUNC_2(RPanels *VAR_1, RPanel *VAR_2) {
 RPanel *VAR_3 = ((void*)0), *VAR_4 = ((void*)0), *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
 RPanel *VAR_7 = ((void*)0);
 bool VAR_8 = 0, VAR_9 = 0, VAR_10 = 0, VAR_11 = 0,
   VAR_12 = 0, VAR_13 = 0, VAR_14 = 0, VAR_15 = 0;
 int VAR_16[VAR_0], VAR_17[VAR_0], VAR_18[VAR_0], VAR_19[VAR_0];
 FUNC_1 (VAR_16, -1, sizeof (VAR_16));
 FUNC_1 (VAR_17, -1, sizeof (VAR_17));
 FUNC_1 (VAR_18, -1, sizeof (VAR_18));
 FUNC_1 (VAR_19, -1, sizeof (VAR_19));
 int VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
 VAR_21 = VAR_2->view->pos.x;
 VAR_22 = VAR_2->view->pos.y;
 VAR_23 = VAR_2->view->pos.w;
 VAR_24 = VAR_2->view->pos.h;
 for (VAR_20 = 0; VAR_20 < VAR_1->n_panels; VAR_20++) {
  VAR_7 = FUNC_0 (VAR_1, VAR_20);
  if (VAR_7->view->pos.x + VAR_7->view->pos.w - 1 == VAR_21) {
   VAR_16[VAR_20] = 1;
   if (VAR_22 == VAR_7->view->pos.y) {
    VAR_8 = 1;
    if (VAR_24 == VAR_7->view->pos.h) {
     VAR_3 = VAR_7;
     break;
    }
   }
   if (VAR_22 + VAR_24 == VAR_7->view->pos.y + VAR_7->view->pos.h) {
    VAR_9 = 1;
   }
  }
  if (VAR_7->view->pos.x == VAR_21 + VAR_23 - 1) {
   VAR_17[VAR_20] = 1;
   if (VAR_22 == VAR_7->view->pos.y) {
    VAR_10 = 1;
    if (VAR_24 == VAR_7->view->pos.h) {
     VAR_11 = 1;
     VAR_4 = VAR_7;
    }
   }
   if (VAR_22 + VAR_24 == VAR_7->view->pos.y + VAR_7->view->pos.h) {
    VAR_11 = 1;
   }
  }
  if (VAR_7->view->pos.y + VAR_7->view->pos.h - 1 == VAR_22) {
   VAR_18[VAR_20] = 1;
   if (VAR_21 == VAR_7->view->pos.x) {
    VAR_12 = 1;
    if (VAR_23 == VAR_7->view->pos.w) {
     VAR_13 = 1;
     VAR_5 = VAR_7;
    }
   }
   if (VAR_21 + VAR_23 == VAR_7->view->pos.x + VAR_7->view->pos.w) {
    VAR_13 = 1;
   }
  }
  if (VAR_7->view->pos.y == VAR_22 + VAR_24 - 1) {
   VAR_19[VAR_20] = 1;
   if (VAR_21 == VAR_7->view->pos.x) {
    VAR_14 = 1;
    if (VAR_23 == VAR_7->view->pos.w) {
     VAR_15 = 1;
     VAR_6 = VAR_7;
    }
   }
   if (VAR_21 + VAR_23 == VAR_7->view->pos.x + VAR_7->view->pos.w) {
    VAR_15 = 1;
   }
  }
 }
 if (VAR_3) {
  VAR_3->view->pos.w += VAR_21 + VAR_23 - (VAR_3->view->pos.x + VAR_3->view->pos.w);
 } else if (VAR_4) {
  VAR_4->view->pos.w = VAR_4->view->pos.x + VAR_4->view->pos.w - VAR_21;
  VAR_4->view->pos.x = VAR_21;
 } else if (VAR_5) {
  VAR_5->view->pos.h += VAR_22 + VAR_24 - (VAR_5->view->pos.y + VAR_5->view->pos.h);
 } else if (VAR_6) {
  VAR_6->view->pos.h = VAR_24 + VAR_6->view->pos.y + VAR_6->view->pos.h - (VAR_22 + VAR_24);
  VAR_6->view->pos.y = VAR_22;
 } else if (VAR_8 && VAR_9) {
  for (VAR_20 = 0; VAR_20 < VAR_1->n_panels; VAR_20++) {
   if (VAR_16[VAR_20] != -1) {
    VAR_7 = FUNC_0 (VAR_1, VAR_20);
    VAR_7->view->pos.w += VAR_21 + VAR_23 - (VAR_7->view->pos.x + VAR_7->view->pos.w);
   }
  }
 } else if (VAR_10 && VAR_11) {
  for (VAR_20 = 0; VAR_20 < VAR_1->n_panels; VAR_20++) {
   if (VAR_17[VAR_20] != -1) {
    VAR_7 = FUNC_0 (VAR_1, VAR_20);
    VAR_7->view->pos.w = VAR_7->view->pos.x + VAR_7->view->pos.w - VAR_21;
    VAR_7->view->pos.x = VAR_21;
   }
  }
 } else if (VAR_12 && VAR_13) {
  for (VAR_20 = 0; VAR_20 < VAR_1->n_panels; VAR_20++) {
   if (VAR_18[VAR_20] != -1) {
    VAR_7 = FUNC_0 (VAR_1, VAR_20);
    VAR_7->view->pos.h += VAR_22 + VAR_24 - (VAR_7->view->pos.y + VAR_7->view->pos.h);
   }
  }
 } else if (VAR_14 && VAR_15) {
  for (VAR_20 = 0; VAR_20 < VAR_1->n_panels; VAR_20++) {
   if (VAR_19[VAR_20] != -1) {
    VAR_7 = FUNC_0 (VAR_1, VAR_20);
    VAR_7->view->pos.h = VAR_24 + VAR_7->view->pos.y + VAR_7->view->pos.h - (VAR_22 + VAR_24);
    VAR_7->view->pos.y = VAR_22;
   }
  }
 }
}

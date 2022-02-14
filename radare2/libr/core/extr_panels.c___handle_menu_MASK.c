
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_25__ ;
typedef struct TYPE_29__ TYPE_1__ ;


struct TYPE_36__ {TYPE_6__* panels; } ;
struct TYPE_35__ {int almighty_db; TYPE_5__* panels_menu; } ;
struct TYPE_34__ {int depth; TYPE_2__* root; TYPE_4__** history; } ;
struct TYPE_33__ {size_t selectedIndex; int (* cb ) (TYPE_7__*) ;struct TYPE_33__** sub; int n_sub; } ;
struct TYPE_32__ {int refresh; } ;
struct TYPE_31__ {size_t selectedIndex; size_t n_sub; TYPE_1__** sub; } ;
struct TYPE_30__ {TYPE_3__* view; } ;
struct TYPE_29__ {int (* cb ) (TYPE_7__*) ;} ;
typedef TYPE_4__ RPanelsMenuItem ;
typedef TYPE_5__ RPanelsMenu ;
typedef TYPE_6__ RPanels ;
typedef TYPE_7__ RCore ;


 int VAR_0 ;
 size_t FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_7__*,int ,int ) ;
 int FUNC_2 (TYPE_7__*) ;
 TYPE_25__* FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*,int ) ;
 int FUNC_5 (TYPE_7__*,TYPE_6__*) ;
 int FUNC_6 (TYPE_7__*,int) ;
 int FUNC_7 (TYPE_7__*,int ) ;
 int FUNC_8 (TYPE_7__*,int,int) ;
 int FUNC_9 (TYPE_7__*) ;
 int FUNC_10 (TYPE_7__*,TYPE_5__*,TYPE_4__*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (TYPE_7__*,char*) ;
 int FUNC_13 (TYPE_7__*) ;
 int FUNC_14 (TYPE_7__*) ;
 int FUNC_15 (TYPE_7__*) ;
 int FUNC_16 (TYPE_7__*) ;
 int FUNC_17 (TYPE_7__*) ;

void FUNC_18(RCore *VAR_1, const int VAR_2) {
 RPanels *VAR_3 = VAR_1->panels;
 RPanelsMenu *VAR_4 = VAR_3->panels_menu;
 RPanelsMenuItem *VAR_5 = VAR_4->history[VAR_4->depth - 1];
 RPanelsMenuItem *VAR_6 = VAR_5->sub[VAR_5->selectedIndex];
 FUNC_11 (0);
 switch (VAR_2) {
 case 'h':
  if (VAR_4->depth <= 2) {
   if (VAR_4->root->selectedIndex > 0) {
    VAR_4->root->selectedIndex--;
   } else {
    VAR_4->root->selectedIndex = VAR_4->root->n_sub - 1;
   }
   if (VAR_4->depth == 2) {
    VAR_4->depth = 1;
    FUNC_8 (VAR_1, 0, 0);
    (void)(VAR_4->root->sub[VAR_4->root->selectedIndex]->cb (VAR_1));
   }
  } else {
   FUNC_2 (VAR_1);
  }
  break;
 case 'j':
  {
   if (VAR_4->depth == 1) {
    (void)(VAR_6->cb (VAR_1));
   } else {
    VAR_5->selectedIndex = FUNC_0 (VAR_5->n_sub - 1, VAR_5->selectedIndex + 1);
    FUNC_10 (VAR_1, VAR_4, VAR_5);
   }
  }
  break;
 case 'k':
  {
   if (VAR_4->depth < 2) {
    break;
   }
   RPanelsMenuItem *VAR_7 = VAR_4->history[VAR_4->depth - 1];
   if (VAR_7->selectedIndex > 0) {
    VAR_7->selectedIndex--;
    FUNC_10 (VAR_1, VAR_4, VAR_7);
   } else if (VAR_4->depth == 2) {
    VAR_4->depth--;
    FUNC_8 (VAR_1, 0, 0);
   }
  }
  break;
 case 'l':
  {
   if (VAR_4->depth == 1) {
    VAR_4->root->selectedIndex++;
    VAR_4->root->selectedIndex %= VAR_4->root->n_sub;
    break;
   }
   if (VAR_5->sub[VAR_5->selectedIndex]->sub) {
    (void)(VAR_5->sub[VAR_5->selectedIndex]->cb (VAR_1));
   } else {
    VAR_4->root->selectedIndex++;
    VAR_4->root->selectedIndex %= VAR_4->root->n_sub;
    VAR_4->depth = 1;
    FUNC_8 (VAR_1, 0, 0);
    (void)(VAR_4->root->sub[VAR_4->root->selectedIndex]->cb (VAR_1));
   }
  }
  break;
 case 'm':
 case 'q':
 case 'Q':
 case -1:
  if (VAR_3->panels_menu->depth > 1) {
   FUNC_2 (VAR_1);
  } else {
   FUNC_7 (VAR_1, VAR_0);
   FUNC_3 (VAR_3)->view->refresh = 1;
  }
  break;
 case '$':
  FUNC_12 (VAR_1, "dr PC=$$");
  break;
 case ' ':
 case '\r':
 case '\n':
  (void)(VAR_6->cb (VAR_1));
  break;
 case 9:
  FUNC_6 (VAR_1, 0);
  break;
 case 'Z':
  FUNC_6 (VAR_1, 1);
  break;
 case ':':
  FUNC_5 (VAR_1, VAR_3);
  break;
 case '?':
  FUNC_9 (VAR_1);
 case '"':
  FUNC_1 (VAR_1, FUNC_4 (VAR_3, 0), VAR_3->almighty_db);
  FUNC_7 (VAR_1, VAR_0);
  break;
 }
}

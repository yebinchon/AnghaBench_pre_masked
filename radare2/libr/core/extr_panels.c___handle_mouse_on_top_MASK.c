
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {TYPE_3__* panels; } ;
struct TYPE_16__ {TYPE_2__* panels_menu; } ;
struct TYPE_15__ {int depth; TYPE_1__** history; } ;
struct TYPE_14__ {int selectedIndex; int (* cb ) (TYPE_4__*) ;struct TYPE_14__** sub; } ;
typedef TYPE_1__ RPanelsMenuItem ;
typedef TYPE_2__ RPanelsMenu ;
typedef TYPE_3__ RPanels ;
typedef TYPE_4__ RCore ;


 int FUNC_0 (char**) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,char) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_4__*,int,int) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (TYPE_4__*,TYPE_3__*,int,int) ;
 char** VAR_1 ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (TYPE_4__*) ;

bool FUNC_11 (RCore *VAR_2, int VAR_3, int VAR_4) {
 RPanels *VAR_5 = VAR_2->panels;
 char *VAR_6 = FUNC_8 (VAR_2, VAR_5, VAR_3, VAR_4);
 int VAR_7;
 for (VAR_7 = 0; VAR_7 < FUNC_0 (VAR_1); VAR_7++) {
  if (!FUNC_9 (VAR_6, VAR_1[VAR_7])) {
   FUNC_4 (VAR_2, VAR_0);
   FUNC_1 (VAR_2);
   RPanelsMenu *VAR_8 = VAR_5->panels_menu;
   RPanelsMenuItem *VAR_9 = VAR_8->history[VAR_8->depth - 1];
   VAR_9->selectedIndex = VAR_7;
   RPanelsMenuItem *VAR_10 = VAR_9->sub[VAR_9->selectedIndex];
   (void)(VAR_10->cb (VAR_2));
   FUNC_5 (VAR_2, 0, 0);
   FUNC_7 (VAR_6);
   return 1;
  }
 }
 if (!FUNC_9 (VAR_6, "Tab")) {
  FUNC_2 (VAR_2);
  FUNC_7 (VAR_6);
  return 1;
 }
 if (VAR_6[0] == '[' && VAR_6[1] && VAR_6[2] == ']') {
  return 1;
 }
 if (FUNC_6 (VAR_6)) {
  FUNC_3 (VAR_2, VAR_6[0]);
  return 1;
 }
 return 0;
}

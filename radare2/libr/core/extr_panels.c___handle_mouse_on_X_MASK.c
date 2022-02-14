
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_25__ {TYPE_3__* panels; } ;
struct TYPE_24__ {TYPE_2__* view; } ;
struct TYPE_23__ {int almighty_db; } ;
struct TYPE_21__ {int y; int x; int w; } ;
struct TYPE_22__ {TYPE_1__ pos; } ;
typedef TYPE_3__ RPanels ;
typedef TYPE_4__ RPanel ;
typedef TYPE_5__ RCore ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_5__*,TYPE_4__*,int const) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_4__* FUNC_3 (TYPE_3__*,int const) ;
 int FUNC_4 (TYPE_5__*,int,int) ;
 int FUNC_5 (TYPE_5__*,int const) ;
 int FUNC_6 (TYPE_5__*,int ) ;
 int FUNC_7 (TYPE_5__*,int,int) ;
 int FUNC_8 (TYPE_5__*,int ) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (TYPE_5__*,TYPE_3__*,int,int) ;
 scalar_t__ FUNC_11 (char*,char*) ;

__attribute__((used)) static bool FUNC_12(RCore *VAR_1, int VAR_2, int VAR_3) {
 RPanels *VAR_4 = VAR_1->panels;
 const int VAR_5 = FUNC_4 (VAR_1, VAR_2, VAR_3);
 char *VAR_6 = FUNC_10 (VAR_1, VAR_4, VAR_2, VAR_3);
 if (VAR_5 == -1) {
  return 0;
 }
 RPanel *VAR_7 = FUNC_3(VAR_4, VAR_5);
 const int VAR_8 = VAR_7->view->pos.y + 2;
 if (VAR_3 == VAR_8 && FUNC_11 (VAR_6, " X ")) {
  int VAR_9 = VAR_7->view->pos.x;
  int VAR_10 = VAR_9 + VAR_7->view->pos.w;
  FUNC_5 (VAR_1, VAR_5);
  FUNC_7 (VAR_1, 1, 1);
  if (VAR_2 > (VAR_10 - 13) && VAR_2 < VAR_10) {
   FUNC_8 (VAR_1, FUNC_2 (VAR_4));
  } else if (VAR_2 > VAR_9 && VAR_2 < (VAR_9 + 5)) {
   FUNC_1 (VAR_1, VAR_7, VAR_5);
  } else {
   FUNC_0 (VAR_1, FUNC_3 (VAR_4, 0), VAR_4->almighty_db);
   FUNC_6 (VAR_1, VAR_0);
  }
  FUNC_7 (VAR_1, 0, 0);
  FUNC_9 (VAR_6);
  return 1;
 }
 FUNC_9 (VAR_6);
 return 0;
}

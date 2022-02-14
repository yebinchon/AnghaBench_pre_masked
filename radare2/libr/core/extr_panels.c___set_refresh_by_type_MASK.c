
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {TYPE_2__* panels; } ;
struct TYPE_13__ {TYPE_1__* view; } ;
struct TYPE_12__ {int n_panels; } ;
struct TYPE_11__ {int refresh; } ;
typedef TYPE_2__ RPanels ;
typedef TYPE_3__ RPanel ;
typedef TYPE_4__ RCore ;


 int FUNC_0 (TYPE_3__*,char const*) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*,int *) ;

void FUNC_3(RCore *VAR_0, const char *VAR_1, bool VAR_2) {
 RPanels *VAR_3 = VAR_0->panels;
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_3->n_panels; VAR_4++) {
  RPanel *VAR_5 = FUNC_1 (VAR_3, VAR_4);
  if (!FUNC_0 (VAR_5, VAR_1)) {
   continue;
  }
  VAR_5->view->refresh = 1;
  if (VAR_2) {
   FUNC_2 (VAR_0, VAR_5, ((void*)0));
  }
 }
}

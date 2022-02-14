
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int * panels; } ;
struct TYPE_11__ {TYPE_1__* view; } ;
struct TYPE_10__ {int pos; } ;
typedef int RPanels ;
typedef TYPE_2__ RPanel ;
typedef TYPE_3__ RCore ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_2__* FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_3__*,int ,char const*,char const*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int *,int ,int,int ,int) ;
 int FUNC_5 (TYPE_3__*,int,int) ;
 int FUNC_6 (int*) ;

void FUNC_7(RCore *VAR_1) {

 RPanels *VAR_2 = VAR_1->panels;
 int VAR_3;
 const char *VAR_4 = "Help";
 (void)FUNC_6 (&VAR_3);
 FUNC_0 (VAR_1);
 FUNC_2 (VAR_1, 0, VAR_4, VAR_4);
 RPanel *VAR_5 = FUNC_1 (VAR_2, 0);
 FUNC_4 (&VAR_5->view->pos, 0, 1, VAR_0, VAR_3 - 1);
 FUNC_3 (VAR_1, 0);
 FUNC_5 (VAR_1, 0, 0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* panels; } ;
struct TYPE_6__ {int n_panels; } ;
typedef TYPE_1__ RPanels ;
typedef int RPanel ;
typedef TYPE_2__ RCore ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_1__*,int *) ;

void FUNC_2(RCore *VAR_0, RPanel *VAR_1, int VAR_2) {
 RPanels *VAR_3 = VAR_0->panels;
 if (VAR_3->n_panels <= 1) {
  return;
 }
 FUNC_1 (VAR_3, VAR_1);
 FUNC_0 (VAR_0, VAR_2);
}

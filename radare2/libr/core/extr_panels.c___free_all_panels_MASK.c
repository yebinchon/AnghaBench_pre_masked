
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int n_panels; int panel; } ;
typedef TYPE_1__ RPanels ;
typedef int RPanel ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ) ;

void FUNC_3(RPanels *VAR_0) {
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->n_panels; VAR_1++) {
  RPanel *VAR_2 = FUNC_1 (VAR_0, VAR_1);
  FUNC_0 (VAR_2);
 }
 FUNC_2 (VAR_0->panel);
}

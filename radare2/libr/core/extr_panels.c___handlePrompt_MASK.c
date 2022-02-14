
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int offset; } ;
struct TYPE_9__ {int n_panels; } ;
typedef TYPE_1__ RPanels ;
typedef int RPanel ;
typedef TYPE_2__ RCore ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int * FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_2__*,int *,int ) ;
 int FUNC_3 (TYPE_2__*,int,int) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5(RCore *VAR_1, RPanels *VAR_2) {
 FUNC_4 (VAR_1);
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_2->n_panels; VAR_3++) {
  RPanel *VAR_4 = FUNC_1 (VAR_2, VAR_3);
  if (FUNC_0 (VAR_4, VAR_0)) {
   FUNC_2 (VAR_1, VAR_4, VAR_1->offset);
   break;
  }
 }
 FUNC_3 (VAR_1, 0, 0);
}

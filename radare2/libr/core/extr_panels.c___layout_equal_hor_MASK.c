
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* view; } ;
struct TYPE_8__ {int n_panels; } ;
struct TYPE_7__ {int pos; } ;
typedef TYPE_2__ RPanels ;
typedef TYPE_3__ RPanel ;


 TYPE_3__* FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int *,int,int,int,int) ;
 int FUNC_2 (int*) ;

void FUNC_3(RPanels *VAR_0) {
 int VAR_1, VAR_2 = FUNC_2 (&VAR_1);
 int VAR_3 = VAR_2 / VAR_0->n_panels;
 int VAR_4, VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_0->n_panels; VAR_4++) {
  RPanel *VAR_6 = FUNC_0 (VAR_0, VAR_4);
  FUNC_1(&VAR_6->view->pos, VAR_5, 1, VAR_3, VAR_1 - 2);
  VAR_5 += VAR_3 - 1;
  if (VAR_4 == VAR_0->n_panels - 2) {
   VAR_3 = VAR_2 - VAR_5;
  }
 }
}

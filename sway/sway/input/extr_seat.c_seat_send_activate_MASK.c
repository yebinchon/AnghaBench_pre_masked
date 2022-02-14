
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sway_seat {int dummy; } ;
struct sway_node {TYPE_1__* sway_container; } ;
struct sway_container {struct sway_node node; } ;
struct TYPE_6__ {int length; struct sway_container** items; } ;
typedef TYPE_2__ list_t ;
struct TYPE_7__ {int surface; } ;
struct TYPE_5__ {TYPE_3__* view; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct sway_node*) ;
 scalar_t__ FUNC_1 (struct sway_node*) ;
 int FUNC_2 (struct sway_seat*,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_5(struct sway_node *VAR_1, struct sway_seat *VAR_2) {
 if (FUNC_1(VAR_1)) {
  if (!FUNC_2(VAR_2, VAR_1->sway_container->view->surface)) {
   FUNC_3(VAR_0, "Refusing to set focus, input is inhibited");
   return;
  }
  FUNC_4(VAR_1->sway_container->view, 1);
 } else {
  list_t *VAR_3 = FUNC_0(VAR_1);
  for (int VAR_4 = 0; VAR_4 < VAR_3->length; ++VAR_4) {
   struct sway_container *VAR_5 = VAR_3->items[VAR_4];
   FUNC_5(&VAR_5->node, VAR_2);
  }
 }
}

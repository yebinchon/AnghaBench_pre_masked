
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sway_transaction {int dummy; } ;
struct sway_node {int dirty; } ;
struct TYPE_6__ {int length; } ;
struct TYPE_5__ {TYPE_3__* transactions; TYPE_1__* dirty_nodes; } ;
struct TYPE_4__ {int length; struct sway_node** items; } ;


 int FUNC_0 (TYPE_3__*,struct sway_transaction*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (struct sway_transaction*,struct sway_node*) ;
 int FUNC_2 (struct sway_transaction*) ;
 struct sway_transaction* FUNC_3 () ;
 int FUNC_4 () ;

void FUNC_5(void) {
 if (!VAR_0.dirty_nodes->length) {
  return;
 }
 struct sway_transaction *VAR_1 = FUNC_3();
 if (!VAR_1) {
  return;
 }
 for (int VAR_2 = 0; VAR_2 < VAR_0.dirty_nodes->length; ++VAR_2) {
  struct sway_node *VAR_3 = VAR_0.dirty_nodes->items[VAR_2];
  FUNC_1(VAR_1, VAR_3);
  VAR_3->dirty = 0;
 }
 VAR_0.dirty_nodes->length = 0;

 FUNC_0(VAR_0.transactions, VAR_1);



 if (VAR_0.transactions->length == 1) {
  FUNC_2(VAR_1);


  FUNC_4();
 }
}

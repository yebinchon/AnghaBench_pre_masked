
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_transaction_instruction {scalar_t__ timer; TYPE_1__* instructions; struct sway_node* node; } ;
struct sway_transaction {scalar_t__ timer; TYPE_1__* instructions; struct sway_node* node; } ;
struct sway_node {scalar_t__ ntxnrefs; int type; int sway_container; int sway_workspace; int sway_output; scalar_t__ destroying; struct sway_transaction_instruction* instruction; } ;
struct TYPE_2__ {int length; struct sway_transaction_instruction** items; } ;






 int FUNC_0 (int ) ;
 int FUNC_1 (struct sway_transaction_instruction*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct sway_transaction *VAR_0) {

 for (int VAR_1 = 0; VAR_1 < VAR_0->instructions->length; ++VAR_1) {
  struct sway_transaction_instruction *VAR_2 =
   VAR_0->instructions->items[VAR_1];
  struct sway_node *VAR_3 = VAR_2->node;
  VAR_3->ntxnrefs--;
  if (VAR_3->instruction == VAR_2) {
   VAR_3->instruction = ((void*)0);
  }
  if (VAR_3->destroying && VAR_3->ntxnrefs == 0) {
   switch (VAR_3->type) {
   case 129:
    FUNC_4(0, "Never reached");
    break;
   case 130:
    FUNC_3(VAR_3->sway_output);
    break;
   case 128:
    FUNC_6(VAR_3->sway_workspace);
    break;
   case 131:
    FUNC_0(VAR_3->sway_container);
    break;
   }
  }
  FUNC_1(VAR_2);
 }
 FUNC_2(VAR_0->instructions);

 if (VAR_0->timer) {
  FUNC_5(VAR_0->timer);
 }
 FUNC_1(VAR_0);
}

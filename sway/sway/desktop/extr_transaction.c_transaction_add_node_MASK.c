
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_transaction_instruction {struct sway_node* node; struct sway_transaction* transaction; } ;
struct sway_transaction {int instructions; } ;
struct sway_node {int type; int ntxnrefs; int sway_container; int sway_workspace; int sway_output; } ;






 struct sway_transaction_instruction* FUNC_0 (int,int) ;
 int FUNC_1 (int ,struct sway_transaction_instruction*) ;
 int FUNC_2 (int ,struct sway_transaction_instruction*) ;
 int FUNC_3 (int ,struct sway_transaction_instruction*) ;
 int FUNC_4 (int ,struct sway_transaction_instruction*) ;
 int FUNC_5 (struct sway_transaction_instruction*,char*) ;

__attribute__((used)) static void FUNC_6(struct sway_transaction *VAR_0,
  struct sway_node *VAR_1) {
 struct sway_transaction_instruction *VAR_2 =
  FUNC_0(1, sizeof(struct sway_transaction_instruction));
 if (!FUNC_5(VAR_2, "Unable to allocate instruction")) {
  return;
 }
 VAR_2->transaction = VAR_0;
 VAR_2->node = VAR_1;

 switch (VAR_1->type) {
 case 129:
  break;
 case 130:
  FUNC_2(VAR_1->sway_output, VAR_2);
  break;
 case 128:
  FUNC_3(VAR_1->sway_workspace, VAR_2);
  break;
 case 131:
  FUNC_1(VAR_1->sway_container, VAR_2);
  break;
 }

 FUNC_4(VAR_0->instructions, VAR_2);
 VAR_1->ntxnrefs++;
}

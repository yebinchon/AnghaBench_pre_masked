
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_output_state {int active_workspace; int workspaces; } ;
struct sway_transaction_instruction {struct sway_output_state output_state; } ;
struct sway_output {int workspaces; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sway_output*) ;

__attribute__((used)) static void FUNC_3(struct sway_output *VAR_0,
  struct sway_transaction_instruction *VAR_1) {
 struct sway_output_state *VAR_2 = &VAR_1->output_state;
 VAR_2->workspaces = FUNC_0();
 FUNC_1(VAR_2->workspaces, VAR_0->workspaces);

 VAR_2->active_workspace = FUNC_2(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timespec {int tv_sec; double tv_nsec; } ;
struct sway_transaction_instruction {int container_state; int workspace_state; int output_state; struct sway_node* node; } ;
struct sway_transaction {TYPE_1__* instructions; struct timespec commit_time; } ;
struct sway_node {int type; int * instruction; int sway_container; int sway_workspace; int sway_output; } ;
struct TYPE_4__ {scalar_t__ txn_timings; } ;
struct TYPE_3__ {int length; struct sway_transaction_instruction** items; } ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,struct timespec*) ;
 int FUNC_4 () ;
 TYPE_2__ VAR_2 ;
 int FUNC_5 (int ,char*,struct sway_transaction*,...) ;

__attribute__((used)) static void FUNC_6(struct sway_transaction *VAR_3) {
 FUNC_5(VAR_1, "Applying transaction %p", VAR_3);
 if (VAR_2.txn_timings) {
  struct timespec VAR_4;
  FUNC_3(VAR_0, &VAR_4);
  struct timespec *VAR_5 = &VAR_3->commit_time;
  float VAR_6 = (VAR_4.tv_sec - VAR_5->tv_sec) * 1000 +
   (VAR_4.tv_nsec - VAR_5->tv_nsec) / 1000000.0;
  FUNC_5(VAR_1, "Transaction %p: %.1fms waiting "
    "(%.1f frames if 60Hz)", VAR_3, VAR_6, VAR_6 / (1000.0f / 60));
 }


 for (int VAR_7 = 0; VAR_7 < VAR_3->instructions->length; ++VAR_7) {
  struct sway_transaction_instruction *VAR_8 =
   VAR_3->instructions->items[VAR_7];
  struct sway_node *VAR_9 = VAR_8->node;

  switch (VAR_9->type) {
  case 129:
   break;
  case 130:
   FUNC_1(VAR_9->sway_output, &VAR_8->output_state);
   break;
  case 128:
   FUNC_2(VAR_9->sway_workspace,
     &VAR_8->workspace_state);
   break;
  case 131:
   FUNC_0(VAR_9->sway_container,
     &VAR_8->container_state);
   break;
  }

  VAR_9->instruction = ((void*)0);
 }

 FUNC_4();
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timespec {int tv_sec; double tv_nsec; } ;
struct sway_transaction_instruction {TYPE_2__* node; struct sway_transaction* transaction; } ;
struct sway_transaction {scalar_t__ num_configures; scalar_t__ num_waiting; int timer; struct timespec commit_time; } ;
struct TYPE_6__ {scalar_t__ txn_timings; } ;
struct TYPE_5__ {int * instruction; TYPE_1__* sway_container; } ;
struct TYPE_4__ {int title; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct timespec*) ;
 TYPE_3__ VAR_2 ;
 int FUNC_1 (int ,char*,struct sway_transaction*,...) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(
  struct sway_transaction_instruction *VAR_3) {
 struct sway_transaction *VAR_4 = VAR_3->transaction;

 if (VAR_2.txn_timings) {
  struct timespec VAR_5;
  FUNC_0(VAR_0, &VAR_5);
  struct timespec *VAR_6 = &VAR_4->commit_time;
  float VAR_7 = (VAR_5.tv_sec - VAR_6->tv_sec) * 1000 +
   (VAR_5.tv_nsec - VAR_6->tv_nsec) / 1000000.0;
  FUNC_1(VAR_1, "Transaction %p: %zi/%zi ready in %.1fms (%s)",
    VAR_4,
    VAR_4->num_configures - VAR_4->num_waiting + 1,
    VAR_4->num_configures, VAR_7,
    VAR_3->node->sway_container->title);
 }


 if (VAR_4->num_waiting > 0 && --VAR_4->num_waiting == 0) {
  FUNC_1(VAR_1, "Transaction %p is ready", VAR_4);
  FUNC_3(VAR_4->timer, 0);
 }

 VAR_3->node->instruction = ((void*)0);
 FUNC_2();
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct sway_view {TYPE_2__* container; } ;
struct sway_transaction_instruction {scalar_t__ serial; } ;
struct TYPE_3__ {struct sway_transaction_instruction* instruction; } ;
struct TYPE_4__ {TYPE_1__ node; } ;


 int FUNC_0 (struct sway_transaction_instruction*) ;

void FUNC_1(struct sway_view *VAR_0,
  uint32_t VAR_1) {
 struct sway_transaction_instruction *VAR_2 =
  VAR_0->container->node.instruction;
 if (VAR_2->serial == VAR_1) {
  FUNC_0(VAR_2);
 }
}

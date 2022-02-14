
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sway_view {TYPE_2__* container; } ;
struct TYPE_6__ {int content_width; int content_height; } ;
struct sway_transaction_instruction {TYPE_3__ container_state; } ;
struct TYPE_4__ {struct sway_transaction_instruction* instruction; } ;
struct TYPE_5__ {TYPE_1__ node; } ;


 int FUNC_0 (struct sway_transaction_instruction*) ;

void FUNC_1(struct sway_view *VAR_0,
  int VAR_1, int VAR_2) {
 struct sway_transaction_instruction *VAR_3 =
  VAR_0->container->node.instruction;
 if (VAR_3->container_state.content_width == VAR_1 &&
   VAR_3->container_state.content_height == VAR_2) {
  FUNC_0(VAR_3);
 }
}

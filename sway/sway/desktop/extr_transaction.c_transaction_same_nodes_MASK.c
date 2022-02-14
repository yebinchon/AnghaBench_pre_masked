
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_transaction_instruction {scalar_t__ node; } ;
struct sway_transaction {TYPE_1__* instructions; } ;
struct TYPE_2__ {scalar_t__ length; struct sway_transaction_instruction** items; } ;



__attribute__((used)) static bool FUNC_0(struct sway_transaction *VAR_0,
  struct sway_transaction *VAR_1) {
 if (VAR_0->instructions->length != VAR_1->instructions->length) {
  return 0;
 }
 for (int VAR_2 = 0; VAR_2 < VAR_0->instructions->length; ++VAR_2) {
  struct sway_transaction_instruction *VAR_3 = VAR_0->instructions->items[VAR_2];
  struct sway_transaction_instruction *VAR_4 = VAR_1->instructions->items[VAR_2];
  if (VAR_3->node != VAR_4->node) {
   return 0;
  }
 }
 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_transaction {scalar_t__ num_waiting; } ;
struct TYPE_4__ {int length; struct sway_transaction** items; } ;
struct TYPE_3__ {TYPE_2__* transactions; int idle_inhibit_manager_v1; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sway_transaction*) ;
 int FUNC_3 (struct sway_transaction*) ;
 int FUNC_4 (struct sway_transaction*) ;
 scalar_t__ FUNC_5 (struct sway_transaction*,struct sway_transaction*) ;

__attribute__((used)) static void FUNC_6(void) {
 if (!VAR_0.transactions->length) {
  return;
 }


 struct sway_transaction *VAR_1 = VAR_0.transactions->items[0];
 if (VAR_1->num_waiting) {
  return;
 }
 FUNC_2(VAR_1);
 FUNC_4(VAR_1);
 FUNC_0(VAR_0.transactions, 0);

 if (!VAR_0.transactions->length) {
  FUNC_1(VAR_0.idle_inhibit_manager_v1);
  return;
 }



 while (VAR_0.transactions->length >= 2) {
  struct sway_transaction *VAR_2 = VAR_0.transactions->items[0];
  struct sway_transaction *VAR_3 = VAR_0.transactions->items[1];
  if (FUNC_5(VAR_2, VAR_3)) {
   FUNC_0(VAR_0.transactions, 0);
   FUNC_4(VAR_2);
  } else {
   break;
  }
 }

 VAR_1 = VAR_0.transactions->items[0];
 FUNC_3(VAR_1);
 FUNC_6();
}

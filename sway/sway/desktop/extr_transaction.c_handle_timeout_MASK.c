
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_transaction {scalar_t__ num_waiting; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct sway_transaction*,scalar_t__) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(void *VAR_1) {
 struct sway_transaction *VAR_2 = VAR_1;
 FUNC_0(VAR_0, "Transaction %p timed out (%zi waiting)",
   VAR_2, VAR_2->num_waiting);
 VAR_2->num_waiting = 0;
 FUNC_1();
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int init; int handle_key; scalar_t__ monitor_exit; scalar_t__ total; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;

void
FUNC_4(void) {
 VAR_0.total = 0;
 VAR_0.monitor_exit = 0;
 VAR_0.init = 1;
 if (FUNC_2(&VAR_0.handle_key, ((void*)0))) {
  FUNC_1(VAR_2, "pthread_key_create failed");
  FUNC_0(1);
 }

 FUNC_3(VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sigaction {int sa_handler; scalar_t__ sa_flags; int sa_mask; } ;
struct TYPE_2__ {scalar_t__ watchdog_period; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int ,struct sigaction*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

void FUNC_3(void) {
    struct sigaction VAR_3;
    if (VAR_2.watchdog_period == 0) return;
    FUNC_2(0);



    FUNC_1(&VAR_3.sa_mask);
    VAR_3.sa_flags = 0;
    VAR_3.sa_handler = VAR_1;
    FUNC_0(VAR_0, &VAR_3, ((void*)0));
    VAR_2.watchdog_period = 0;
}

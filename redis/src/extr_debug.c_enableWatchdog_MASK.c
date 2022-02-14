
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sigaction {int sa_flags; int sa_sigaction; int sa_mask; } ;
struct TYPE_2__ {int watchdog_period; int hz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int ,struct sigaction*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int VAR_4 ;

void FUNC_3(int VAR_5) {
    int VAR_6;

    if (VAR_3.watchdog_period == 0) {
        struct sigaction VAR_7;



        FUNC_1(&VAR_7.sa_mask);
        VAR_7.sa_flags = VAR_0 | VAR_1;
        VAR_7.sa_sigaction = VAR_4;
        FUNC_0(VAR_2, &VAR_7, ((void*)0));
    }



    VAR_6 = (1000/VAR_3.hz)*2;
    if (VAR_5 < VAR_6) VAR_5 = VAR_6;
    FUNC_2(VAR_5);
    VAR_3.watchdog_period = VAR_5;
}

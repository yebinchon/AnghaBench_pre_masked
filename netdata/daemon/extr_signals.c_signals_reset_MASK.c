
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sigaction {scalar_t__ sa_flags; int sa_handler; int sa_mask; } ;
struct TYPE_2__ {scalar_t__ action; int name; int signo; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (int ,struct sigaction*,int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_3 ;

void FUNC_4(void) {
    struct sigaction VAR_4;
    FUNC_3(&VAR_4.sa_mask);
    VAR_4.sa_handler = VAR_1;
    VAR_4.sa_flags = 0;

    int VAR_5;
    for (VAR_5 = 0; VAR_3[VAR_5].action != VAR_0; VAR_5++) {
        if(FUNC_2(VAR_3[VAR_5].signo, &VAR_4, ((void*)0)) == -1)
            FUNC_0("SIGNAL: Failed to reset signal handler for: %s", VAR_3[VAR_5].name);
    }

    if (VAR_2 == 1)
        FUNC_1();
}

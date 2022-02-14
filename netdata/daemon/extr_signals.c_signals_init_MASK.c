
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sigaction {int sa_handler; int sa_mask; scalar_t__ sa_flags; } ;
struct TYPE_2__ {int action; int name; int signo; } ;



 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (int ,struct sigaction*,int *) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

void FUNC_6(void) {

    struct sigaction VAR_5;
    VAR_5.sa_flags = 0;



    if (FUNC_1() == 1) {
        FUNC_2("SIGNAL: Enabling reaper");
        FUNC_3();
        VAR_2 = 1;
    } else {
        FUNC_2("SIGNAL: Not enabling reaper");
    }


    FUNC_5(&VAR_5.sa_mask);

    int VAR_6;
    for (VAR_6 = 0; VAR_4[VAR_6].action != VAR_0; VAR_6++) {
        switch (VAR_4[VAR_6].action) {
        case 128:
            VAR_5.sa_handler = VAR_1;
            break;
        case 129:
            if (VAR_2 == 0)
                continue;

        default:
            VAR_5.sa_handler = VAR_3;
            break;
        }

        if(FUNC_4(VAR_4[VAR_6].signo, &VAR_5, ((void*)0)) == -1)
            FUNC_0("SIGNAL: Failed to change signal handler for: %s", VAR_4[VAR_6].name);
    }
}

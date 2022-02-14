
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_flags; int sa_sigaction; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,struct sigaction*,int *) ;
 int VAR_4 ;

void FUNC_3(void) {
        struct sigaction VAR_5 = {
                .sa_sigaction = VAR_4,
                .sa_flags = VAR_0,
        };



        (void) FUNC_1();

        VAR_2++;

        if (VAR_2 == 1)
                FUNC_0(FUNC_2(VAR_1, &VAR_5, &VAR_3) == 0);

        return;
}

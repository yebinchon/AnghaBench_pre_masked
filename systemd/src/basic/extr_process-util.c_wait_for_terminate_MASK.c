
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int siginfo_t ;
typedef int pid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int,int *,int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(pid_t VAR_4, siginfo_t *VAR_5) {
        siginfo_t VAR_6;

        FUNC_0(VAR_4 >= 1);

        if (!VAR_5)
                VAR_5 = &VAR_6;

        for (;;) {
                FUNC_3(*VAR_5);

                if (FUNC_2(VAR_1, VAR_4, VAR_5, VAR_2) < 0) {

                        if (VAR_3 == VAR_0)
                                continue;

                        return FUNC_1();
                }

                return 0;
        }
}

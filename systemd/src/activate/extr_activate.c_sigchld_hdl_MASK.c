
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ si_pid; int si_status; } ;
typedef TYPE_1__ siginfo_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__,char*) ;
 int FUNC_1 (char*,scalar_t__,int ) ;
 int FUNC_2 (int ,int ,TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_3(int VAR_6) {
        VAR_1;

        for (;;) {
                siginfo_t VAR_7;
                int VAR_8;

                VAR_7.si_pid = 0;
                VAR_8 = FUNC_2(VAR_2, 0, &VAR_7, VAR_3 | VAR_4);
                if (VAR_8 < 0) {
                        if (VAR_5 != VAR_0)
                                FUNC_0(VAR_5, "Failed to reap children: %m");
                        return;
                }
                if (VAR_7.si_pid == 0)
                        return;

                FUNC_1("Child %d died with code %d", VAR_7.si_pid, VAR_7.si_status);
        }
}

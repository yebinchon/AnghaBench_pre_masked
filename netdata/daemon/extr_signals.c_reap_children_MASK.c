
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ si_pid; } ;
typedef TYPE_1__ siginfo_t ;
typedef int id_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_5() {
    siginfo_t VAR_6;

    while (1 == 1) {


        VAR_6.si_pid = 0;
        if (FUNC_4(VAR_1, (id_t)0, &VAR_6, VAR_2|VAR_3|VAR_4) == -1) {
            if (VAR_5 != VAR_0)
                FUNC_0("SIGNAL: Failed to wait");
            return;
        } else if (VAR_6.si_pid == 0) {

            return;
        } else if (FUNC_1(VAR_6.si_pid) == 0) {


            FUNC_3(10000);
        } else {

            FUNC_2(VAR_6.si_pid);
        }
    }
}

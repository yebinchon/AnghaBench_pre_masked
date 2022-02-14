
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ si_pid; int si_code; int si_status; } ;
typedef TYPE_1__ siginfo_t ;
typedef scalar_t__ pid_t ;
typedef int id_t ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,scalar_t__,...) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (int ,int ,TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_3(pid_t VAR_6) {
    siginfo_t VAR_7;

    VAR_5 = 0;
    FUNC_0(VAR_0, "SIGNAL: Reaping pid: %d...", VAR_6);
    if (FUNC_2(VAR_2, (id_t)VAR_6, &VAR_7, VAR_3|VAR_4) == -1) {
        if (VAR_5 != VAR_1)
            FUNC_1("SIGNAL: Failed to wait for: %d", VAR_6);
        else
            FUNC_0(VAR_0, "SIGNAL: Already reaped: %d", VAR_6);
        return;
    } else if (VAR_7.si_pid == 0) {

        return;
    }

    switch (VAR_7.si_code) {
    case 131:
        FUNC_0(VAR_0, "SIGNAL: Child %d exited: %d", VAR_6, VAR_7.si_status);
        break;
    case 130:
        FUNC_0(VAR_0, "SIGNAL: Child %d killed by signal: %d", VAR_6, VAR_7.si_status);
        break;
    case 132:
        FUNC_0(VAR_0, "SIGNAL: Child %d dumped core by signal: %d", VAR_6, VAR_7.si_status);
        break;
    case 129:
        FUNC_0(VAR_0, "SIGNAL: Child %d stopped by signal: %d", VAR_6, VAR_7.si_status);
        break;
    case 128:
        FUNC_0(VAR_0, "SIGNAL: Child %d trapped by signal: %d", VAR_6, VAR_7.si_status);
        break;
    case 133:
        FUNC_0(VAR_0, "SIGNAL: Child %d continued by signal: %d", VAR_6, VAR_7.si_status);
        break;
    default:
        FUNC_0(VAR_0, "SIGNAL: Child %d gave us a SIGCHLD with code %d and status %d.", VAR_6, VAR_7.si_code, VAR_7.si_status);
    }
}

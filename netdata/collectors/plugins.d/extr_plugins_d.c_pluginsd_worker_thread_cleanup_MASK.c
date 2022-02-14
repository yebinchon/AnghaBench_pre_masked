
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plugind {int obsolete; scalar_t__ pid; scalar_t__ enabled; } ;
typedef int (* siginfo_t ) (char*,scalar_t__) ;
typedef int id_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int (*) (char*,scalar_t__),int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_2) {
    struct plugind *VAR_3 = (struct plugind *)VAR_2;

    if(VAR_3->enabled && !VAR_3->obsolete) {
        VAR_3->obsolete = 1;

        FUNC_0("data collection thread exiting");

        if (VAR_3->pid) {
            siginfo_t VAR_4;
            VAR_4("killing child process pid %d", VAR_3->pid);
            if (FUNC_1(VAR_3->pid) != -1) {
                VAR_4("waiting for child process pid %d to exit...", VAR_3->pid);
                FUNC_2(VAR_0, (id_t) VAR_3->pid, VAR_4, VAR_1);
            }
            VAR_3->pid = 0;
        }
    }
}

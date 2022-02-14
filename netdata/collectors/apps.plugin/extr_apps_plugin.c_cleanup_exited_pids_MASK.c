
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pid_stat {int keep; scalar_t__ keeploops; size_t fds_size; struct pid_stat* next; int pid; TYPE_1__* fds; int comm; int updated; } ;
typedef int pid_t ;
struct TYPE_2__ {scalar_t__ fd; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 struct pid_stat* VAR_1 ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(void) {
    size_t VAR_2;
    struct pid_stat *VAR_3 = ((void*)0);

    for(VAR_3 = VAR_1; VAR_3 ;) {
        if(!VAR_3->updated && (!VAR_3->keep || VAR_3->keeploops > 0)) {
            if(FUNC_4(VAR_0 && (VAR_3->keep || VAR_3->keeploops)))
                FUNC_1(" > CLEANUP cannot keep exited process %d (%s) anymore - removing it.", VAR_3->pid, VAR_3->comm);

            for(VAR_2 = 0; VAR_2 < VAR_3->fds_size; VAR_2++)
                if(VAR_3->fds[VAR_2].fd > 0) {
                    FUNC_3(VAR_3->fds[VAR_2].fd);
                    FUNC_0(&VAR_3->fds[VAR_2]);
                }

            pid_t VAR_4 = VAR_3->pid;
            VAR_3 = VAR_3->next;
            FUNC_2(VAR_4);
        }
        else {
            if(FUNC_4(VAR_3->keep)) VAR_3->keeploops++;
            VAR_3->keep = 0;
            VAR_3 = VAR_3->next;
        }
    }
}

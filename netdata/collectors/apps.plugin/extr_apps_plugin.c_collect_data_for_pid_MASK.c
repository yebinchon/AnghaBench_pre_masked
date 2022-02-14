
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pid_stat {int read; scalar_t__ ppid; char* comm; int updated; scalar_t__ keeploops; scalar_t__ keep; int sortlist; int pid; } ;
typedef scalar_t__ pid_t ;
struct TYPE_2__ {int sortlist; int comm; int pid; int read; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__** VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,int ,char*,int ,int ,int ,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (char*,scalar_t__,char*,scalar_t__) ;
 struct pid_stat* FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (struct pid_stat*,int ,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (struct pid_stat*,void*) ;
 int FUNC_5 (struct pid_stat*,void*) ;
 int FUNC_6 (struct pid_stat*,void*) ;
 int FUNC_7 (struct pid_stat*,void*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static inline int FUNC_9(pid_t VAR_10, void *VAR_11) {
    if(FUNC_8(VAR_10 < 0 || VAR_10 > VAR_9)) {
        FUNC_1("Invalid pid %d read (expected %d to %d). Ignoring process.", VAR_10, 0, VAR_9);
        return 0;
    }

    struct pid_stat *VAR_12 = FUNC_2(VAR_10);
    if(FUNC_8(!VAR_12 || VAR_12->read)) return 0;
    VAR_12->read = 1;






    if(FUNC_8(!FUNC_3(VAR_12, VAR_2, FUNC_6(VAR_12, VAR_11))))

        return 0;


    if(FUNC_8(VAR_12->ppid < 0 || VAR_12->ppid > VAR_9)) {
        FUNC_1("Pid %d (command '%s') states invalid parent pid %d. Using 0.", VAR_10, VAR_12->comm, VAR_12->ppid);
        VAR_12->ppid = 0;
    }




    FUNC_3(VAR_12, VAR_1, FUNC_5(VAR_12, VAR_11));




    if(FUNC_8(!FUNC_3(VAR_12, VAR_3, FUNC_7(VAR_12, VAR_11))))

        return 0;




    if(VAR_7)
            FUNC_3(VAR_12, VAR_0, FUNC_4(VAR_12, VAR_11));




    if(FUNC_8(VAR_6 && VAR_8 && VAR_5 && VAR_12->ppid && VAR_4[VAR_12->ppid] && !VAR_4[VAR_12->ppid]->read))
        FUNC_0("Read process %d (%s) sortlisted %d, but its parent %d (%s) sortlisted %d, is not read", VAR_12->pid, VAR_12->comm, VAR_12->sortlist, VAR_4[VAR_12->ppid]->pid, VAR_4[VAR_12->ppid]->comm, VAR_4[VAR_12->ppid]->sortlist);


    VAR_12->updated = 1;
    VAR_12->keep = 0;
    VAR_12->keeploops = 0;

    return 1;
}

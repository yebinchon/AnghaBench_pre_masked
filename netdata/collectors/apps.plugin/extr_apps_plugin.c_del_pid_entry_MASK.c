
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pid_stat {size_t fds_size; struct pid_stat* cmdline; struct pid_stat* cmdline_filename; struct pid_stat* io_filename; int status_arl; struct pid_stat* status_filename; struct pid_stat* stat_filename; struct pid_stat* fds_dirname; struct pid_stat* fds; struct pid_stat* filename; struct pid_stat* next; TYPE_1__* prev; int comm; } ;
typedef size_t pid_t ;
struct TYPE_2__ {struct pid_stat* next; } ;


 struct pid_stat** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,size_t,int ) ;
 int FUNC_2 (char*,size_t) ;
 int FUNC_3 (struct pid_stat*) ;
 struct pid_stat* VAR_2 ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static inline void FUNC_5(pid_t VAR_3) {
    struct pid_stat *VAR_4 = VAR_0[VAR_3];

    if(FUNC_4(!VAR_4)) {
        FUNC_2("attempted to free pid %d that is not allocated.", VAR_3);
        return;
    }

    FUNC_1("process %d %s exited, deleting it.", VAR_3, VAR_4->comm);

    if(VAR_2 == VAR_4)
        VAR_2 = VAR_4->next;

    if(VAR_4->next) VAR_4->next->prev = VAR_4->prev;
    if(VAR_4->prev) VAR_4->prev->next = VAR_4->next;



    {
        size_t VAR_5;
        for(VAR_5 = 0; VAR_5 < VAR_4->fds_size; VAR_5++)
            if(VAR_4->fds[VAR_5].filename)
                FUNC_3(VAR_4->fds[VAR_5].filename);
    }

    FUNC_3(VAR_4->fds);

    FUNC_3(VAR_4->fds_dirname);
    FUNC_3(VAR_4->stat_filename);
    FUNC_3(VAR_4->status_filename);

    FUNC_0(VAR_4->status_arl);

    FUNC_3(VAR_4->io_filename);
    FUNC_3(VAR_4->cmdline_filename);
    FUNC_3(VAR_4->cmdline);
    FUNC_3(VAR_4);

    VAR_0[VAR_3] = ((void*)0);
    VAR_1--;
}

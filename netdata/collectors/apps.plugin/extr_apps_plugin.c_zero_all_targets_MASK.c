
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target {int target_fds_size; struct pid_on_target* root_pid; scalar_t__ uptime_max; scalar_t__ uptime_sum; scalar_t__ uptime_min; scalar_t__ collected_starttime; scalar_t__ openother; scalar_t__ openeventpolls; scalar_t__ opensignalfds; scalar_t__ opentimerfds; scalar_t__ openeventfds; scalar_t__ openinotifies; scalar_t__ opensockets; scalar_t__ openpipes; scalar_t__ openfiles; scalar_t__ target_fds; scalar_t__ io_storage_bytes_written; scalar_t__ io_storage_bytes_read; scalar_t__ io_logical_bytes_written; scalar_t__ io_logical_bytes_read; scalar_t__ status_vmswap; scalar_t__ status_rssshmem; scalar_t__ status_rssfile; scalar_t__ status_vmshared; scalar_t__ status_vmrss; scalar_t__ status_vmsize; scalar_t__ processes; scalar_t__ num_threads; scalar_t__ cgtime; scalar_t__ cstime; scalar_t__ cutime; scalar_t__ cmajflt; scalar_t__ cminflt; scalar_t__ gtime; scalar_t__ stime; scalar_t__ utime; scalar_t__ majflt; scalar_t__ minflt; struct target* next; } ;
struct pid_on_target {struct pid_on_target* next; } ;


 int FUNC_0 (struct pid_on_target*) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_2 (struct pid_on_target*) ;

__attribute__((used)) static size_t FUNC_3(struct target *VAR_0) {
    struct target *VAR_1;
    size_t VAR_2 = 0;

    for (VAR_1 = VAR_0; VAR_1 ; VAR_1 = VAR_1->next) {
        VAR_2++;

        VAR_1->minflt = 0;
        VAR_1->majflt = 0;
        VAR_1->utime = 0;
        VAR_1->stime = 0;
        VAR_1->gtime = 0;
        VAR_1->cminflt = 0;
        VAR_1->cmajflt = 0;
        VAR_1->cutime = 0;
        VAR_1->cstime = 0;
        VAR_1->cgtime = 0;
        VAR_1->num_threads = 0;

        VAR_1->processes = 0;

        VAR_1->status_vmsize = 0;
        VAR_1->status_vmrss = 0;
        VAR_1->status_vmshared = 0;
        VAR_1->status_rssfile = 0;
        VAR_1->status_rssshmem = 0;
        VAR_1->status_vmswap = 0;

        VAR_1->io_logical_bytes_read = 0;
        VAR_1->io_logical_bytes_written = 0;


        VAR_1->io_storage_bytes_read = 0;
        VAR_1->io_storage_bytes_written = 0;



        if(VAR_1->target_fds) {
            FUNC_1(VAR_1->target_fds, 0, sizeof(int) * VAR_1->target_fds_size);
            VAR_1->openfiles = 0;
            VAR_1->openpipes = 0;
            VAR_1->opensockets = 0;
            VAR_1->openinotifies = 0;
            VAR_1->openeventfds = 0;
            VAR_1->opentimerfds = 0;
            VAR_1->opensignalfds = 0;
            VAR_1->openeventpolls = 0;
            VAR_1->openother = 0;
        }

        VAR_1->collected_starttime = 0;
        VAR_1->uptime_min = 0;
        VAR_1->uptime_sum = 0;
        VAR_1->uptime_max = 0;

        if(FUNC_2(VAR_1->root_pid)) {
            struct pid_on_target *VAR_3, *VAR_4 = VAR_1->root_pid;

            while(VAR_4) {
                VAR_3 = VAR_4;
                VAR_4 = VAR_4->next;
                FUNC_0(VAR_3);
            }

            VAR_1->root_pid = ((void*)0);
        }
    }

    return VAR_2;
}

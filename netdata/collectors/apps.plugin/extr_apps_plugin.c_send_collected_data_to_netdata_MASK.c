
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
struct target {unsigned long long processes; int utime; int stime; int gtime; int cutime; int cstime; int cgtime; unsigned long long num_threads; scalar_t__ starttime; unsigned long long uptime_min; unsigned long long uptime_sum; unsigned long long uptime_max; scalar_t__ status_vmrss; scalar_t__ status_vmshared; unsigned long long status_vmsize; unsigned long long status_vmswap; int minflt; int cminflt; int majflt; int cmajflt; unsigned long long io_logical_bytes_read; unsigned long long io_logical_bytes_written; unsigned long long io_storage_bytes_read; unsigned long long io_storage_bytes_written; unsigned long long openfiles; unsigned long long opensockets; unsigned long long openpipes; int name; scalar_t__ exposed; struct target* next; } ;
typedef unsigned long long kernel_uint_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char const*,char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,unsigned long long) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_4(struct target *VAR_14, const char *VAR_15, usec_t VAR_16) {
    struct target *VAR_17;

    FUNC_0(VAR_15, "cpu", VAR_16);
    for (VAR_17 = VAR_14; VAR_17 ; VAR_17 = VAR_17->next) {
        if(FUNC_3(VAR_17->exposed && VAR_17->processes))
            FUNC_2(VAR_17->name, (kernel_uint_t)(VAR_17->utime * VAR_13) + (kernel_uint_t)(VAR_17->stime * VAR_12) + (kernel_uint_t)(VAR_17->gtime * VAR_7) + (VAR_8?((kernel_uint_t)(VAR_17->cutime * VAR_4) + (kernel_uint_t)(VAR_17->cstime * VAR_3) + (kernel_uint_t)(VAR_17->cgtime * VAR_0)):0ULL));
    }
    FUNC_1();

    FUNC_0(VAR_15, "cpu_user", VAR_16);
    for (VAR_17 = VAR_14; VAR_17 ; VAR_17 = VAR_17->next) {
        if(FUNC_3(VAR_17->exposed && VAR_17->processes))
            FUNC_2(VAR_17->name, (kernel_uint_t)(VAR_17->utime * VAR_13) + (VAR_8?((kernel_uint_t)(VAR_17->cutime * VAR_4)):0ULL));
    }
    FUNC_1();

    FUNC_0(VAR_15, "cpu_system", VAR_16);
    for (VAR_17 = VAR_14; VAR_17 ; VAR_17 = VAR_17->next) {
        if(FUNC_3(VAR_17->exposed && VAR_17->processes))
            FUNC_2(VAR_17->name, (kernel_uint_t)(VAR_17->stime * VAR_12) + (VAR_8?((kernel_uint_t)(VAR_17->cstime * VAR_3)):0ULL));
    }
    FUNC_1();

    if(VAR_11) {
        FUNC_0(VAR_15, "cpu_guest", VAR_16);
        for (VAR_17 = VAR_14; VAR_17 ; VAR_17 = VAR_17->next) {
            if(FUNC_3(VAR_17->exposed && VAR_17->processes))
                FUNC_2(VAR_17->name, (kernel_uint_t)(VAR_17->gtime * VAR_7) + (VAR_8?((kernel_uint_t)(VAR_17->cgtime * VAR_0)):0ULL));
        }
        FUNC_1();
    }

    FUNC_0(VAR_15, "threads", VAR_16);
    for (VAR_17 = VAR_14; VAR_17 ; VAR_17 = VAR_17->next) {
        if(FUNC_3(VAR_17->exposed && VAR_17->processes))
            FUNC_2(VAR_17->name, VAR_17->num_threads);
    }
    FUNC_1();

    FUNC_0(VAR_15, "processes", VAR_16);
    for (VAR_17 = VAR_14; VAR_17 ; VAR_17 = VAR_17->next) {
        if(FUNC_3(VAR_17->exposed && VAR_17->processes))
            FUNC_2(VAR_17->name, VAR_17->processes);
    }
    FUNC_1();


    FUNC_0(VAR_15, "uptime", VAR_16);
    for (VAR_17 = VAR_14; VAR_17 ; VAR_17 = VAR_17->next) {
        if(FUNC_3(VAR_17->exposed && VAR_17->processes))
            FUNC_2(VAR_17->name, (VAR_6 > VAR_17->starttime)?(VAR_6 - VAR_17->starttime):0);
    }
    FUNC_1();

    FUNC_0(VAR_15, "uptime_min", VAR_16);
    for (VAR_17 = VAR_14; VAR_17 ; VAR_17 = VAR_17->next) {
        if(FUNC_3(VAR_17->exposed && VAR_17->processes))
            FUNC_2(VAR_17->name, VAR_17->uptime_min);
    }
    FUNC_1();

    FUNC_0(VAR_15, "uptime_avg", VAR_16);
    for (VAR_17 = VAR_14; VAR_17 ; VAR_17 = VAR_17->next) {
        if(FUNC_3(VAR_17->exposed && VAR_17->processes))
            FUNC_2(VAR_17->name, VAR_17->uptime_sum / VAR_17->processes);
    }
    FUNC_1();

    FUNC_0(VAR_15, "uptime_max", VAR_16);
    for (VAR_17 = VAR_14; VAR_17 ; VAR_17 = VAR_17->next) {
        if(FUNC_3(VAR_17->exposed && VAR_17->processes))
            FUNC_2(VAR_17->name, VAR_17->uptime_max);
    }
    FUNC_1();


    FUNC_0(VAR_15, "mem", VAR_16);
    for (VAR_17 = VAR_14; VAR_17 ; VAR_17 = VAR_17->next) {
        if(FUNC_3(VAR_17->exposed && VAR_17->processes))
            FUNC_2(VAR_17->name, (VAR_17->status_vmrss > VAR_17->status_vmshared)?(VAR_17->status_vmrss - VAR_17->status_vmshared):0ULL);
    }
    FUNC_1();

    FUNC_0(VAR_15, "vmem", VAR_16);
    for (VAR_17 = VAR_14; VAR_17 ; VAR_17 = VAR_17->next) {
        if(FUNC_3(VAR_17->exposed && VAR_17->processes))
            FUNC_2(VAR_17->name, VAR_17->status_vmsize);
    }
    FUNC_1();


    FUNC_0(VAR_15, "swap", VAR_16);
    for (VAR_17 = VAR_14; VAR_17 ; VAR_17 = VAR_17->next) {
        if(FUNC_3(VAR_17->exposed && VAR_17->processes))
            FUNC_2(VAR_17->name, VAR_17->status_vmswap);
    }
    FUNC_1();


    FUNC_0(VAR_15, "minor_faults", VAR_16);
    for (VAR_17 = VAR_14; VAR_17 ; VAR_17 = VAR_17->next) {
        if(FUNC_3(VAR_17->exposed && VAR_17->processes))
            FUNC_2(VAR_17->name, (kernel_uint_t)(VAR_17->minflt * VAR_10) + (VAR_8?((kernel_uint_t)(VAR_17->cminflt * VAR_2)):0ULL));
    }
    FUNC_1();

    FUNC_0(VAR_15, "major_faults", VAR_16);
    for (VAR_17 = VAR_14; VAR_17 ; VAR_17 = VAR_17->next) {
        if(FUNC_3(VAR_17->exposed && VAR_17->processes))
            FUNC_2(VAR_17->name, (kernel_uint_t)(VAR_17->majflt * VAR_9) + (VAR_8?((kernel_uint_t)(VAR_17->cmajflt * VAR_1)):0ULL));
    }
    FUNC_1();


    FUNC_0(VAR_15, "lreads", VAR_16);
    for (VAR_17 = VAR_14; VAR_17 ; VAR_17 = VAR_17->next) {
        if(FUNC_3(VAR_17->exposed && VAR_17->processes))
            FUNC_2(VAR_17->name, VAR_17->io_logical_bytes_read);
    }
    FUNC_1();

    FUNC_0(VAR_15, "lwrites", VAR_16);
    for (VAR_17 = VAR_14; VAR_17 ; VAR_17 = VAR_17->next) {
        if(FUNC_3(VAR_17->exposed && VAR_17->processes))
            FUNC_2(VAR_17->name, VAR_17->io_logical_bytes_written);
    }
    FUNC_1();


    FUNC_0(VAR_15, "preads", VAR_16);
    for (VAR_17 = VAR_14; VAR_17 ; VAR_17 = VAR_17->next) {
        if(FUNC_3(VAR_17->exposed && VAR_17->processes))
            FUNC_2(VAR_17->name, VAR_17->io_storage_bytes_read);
    }
    FUNC_1();

    FUNC_0(VAR_15, "pwrites", VAR_16);
    for (VAR_17 = VAR_14; VAR_17 ; VAR_17 = VAR_17->next) {
        if(FUNC_3(VAR_17->exposed && VAR_17->processes))
            FUNC_2(VAR_17->name, VAR_17->io_storage_bytes_written);
    }
    FUNC_1();

    if(VAR_5) {
        FUNC_0(VAR_15, "files", VAR_16);
        for (VAR_17 = VAR_14; VAR_17; VAR_17 = VAR_17->next) {
            if (FUNC_3(VAR_17->exposed && VAR_17->processes))
                FUNC_2(VAR_17->name, VAR_17->openfiles);
        }
        FUNC_1();

        FUNC_0(VAR_15, "sockets", VAR_16);
        for (VAR_17 = VAR_14; VAR_17; VAR_17 = VAR_17->next) {
            if (FUNC_3(VAR_17->exposed && VAR_17->processes))
                FUNC_2(VAR_17->name, VAR_17->opensockets);
        }
        FUNC_1();

        FUNC_0(VAR_15, "pipes", VAR_16);
        for (VAR_17 = VAR_14; VAR_17; VAR_17 = VAR_17->next) {
            if (FUNC_3(VAR_17->exposed && VAR_17->processes))
                FUNC_2(VAR_17->name, VAR_17->openpipes);
        }
        FUNC_1();
    }
}

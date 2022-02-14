
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int usec_t ;
struct TYPE_4__ {int tv_sec; int tv_usec; } ;
struct TYPE_3__ {int tv_sec; int tv_usec; } ;
struct timeval {TYPE_2__ ru_stime; TYPE_1__ ru_utime; int tv_sec; int member_1; int member_0; } ;
struct rusage {TYPE_2__ ru_stime; TYPE_1__ ru_utime; int tv_sec; int member_1; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ,struct timeval*) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (struct timeval*,struct timeval*,int) ;
 int VAR_19 ;
 int FUNC_3 (struct timeval*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_23 ;
 int VAR_24 ;

void FUNC_5(usec_t VAR_25) {
    static struct timeval VAR_26 = { 0, 0 };
    static struct rusage VAR_27;

    struct timeval VAR_28;
    struct rusage VAR_29;

    usec_t VAR_30;
    usec_t VAR_31;

    if(!VAR_26.tv_sec) {
        FUNC_3(&VAR_26);
        FUNC_1(VAR_1, &VAR_27);

        VAR_30 = 0;
        VAR_31 = 0;
    }
    else {
        FUNC_3(&VAR_28);
        FUNC_1(VAR_1, &VAR_29);

        VAR_30 = VAR_29.ru_utime.tv_sec * VAR_2 + VAR_29.ru_utime.tv_usec;
        VAR_31 = VAR_29.ru_stime.tv_sec * VAR_2 + VAR_29.ru_stime.tv_usec;

        FUNC_2(&VAR_26, &VAR_28, sizeof(struct timeval));
        FUNC_2(&VAR_27, &VAR_29, sizeof(struct rusage));
    }

    static char VAR_32 = 0;
    if(FUNC_4(!VAR_32)) {
        VAR_32 = 1;

        FUNC_0(VAR_20,
                "CHART netdata.apps_cpu '' 'Apps Plugin CPU' 'milliseconds/s' apps.plugin netdata.apps_cpu stacked 140000 %1$d\n"
                "DIMENSION user '' incremental 1 1000\n"
                "DIMENSION system '' incremental 1 1000\n"
                "CHART netdata.apps_sizes '' 'Apps Plugin Files' 'files/s' apps.plugin netdata.apps_sizes line 140001 %1$d\n"
                "DIMENSION calls '' incremental 1 1\n"
                "DIMENSION files '' incremental 1 1\n"
                "DIMENSION filenames '' incremental 1 1\n"
                "DIMENSION inode_changes '' incremental 1 1\n"
                "DIMENSION link_changes '' incremental 1 1\n"
                "DIMENSION pids '' absolute 1 1\n"
                "DIMENSION fds '' absolute 1 1\n"
                "DIMENSION targets '' absolute 1 1\n"
                "DIMENSION new_pids 'new pids' incremental 1 1\n"
                , VAR_23
        );

        FUNC_0(VAR_20,
                "CHART netdata.apps_fix '' 'Apps Plugin Normalization Ratios' 'percentage' apps.plugin netdata.apps_fix line 140002 %1$d\n"
                "DIMENSION utime '' absolute 1 %2$llu\n"
                "DIMENSION stime '' absolute 1 %2$llu\n"
                "DIMENSION gtime '' absolute 1 %2$llu\n"
                "DIMENSION minflt '' absolute 1 %2$d\n"
                "DIMENSION majflt '' absolute 1 %2$llu\n"
                , VAR_23
                , VAR_0
        );

        if(VAR_15)
            FUNC_0(VAR_20,
                    "CHART netdata.apps_children_fix '' 'Apps Plugin Exited Children Normalization Ratios' 'percentage' apps.plugin netdata.apps_children_fix line 140003 %1$d\n"
                    "DIMENSION cutime '' absolute 1 %2$llu\n"
                    "DIMENSION cstime '' absolute 1 %2$d\n"
                    "DIMENSION cgtime '' absolute 1 %2$llu\n"
                    "DIMENSION cminflt '' absolute 1 %2$llu\n"
                    "DIMENSION cmajflt '' absolute 1 %2$llu\n"
                    , VAR_23
                    , VAR_0
            );

    }

    FUNC_0(VAR_20,
        "BEGIN netdata.apps_cpu %d\n"
        "SET user = %d\n"
        "SET system = %d\n"
        "END\n"
        "BEGIN netdata.apps_sizes %d\n"
        "SET calls = %d\n"
        "SET files = %d\n"
        "SET filenames = %d\n"
        "SET inode_changes = %d\n"
        "SET link_changes = %d\n"
        "SET pids = %d\n"
        "SET fds = %d\n"
        "SET targets = %d\n"
        "SET new_pids = %d\n"
        "END\n"
        , VAR_25
        , VAR_30
        , VAR_31
        , VAR_25
        , VAR_6
        , VAR_12
        , VAR_13
        , VAR_16
        , VAR_17
        , VAR_4
        , VAR_3
        , VAR_5
        , VAR_22
        );

    FUNC_0(VAR_20,
            "BEGIN netdata.apps_fix %d\n"
            "SET utime = %u\n"
            "SET stime = %u\n"
            "SET gtime = %u\n"
            "SET minflt = %u\n"
            "SET majflt = %u\n"
            "END\n"
            , VAR_25
            , (unsigned int)(VAR_24 * 100 * VAR_0)
            , (unsigned int)(VAR_21 * 100 * VAR_0)
            , (unsigned int)(VAR_14 * 100 * VAR_0)
            , (unsigned int)(VAR_19 * 100 * VAR_0)
            , (unsigned int)(VAR_18 * 100 * VAR_0)
    );

    if(VAR_15)
        FUNC_0(VAR_20,
            "BEGIN netdata.apps_children_fix %d\n"
            "SET cutime = %u\n"
            "SET cstime = %u\n"
            "SET cgtime = %u\n"
            "SET cminflt = %u\n"
            "SET cmajflt = %u\n"
            "END\n"
            , VAR_25
            , (unsigned int)(VAR_11 * 100 * VAR_0)
            , (unsigned int)(VAR_10 * 100 * VAR_0)
            , (unsigned int)(VAR_7 * 100 * VAR_0)
            , (unsigned int)(VAR_9 * 100 * VAR_0)
            , (unsigned int)(VAR_8 * 100 * VAR_0)
            );
}

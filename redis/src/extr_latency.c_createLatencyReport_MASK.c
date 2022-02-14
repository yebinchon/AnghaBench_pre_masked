
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct latencyTimeSeries {scalar_t__ max; } ;
struct latencyStats {double samples; scalar_t__ period; scalar_t__ mad; scalar_t__ avg; } ;
typedef int sds ;
typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_2__ {int latency_monitor_threshold; int stat_fork_rate; int slowlog_log_slower_than; scalar_t__ aof_fsync; int hz; int latency_events; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*,struct latencyStats*) ;
 char* FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 struct latencyTimeSeries* FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (int ,char*,unsigned long long,...) ;
 int FUNC_11 () ;
 TYPE_1__ VAR_1 ;
 int FUNC_12 (char*,char*) ;

sds FUNC_13(void) {
    sds VAR_2 = FUNC_11();
    int VAR_3 = 0;
    int VAR_4 = 0;
    int VAR_5 = 0;
    int VAR_6 = 0;
    int VAR_7 = 0;
    int VAR_8 = 0;
    int VAR_9 = 0;
    int VAR_10 = 0;
    int VAR_11 = 0;
    int VAR_12 = 0;
    int VAR_13 = 0;
    int VAR_14 = 0;
    int VAR_15 = 0;
    int VAR_16 = 0;
    int VAR_17 = 0;
    int VAR_18 = 0;
    int VAR_19 = 0;



    if (FUNC_7(VAR_1.latency_events) == 0 &&
        VAR_1.latency_monitor_threshold == 0)
    {
        VAR_2 = FUNC_8(VAR_2,"I'm sorry, Dave, I can't do that. Latency monitoring is disabled in this Redis instance. You may use \"CONFIG SET latency-monitor-threshold <milliseconds>.\" in order to enable it. If we weren't in a deep space mission I'd suggest to take a look at http://redis.io/topics/latency-monitor.\n");
        return VAR_2;
    }



    dictIterator *VAR_20;
    dictEntry *VAR_21;
    int VAR_22 = 0;

    VAR_20 = FUNC_3(VAR_1.latency_events);
    while((VAR_21 = FUNC_5(VAR_20)) != ((void*)0)) {
        char *VAR_23 = FUNC_2(VAR_21);
        struct latencyTimeSeries *VAR_24 = FUNC_4(VAR_21);
        struct latencyStats VAR_25;

        if (VAR_24 == ((void*)0)) continue;
        VAR_22++;
        if (VAR_22 == 1) {
            VAR_2 = FUNC_8(VAR_2,"Dave, I have observed latency spikes in this Redis instance. You don't mind talking about it, do you Dave?\n\n");
        }
        FUNC_1(VAR_23,&VAR_25);

        VAR_2 = FUNC_10(VAR_2,
            "%d. %s: %d latency spikes (average %lums, mean deviation %lums, period %.2f sec). Worst all time event %lums.",
            VAR_22, VAR_23,
            VAR_25.samples,
            (unsigned long) VAR_25.avg,
            (unsigned long) VAR_25.mad,
            (double) VAR_25.period/VAR_25.samples,
            (unsigned long) VAR_24->max);


        if (!FUNC_12(VAR_23,"fork")) {
            char *VAR_26;
            if (VAR_1.stat_fork_rate < 10) {
                VAR_26 = "terrible";
                VAR_3 = 1;
                VAR_19++;
            } else if (VAR_1.stat_fork_rate < 25) {
                VAR_26 = "poor";
                VAR_3 = 1;
                VAR_19++;
            } else if (VAR_1.stat_fork_rate < 100) {
                VAR_26 = "good";
            } else {
                VAR_26 = "excellent";
            }
            VAR_2 = FUNC_10(VAR_2,
                " Fork rate is %.2f GB/sec (%s).", VAR_1.stat_fork_rate,
                VAR_26);
        }


        if (!FUNC_12(VAR_23,"command")) {
            if (VAR_1.slowlog_log_slower_than < 0) {
                VAR_4 = 1;
                VAR_19++;
            } else if (VAR_1.slowlog_log_slower_than/1000 >
                       VAR_1.latency_monitor_threshold)
            {
                VAR_5 = 1;
                VAR_19++;
            }
            VAR_6 = 1;
            VAR_15 = 1;
            VAR_19 += 2;
        }


        if (!FUNC_12(VAR_23,"fast-command")) {
            VAR_8 = 1;
            VAR_19++;
        }


        if (!FUNC_12(VAR_23,"aof-write-pending-fsync")) {
            VAR_11 = 1;
            VAR_7 = 1;
            VAR_12 = 1;
            VAR_9 = 1;
            VAR_19 += 4;
        }

        if (!FUNC_12(VAR_23,"aof-write-active-child")) {
            VAR_10 = 1;
            VAR_9 = 1;
            VAR_12 = 1;
            VAR_19 += 3;
        }

        if (!FUNC_12(VAR_23,"aof-write-alone")) {
            VAR_11 = 1;
            VAR_9 = 1;
            VAR_12 = 1;
            VAR_19 += 3;
        }

        if (!FUNC_12(VAR_23,"aof-fsync-always")) {
            VAR_17 = 1;
            VAR_19++;
        }

        if (!FUNC_12(VAR_23,"aof-fstat") ||
            !FUNC_12(VAR_23,"rdb-unlik-temp-file")) {
            VAR_7 = 1;
            VAR_11 = 1;
            VAR_19 += 2;
        }

        if (!FUNC_12(VAR_23,"aof-rewrite-diff-write") ||
            !FUNC_12(VAR_23,"aof-rename")) {
            VAR_13 = 1;
            VAR_9 = 1;
            VAR_12 = 1;
            VAR_11 = 1;
            VAR_19 += 4;
        }


        if (!FUNC_12(VAR_23,"expire-cycle")) {
            VAR_14 = 1;
            VAR_15 = 1;
            VAR_19 += 2;
        }


        if (!FUNC_12(VAR_23,"eviction-del")) {
            VAR_15 = 1;
            VAR_19++;
        }

        if (!FUNC_12(VAR_23,"eviction-cycle")) {
            VAR_16 = 1;
            VAR_19++;
        }

        VAR_2 = FUNC_9(VAR_2,"\n",1);
    }
    FUNC_6(VAR_20);


    if (FUNC_0() > 0) {
        VAR_18 = 1;
        VAR_19++;
    }

    if (VAR_22 == 0 && VAR_19 == 0) {
        VAR_2 = FUNC_8(VAR_2,"Dave, no latency spike was observed during the lifetime of this Redis instance, not in the slightest bit. I honestly think you ought to sit down calmly, take a stress pill, and think things over.\n");
    } else if (VAR_22 > 0 && VAR_19 == 0) {
        VAR_2 = FUNC_8(VAR_2,"\nWhile there are latency events logged, I'm not able to suggest any easy fix. Please use the Redis community to get some help, providing this report in your help request.\n");
    } else {



        VAR_2 = FUNC_8(VAR_2,"\nI have a few advices for you:\n\n");
        if (VAR_3) {
            VAR_2 = FUNC_8(VAR_2,"- If you are using a virtual machine, consider upgrading it with a faster one using an hypervisior that provides less latency during fork() calls. Xen is known to have poor fork() performance. Even in the context of the same VM provider, certain kinds of instances can execute fork faster than others.\n");
        }


        if (VAR_4) {
            VAR_2 = FUNC_10(VAR_2,"- There are latency issues with potentially slow commands you are using. Try to enable the Slow Log Redis feature using the command 'CONFIG SET slowlog-log-slower-than %llu'. If the Slow log is disabled Redis is not able to log slow commands execution for you.\n", (unsigned long long)VAR_1.latency_monitor_threshold*1000);
        }

        if (VAR_5) {
            VAR_2 = FUNC_10(VAR_2,"- Your current Slow Log configuration only logs events that are slower than your configured latency monitor threshold. Please use 'CONFIG SET slowlog-log-slower-than %llu'.\n", (unsigned long long)VAR_1.latency_monitor_threshold*1000);
        }

        if (VAR_6) {
            VAR_2 = FUNC_8(VAR_2,"- Check your Slow Log to understand what are the commands you are running which are too slow to execute. Please check http://redis.io/commands/slowlog for more information.\n");
        }


        if (VAR_8) {
            VAR_2 = FUNC_8(VAR_2,"- The system is slow to execute Redis code paths not containing system calls. This usually means the system does not provide Redis CPU time to run for long periods. You should try to:\n"
            "  1) Lower the system load.\n"
            "  2) Use a computer / VM just for Redis if you are running other softawre in the same system.\n"
            "  3) Check if you have a \"noisy neighbour\" problem.\n"
            "  4) Check with 'redis-cli --intrinsic-latency 100' what is the intrinsic latency in your system.\n"
            "  5) Check if the problem is allocator-related by recompiling Redis with MALLOC=libc, if you are using Jemalloc. However this may create fragmentation problems.\n");
        }


        if (VAR_11) {
            VAR_2 = FUNC_8(VAR_2,"- It is strongly advised to use local disks for persistence, especially if you are using AOF. Remote disks provided by platform-as-a-service providers are known to be slow.\n");
        }

        if (VAR_12) {
            VAR_2 = FUNC_8(VAR_2,"- SSD disks are able to reduce fsync latency, and total time needed for snapshotting and AOF log rewriting (resulting in smaller memory usage and smaller final AOF rewrite buffer flushes). With extremely high write load SSD disks can be a good option. However Redis should perform reasonably with high load using normal disks. Use this advice as a last resort.\n");
        }

        if (VAR_9) {
            VAR_2 = FUNC_8(VAR_2,"- Mounting ext3/4 filesystems with data=writeback can provide a performance boost compared to data=ordered, however this mode of operation provides less guarantees, and sometimes it can happen that after a hard crash the AOF file will have an half-written command at the end and will require to be repaired before Redis restarts.\n");
        }

        if (VAR_7) {
            VAR_2 = FUNC_8(VAR_2,"- Try to lower the disk contention. This is often caused by other disk intensive processes running in the same computer (including other Redis instances).\n");
        }

        if (VAR_10) {
            VAR_2 = FUNC_8(VAR_2,"- Assuming from the point of view of data safety this is viable in your environment, you could try to enable the 'no-appendfsync-on-rewrite' option, so that fsync will not be performed while there is a child rewriting the AOF file or producing an RDB file (the moment where there is high disk contention).\n");
        }

        if (VAR_17 && VAR_1.aof_fsync == VAR_0) {
            VAR_2 = FUNC_8(VAR_2,"- Your fsync policy is set to 'always'. It is very hard to get good performances with such a setup, if possible try to relax the fsync policy to 'onesec'.\n");
        }

        if (VAR_13) {
            VAR_2 = FUNC_8(VAR_2,"- Latency during the AOF atomic rename operation or when the final difference is flushed to the AOF file at the end of the rewrite, sometimes is caused by very high write load, causing the AOF buffer to get very large. If possible try to send less commands to accomplish the same work, or use Lua scripts to group multiple operations into a single EVALSHA call.\n");
        }

        if (VAR_14 && VAR_1.hz < 100) {
            VAR_2 = FUNC_8(VAR_2,"- In order to make the Redis keys expiring process more incremental, try to set the 'hz' configuration parameter to 100 using 'CONFIG SET hz 100'.\n");
        }

        if (VAR_15) {
            VAR_2 = FUNC_8(VAR_2,"- Deleting, expiring or evicting (because of maxmemory policy) large objects is a blocking operation. If you have very large objects that are often deleted, expired, or evicted, try to fragment those objects into multiple smaller objects.\n");
        }

        if (VAR_16) {
            VAR_2 = FUNC_8(VAR_2,"- Sudden changes to the 'maxmemory' setting via 'CONFIG SET', or allocation of large objects via sets or sorted sets intersections, STORE option of SORT, Redis Cluster large keys migrations (RESTORE command), may create sudden memory pressure forcing the server to block trying to evict keys. \n");
        }

        if (VAR_18) {
            VAR_2 = FUNC_8(VAR_2,"- I detected a non zero amount of anonymous huge pages used by your process. This creates very serious latency events in different conditions, especially when Redis is persisting on disk. To disable THP support use the command 'echo never > /sys/kernel/mm/transparent_hugepage/enabled', make sure to also add it into /etc/rc.local so that the command will be executed again after a reboot. Note that even if you have already disabled THP, you still need to restart the Redis process to get rid of the huge pages already created.\n");
        }
    }

    return VAR_2;
}

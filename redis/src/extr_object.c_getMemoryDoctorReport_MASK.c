
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct redisMemOverhead {int total_allocated; double total_frag; int total_frag_bytes; double allocator_frag; int allocator_frag_bytes; double allocator_rss; int allocator_rss_bytes; double rss_extra; int rss_extra_bytes; long clients_normal; long clients_slaves; scalar_t__ peak_allocated; } ;
typedef int sds ;
struct TYPE_2__ {int lua_scripts; int clients; int slaves; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct redisMemOverhead*) ;
 struct redisMemOverhead* FUNC_2 () ;
 long FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (char*) ;
 TYPE_1__ VAR_1 ;

sds FUNC_7(void) {
    int VAR_2 = 0;
    int VAR_3 = 0;
    int VAR_4 = 0;
    int VAR_5 = 0;
    int VAR_6 = 0;
    int VAR_7 = 0;
    int VAR_8 = 0;
    int VAR_9 = 0;
    int VAR_10 = 0;
    int VAR_11 = 0;
    struct redisMemOverhead *VAR_12 = FUNC_2();

    if (VAR_12->total_allocated < (1024*1024*5)) {
        VAR_2 = 1;
        VAR_11++;
    } else {

        if (((float)VAR_12->peak_allocated / VAR_12->total_allocated) > 1.5) {
            VAR_3 = 1;
            VAR_11++;
        }


        if (VAR_12->total_frag > 1.4 && VAR_12->total_frag_bytes > 10<<20) {
            VAR_4 = 1;
            VAR_11++;
        }


        if (VAR_12->allocator_frag > 1.1 && VAR_12->allocator_frag_bytes > 10<<20) {
            VAR_5 = 1;
            VAR_11++;
        }


        if (VAR_12->allocator_rss > 1.1 && VAR_12->allocator_rss_bytes > 10<<20) {
            VAR_7 = 1;
            VAR_11++;
        }


        if (VAR_12->rss_extra > 1.1 && VAR_12->rss_extra_bytes > 10<<20) {
            VAR_6 = 1;
            VAR_11++;
        }


        long VAR_13 = FUNC_3(VAR_1.slaves);
        long VAR_14 = FUNC_3(VAR_1.clients)-VAR_13;
        if (VAR_12->clients_normal / VAR_14 > (1024*200)) {
            VAR_9 = 1;
            VAR_11++;
        }


        if (VAR_13 > 0 && VAR_12->clients_slaves / VAR_13 > (1024*1024*10)) {
            VAR_8 = 1;
            VAR_11++;
        }


        if (FUNC_0(VAR_1.lua_scripts) > 1000) {
            VAR_10 = 1;
            VAR_11++;
        }
    }

    sds VAR_15;
    if (VAR_11 == 0) {
        VAR_15 = FUNC_6(
        "Hi Sam, I can't find any memory issue in your instance. "
        "I can only account for what occurs on this base.\n");
    } else if (VAR_2 == 1) {
        VAR_15 = FUNC_6(
        "Hi Sam, this instance is empty or is using very little memory, "
        "my issues detector can't be used in these conditions. "
        "Please, leave for your mission on Earth and fill it with some data. "
        "The new Sam and I will be back to our programming as soon as I "
        "finished rebooting.\n");
    } else {
        VAR_15 = FUNC_6("Sam, I detected a few issues in this Redis instance memory implants:\n\n");
        if (VAR_3) {
            VAR_15 = FUNC_4(VAR_15," * Peak memory: In the past this instance used more than 150% the memory that is currently using. The allocator is normally not able to release memory after a peak, so you can expect to see a big fragmentation ratio, however this is actually harmless and is only due to the memory peak, and if the Redis instance Resident Set Size (RSS) is currently bigger than expected, the memory will be used as soon as you fill the Redis instance with more data. If the memory peak was only occasional and you want to try to reclaim memory, please try the MEMORY PURGE command, otherwise the only other option is to shutdown and restart the instance.\n\n");
        }
        if (VAR_4) {
            VAR_15 = FUNC_5(VAR_15," * High total RSS: This instance has a memory fragmentation and RSS overhead greater than 1.4 (this means that the Resident Set Size of the Redis process is much larger than the sum of the logical allocations Redis performed). This problem is usually due either to a large peak memory (check if there is a peak memory entry above in the report) or may result from a workload that causes the allocator to fragment memory a lot. If the problem is a large peak memory, then there is no issue. Otherwise, make sure you are using the Jemalloc allocator and not the default libc malloc. Note: The currently used allocator is \"%s\".\n\n", VAR_0);
        }
        if (VAR_5) {
            VAR_15 = FUNC_5(VAR_15," * High allocator fragmentation: This instance has an allocator external fragmentation greater than 1.1. This problem is usually due either to a large peak memory (check if there is a peak memory entry above in the report) or may result from a workload that causes the allocator to fragment memory a lot. You can try enabling 'activedefrag' config option.\n\n");
        }
        if (VAR_7) {
            VAR_15 = FUNC_5(VAR_15," * High allocator RSS overhead: This instance has an RSS memory overhead is greater than 1.1 (this means that the Resident Set Size of the allocator is much larger than the sum what the allocator actually holds). This problem is usually due to a large peak memory (check if there is a peak memory entry above in the report), you can try the MEMORY PURGE command to reclaim it.\n\n");
        }
        if (VAR_6) {
            VAR_15 = FUNC_5(VAR_15," * High process RSS overhead: This instance has non-allocator RSS memory overhead is greater than 1.1 (this means that the Resident Set Size of the Redis process is much larger than the RSS the allocator holds). This problem may be due to Lua scripts or Modules.\n\n");
        }
        if (VAR_8) {
            VAR_15 = FUNC_4(VAR_15," * Big replica buffers: The replica output buffers in this instance are greater than 10MB for each replica (on average). This likely means that there is some replica instance that is struggling receiving data, either because it is too slow or because of networking issues. As a result, data piles on the master output buffers. Please try to identify what replica is not receiving data correctly and why. You can use the INFO output in order to check the replicas delays and the CLIENT LIST command to check the output buffers of each replica.\n\n");
        }
        if (VAR_9) {
            VAR_15 = FUNC_4(VAR_15," * Big client buffers: The clients output buffers in this instance are greater than 200K per client (on average). This may result from different causes, like Pub/Sub clients subscribed to channels bot not receiving data fast enough, so that data piles on the Redis instance output buffer, or clients sending commands with large replies or very large sequences of commands in the same pipeline. Please use the CLIENT LIST command in order to investigate the issue if it causes problems in your instance, or to understand better why certain clients are using a big amount of memory.\n\n");
        }
        if (VAR_10) {
            VAR_15 = FUNC_4(VAR_15," * Many scripts: There seem to be many cached scripts in this instance (more than 1000). This may be because scripts are generated and `EVAL`ed, instead of being parameterized (with KEYS and ARGV), `SCRIPT LOAD`ed and `EVALSHA`ed. Unless `SCRIPT FLUSH` is called periodically, the scripts' caches may end up consuming most of your memory.\n\n");
        }
        VAR_15 = FUNC_4(VAR_15,"I'm here to keep you safe, Sam. I want to help you.\n");
    }
    FUNC_1(VAR_12);
    return VAR_15;
}

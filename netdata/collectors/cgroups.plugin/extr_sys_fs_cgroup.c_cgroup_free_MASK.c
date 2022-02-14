
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_18__ {struct cgroup* filename; } ;
struct TYPE_17__ {struct cgroup* filename; } ;
struct TYPE_16__ {struct cgroup* filename; } ;
struct TYPE_15__ {struct cgroup* filename; } ;
struct TYPE_14__ {struct cgroup* filename; } ;
struct TYPE_13__ {struct cgroup* filename; } ;
struct TYPE_12__ {struct cgroup* filename_msw_usage_in_bytes; struct cgroup* filename_usage_in_bytes; struct cgroup* filename_failcnt; struct cgroup* filename_detailed; int arl_base; } ;
struct TYPE_11__ {struct cgroup* filename; struct cgroup* cpu_percpu; } ;
struct TYPE_10__ {struct cgroup* filename; } ;
struct cgroup {struct cgroup* chart_title; struct cgroup* chart_id; struct cgroup* id; TYPE_9__ io_queued; TYPE_8__ io_merged; TYPE_7__ throttle_io_serviced; TYPE_6__ throttle_io_service_bytes; TYPE_5__ io_serviced; TYPE_4__ io_service_bytes; TYPE_3__ memory; TYPE_2__ cpuacct_usage; TYPE_1__ cpuacct_stat; struct cgroup* filename_memoryswap_limit; struct cgroup* filename_memory_limit; struct cgroup* filename_cpu_cfs_quota; struct cgroup* filename_cpu_cfs_period; struct cgroup* filename_cpuset_cpus; scalar_t__ st_merged_ops; scalar_t__ st_queued_ops; scalar_t__ st_throttle_serviced_ops; scalar_t__ st_throttle_io; scalar_t__ st_serviced_ops; scalar_t__ st_io; scalar_t__ st_mem_failcnt; scalar_t__ st_mem_usage_limit; scalar_t__ st_mem_usage; scalar_t__ st_pgfaults; scalar_t__ st_mem_activity; scalar_t__ st_writeback; scalar_t__ st_mem; scalar_t__ st_cpu_per_core; scalar_t__ st_cpu_limit; scalar_t__ st_cpu; scalar_t__ available; scalar_t__ enabled; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,struct cgroup*,struct cgroup*,char*,char*) ;
 int FUNC_2 (struct cgroup*) ;
 int FUNC_3 (struct cgroup*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_5(struct cgroup *VAR_2) {
    FUNC_1(VAR_0, "Removing cgroup '%s' with chart id '%s' (was %s and %s)", VAR_2->id, VAR_2->chart_id, (VAR_2->enabled)?"enabled":"disabled", (VAR_2->available)?"available":"not available");

    if(VAR_2->st_cpu) FUNC_4(VAR_2->st_cpu);
    if(VAR_2->st_cpu_limit) FUNC_4(VAR_2->st_cpu_limit);
    if(VAR_2->st_cpu_per_core) FUNC_4(VAR_2->st_cpu_per_core);
    if(VAR_2->st_mem) FUNC_4(VAR_2->st_mem);
    if(VAR_2->st_writeback) FUNC_4(VAR_2->st_writeback);
    if(VAR_2->st_mem_activity) FUNC_4(VAR_2->st_mem_activity);
    if(VAR_2->st_pgfaults) FUNC_4(VAR_2->st_pgfaults);
    if(VAR_2->st_mem_usage) FUNC_4(VAR_2->st_mem_usage);
    if(VAR_2->st_mem_usage_limit) FUNC_4(VAR_2->st_mem_usage_limit);
    if(VAR_2->st_mem_failcnt) FUNC_4(VAR_2->st_mem_failcnt);
    if(VAR_2->st_io) FUNC_4(VAR_2->st_io);
    if(VAR_2->st_serviced_ops) FUNC_4(VAR_2->st_serviced_ops);
    if(VAR_2->st_throttle_io) FUNC_4(VAR_2->st_throttle_io);
    if(VAR_2->st_throttle_serviced_ops) FUNC_4(VAR_2->st_throttle_serviced_ops);
    if(VAR_2->st_queued_ops) FUNC_4(VAR_2->st_queued_ops);
    if(VAR_2->st_merged_ops) FUNC_4(VAR_2->st_merged_ops);

    FUNC_3(VAR_2->filename_cpuset_cpus);
    FUNC_3(VAR_2->filename_cpu_cfs_period);
    FUNC_3(VAR_2->filename_cpu_cfs_quota);
    FUNC_3(VAR_2->filename_memory_limit);
    FUNC_3(VAR_2->filename_memoryswap_limit);

    FUNC_2(VAR_2);

    FUNC_3(VAR_2->cpuacct_usage.cpu_percpu);

    FUNC_3(VAR_2->cpuacct_stat.filename);
    FUNC_3(VAR_2->cpuacct_usage.filename);

    FUNC_0(VAR_2->memory.arl_base);
    FUNC_3(VAR_2->memory.filename_detailed);
    FUNC_3(VAR_2->memory.filename_failcnt);
    FUNC_3(VAR_2->memory.filename_usage_in_bytes);
    FUNC_3(VAR_2->memory.filename_msw_usage_in_bytes);

    FUNC_3(VAR_2->io_service_bytes.filename);
    FUNC_3(VAR_2->io_serviced.filename);

    FUNC_3(VAR_2->throttle_io_service_bytes.filename);
    FUNC_3(VAR_2->throttle_io_serviced.filename);

    FUNC_3(VAR_2->io_merged.filename);
    FUNC_3(VAR_2->io_queued.filename);

    FUNC_3(VAR_2->id);
    FUNC_3(VAR_2->chart_id);
    FUNC_3(VAR_2->chart_title);

    FUNC_3(VAR_2);

    VAR_1--;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup {int options; int memory; int cpuacct_stat; int io_serviced; int io_service_bytes; int io_queued; int io_merged; int throttle_io_serviced; int throttle_io_service_bytes; int cpuacct_usage; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static inline void FUNC_7(struct cgroup *VAR_2) {
    FUNC_6(VAR_1, "reading metrics for cgroups '%s'", VAR_2->id);
    if(!(VAR_2->options & VAR_0)) {
        FUNC_3(&VAR_2->cpuacct_stat);
        FUNC_4(&VAR_2->cpuacct_usage);
        FUNC_5(&VAR_2->memory, 0);
        FUNC_2(&VAR_2->io_service_bytes);
        FUNC_2(&VAR_2->io_serviced);
        FUNC_2(&VAR_2->throttle_io_service_bytes);
        FUNC_2(&VAR_2->throttle_io_serviced);
        FUNC_2(&VAR_2->io_merged);
        FUNC_2(&VAR_2->io_queued);
    }
    else {

        FUNC_0(&VAR_2->io_service_bytes, 0);
        FUNC_0(&VAR_2->io_serviced, 4);
        FUNC_1(&VAR_2->cpuacct_stat);
        FUNC_5(&VAR_2->memory, 1);
    }
}

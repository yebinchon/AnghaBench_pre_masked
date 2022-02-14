
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup {char* filename_cpu_cfs_quota; int cpu_cfs_period; int cpuset_cpus; int cpu_cfs_quota; int id; } ;
typedef int procfile ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (char*,char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 unsigned long FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int *,char*,int *,int ) ;
 void* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (char*,int ) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static inline void FUNC_11(struct cgroup *VAR_2) {
    if(VAR_2->filename_cpu_cfs_quota){
        static procfile *VAR_3 = ((void*)0);

        VAR_3 = FUNC_7(VAR_3, VAR_2->filename_cpu_cfs_quota, ((void*)0), VAR_1);
        if(FUNC_10(!VAR_3)) {
            goto cpu_limits2_err;
        }

        VAR_3 = FUNC_6(VAR_3);
        if(FUNC_10(!VAR_3)) {
            goto cpu_limits2_err;
        }

        unsigned long VAR_4 = FUNC_4(VAR_3);

        if (FUNC_10(VAR_4 < 1)) {
            FUNC_1("CGROUP: file '%s' should have 1 lines.", VAR_2->filename_cpu_cfs_quota);
            return;
        }

        VAR_2->cpu_cfs_period = FUNC_8(FUNC_5(VAR_3, 0, 1));
        VAR_2->cpuset_cpus = FUNC_3();

        char *VAR_5 = "max\n\0";
        if(FUNC_9(VAR_5, FUNC_5(VAR_3, 0, 0)) == 0){
            VAR_2->cpu_cfs_quota = VAR_2->cpu_cfs_period * VAR_2->cpuset_cpus;
        } else {
            VAR_2->cpu_cfs_quota = FUNC_8(FUNC_5(VAR_3, 0, 0));
        }
        FUNC_0(VAR_0, "CPU limits values: %llu %llu %llu", VAR_2->cpu_cfs_period, VAR_2->cpuset_cpus, VAR_2->cpu_cfs_quota);
        return;

cpu_limits2_err:
        FUNC_1("Cannot refresh cgroup %s cpu limit by reading '%s'. Will not update its limit anymore.", VAR_2->id, VAR_2->filename_cpu_cfs_quota);
        FUNC_2(VAR_2->filename_cpu_cfs_quota);
        VAR_2->filename_cpu_cfs_quota = ((void*)0);

    }
}

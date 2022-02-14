
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup {unsigned long long cpuset_cpus; unsigned long long cpu_cfs_period; unsigned long long cpu_cfs_quota; int id; } ;


 unsigned long long FUNC_0 (char**) ;
 int FUNC_1 (char*,int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (unsigned long long) ;
 char* FUNC_5 (size_t) ;
 int FUNC_6 (char*,char*,size_t) ;
 int FUNC_7 (char*,unsigned long long*) ;

__attribute__((used)) static inline void FUNC_8(char **VAR_0, unsigned long long *VAR_1, struct cgroup *VAR_2) {
    if(*VAR_0) {
        int VAR_3 = -1;

        if(VAR_1 == &VAR_2->cpuset_cpus) {
            static char *VAR_4 = ((void*)0);
            static size_t VAR_5 = 0;

            if(!VAR_4) {
                VAR_5 = 100U + 6 * FUNC_3();
                VAR_4 = FUNC_5(VAR_5 + 1);
            }

            VAR_3 = FUNC_6(*VAR_0, VAR_4, VAR_5);

            if(!VAR_3) {
                char *VAR_6 = VAR_4;
                unsigned long long VAR_7 = 0;


                while(*VAR_6) {
                    unsigned long long VAR_8 = FUNC_0(&VAR_6);
                    if(*VAR_6 == ',') {
                        VAR_6++;
                        VAR_7++;
                        continue;
                    }
                    if(*VAR_6 == '-') {
                        VAR_6++;
                        unsigned long long VAR_9 = FUNC_0(&VAR_6);
                        VAR_7 += VAR_9 - VAR_8 + 1;
                    }
                    VAR_6++;
                }

                if(FUNC_4(VAR_7)) *VAR_1 = VAR_7;
            }
        }
        else if(VAR_1 == &VAR_2->cpu_cfs_period) {
            VAR_3 = FUNC_7(*VAR_0, VAR_1);
        }
        else if(VAR_1 == &VAR_2->cpu_cfs_quota) {
            VAR_3 = FUNC_7(*VAR_0, VAR_1);
        }
        else VAR_3 = -1;

        if(VAR_3) {
            FUNC_1("Cannot refresh cgroup %s cpu limit by reading '%s'. Will not update its limit anymore.", VAR_2->id, *VAR_0);
            FUNC_2(*VAR_0);
            *VAR_0 = ((void*)0);
        }
    }
}

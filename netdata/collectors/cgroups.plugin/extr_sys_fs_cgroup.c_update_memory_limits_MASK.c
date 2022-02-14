
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup {int options; int id; int st_mem_usage; } ;
typedef int calculated_number ;
typedef int RRDSETVAR ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 int FUNC_0 (char*,int ,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;
 scalar_t__ FUNC_3 (char*,unsigned long long*) ;
 int * FUNC_4 (int ,char const*) ;
 int FUNC_5 (int *,int ) ;
 unsigned long long FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static inline int FUNC_9(char **VAR_2, RRDSETVAR **VAR_3, unsigned long long *VAR_4, const char *VAR_5, struct cgroup *VAR_6) {
    if(*VAR_2) {
        if(FUNC_8(!*VAR_3)) {
            *VAR_3 = FUNC_4(VAR_6->st_mem_usage, VAR_5);
            if(!*VAR_3) {
                FUNC_0("Cannot create cgroup %s chart variable '%s'. Will not update its limit anymore.", VAR_6->id, VAR_5);
                FUNC_1(*VAR_2);
                *VAR_2 = ((void*)0);
            }
        }

        if(*VAR_2 && *VAR_3) {
            if(!(VAR_6->options & VAR_0)) {
                if(FUNC_3(*VAR_2, VAR_4)) {
                    FUNC_0("Cannot refresh cgroup %s memory limit by reading '%s'. Will not update its limit anymore.", VAR_6->id, *VAR_2);
                    FUNC_1(*VAR_2);
                    *VAR_2 = ((void*)0);
                }
                else {
                    FUNC_5(*VAR_3, (calculated_number)(*VAR_4 / (1024 * 1024)));
                    return 1;
                }
            } else {
                char VAR_7[30 + 1];
                int VAR_8 = FUNC_2(*VAR_2, VAR_7, 30);
                if(VAR_8) {
                    FUNC_0("Cannot refresh cgroup %s memory limit by reading '%s'. Will not update its limit anymore.", VAR_6->id, *VAR_2);
                    FUNC_1(*VAR_2);
                    *VAR_2 = ((void*)0);
                    return 0;
                }
                char *VAR_9 = "max\n\0";
                if(FUNC_7(VAR_9, VAR_7) == 0){
                    *VAR_4 = VAR_1;
                    FUNC_5(*VAR_3, (calculated_number)(*VAR_4 / (1024 * 1024)));
                    return 1;
                }
                *VAR_4 = FUNC_6(VAR_7);
                FUNC_5(*VAR_3, (calculated_number)(*VAR_4 / (1024 * 1024)));
                return 1;
            }
        }
    }
    return 0;
}

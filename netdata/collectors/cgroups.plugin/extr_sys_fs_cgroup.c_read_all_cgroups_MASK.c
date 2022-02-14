
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup {int pending_renames; scalar_t__ available; scalar_t__ enabled; struct cgroup* next; } ;


 int VAR_0 ;
 int FUNC_0 (struct cgroup*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static inline void FUNC_2(struct cgroup *VAR_1) {
    FUNC_1(VAR_0, "reading metrics for all cgroups");

    struct cgroup *VAR_2;

    for(VAR_2 = VAR_1; VAR_2 ; VAR_2 = VAR_2->next)
        if(VAR_2->enabled && VAR_2->available && !VAR_2->pending_renames)
            FUNC_0(VAR_2);
}

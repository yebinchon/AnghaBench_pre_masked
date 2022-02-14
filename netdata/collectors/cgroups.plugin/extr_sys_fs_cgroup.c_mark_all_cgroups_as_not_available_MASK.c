
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup {scalar_t__ available; struct cgroup* next; } ;


 int VAR_0 ;
 struct cgroup* VAR_1 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static inline void FUNC_1() {
    FUNC_0(VAR_0, "marking all cgroups as not available");

    struct cgroup *VAR_2;


    for(VAR_2 = VAR_1; VAR_2 ; VAR_2 = VAR_2->next) {
        VAR_2->available = 0;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target {scalar_t__ collected_starttime; scalar_t__ starttime; struct target* next; } ;



__attribute__((used)) static inline void FUNC_0(struct target *VAR_0) {
    struct target *VAR_1;
    for (VAR_1 = VAR_0; VAR_1 ; VAR_1 = VAR_1->next) {
        if(VAR_1->collected_starttime) {
            if (!VAR_1->starttime || VAR_1->collected_starttime < VAR_1->starttime) {
                VAR_1->starttime = VAR_1->collected_starttime;
            }
        } else {
            VAR_1->starttime = 0;
        }
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct score_board {int maxproc; TYPE_1__* proc; } ;
typedef scalar_t__ pid_t ;
struct TYPE_2__ {scalar_t__ pid; } ;



__attribute__((used)) static int
FUNC_0(struct score_board *VAR_0, pid_t VAR_1) {
    int VAR_2;
    for (VAR_2 = 0; VAR_2 < VAR_0->maxproc; VAR_2++) {
        if (VAR_0->proc[VAR_2].pid == VAR_1) {
            return VAR_2;
        }
    }
    return -1;
}

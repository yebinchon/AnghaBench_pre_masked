
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct score_board {int maxproc; TYPE_1__* proc; } ;
struct TYPE_2__ {scalar_t__ pid; scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_1(struct score_board *VAR_2) {
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_2->maxproc; VAR_3++) {
        if (VAR_2->proc[VAR_3].pid != 0 && VAR_2->proc[VAR_3].state == VAR_0) {
            FUNC_0(VAR_2->proc[VAR_3].pid, VAR_1);
            return;
        }
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct score_state {scalar_t__ state; int pid; } ;
struct score_board {int numidle; TYPE_1__* proc; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct score_board*,int ) ;

__attribute__((used)) static void
FUNC_1(struct score_board *VAR_1, struct score_state *VAR_2) {
    int VAR_3 = FUNC_0(VAR_1, VAR_2->pid);
    if (VAR_3 >= 0 && VAR_1->proc[VAR_3].state != VAR_2->state) {
        VAR_1->proc[VAR_3].state = VAR_2->state;
        if (VAR_2->state == VAR_0) {
            VAR_1->numidle++;
        }
        else {
            VAR_1->numidle--;
        }
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct score_board {int numidle; int numproc; TYPE_1__* proc; } ;
typedef int pid_t ;
struct TYPE_2__ {int state; int pid; } ;


 int VAR_0 ;
 int FUNC_0 (struct score_board*,int ) ;

__attribute__((used)) static void
FUNC_1(struct score_board *VAR_1, pid_t VAR_2) {
    int VAR_3 = FUNC_0(VAR_1, 0);
    if (VAR_3 >= 0) {
        VAR_1->proc[VAR_3].pid = VAR_2;
        VAR_1->proc[VAR_3].state = VAR_0;
        VAR_1->numproc++;
        VAR_1->numidle++;
    }
}

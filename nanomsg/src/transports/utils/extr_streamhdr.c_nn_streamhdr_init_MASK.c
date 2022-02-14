
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int src; int * fsm; } ;
struct nn_streamhdr {int * pipebase; TYPE_1__ usock_owner; int * usock; int done; int fsm; int timer; int state; } ;
struct nn_fsm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int,struct nn_streamhdr*,struct nn_fsm*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ,int *) ;

void FUNC_3 (struct nn_streamhdr *VAR_4, int VAR_5,
    struct nn_fsm *VAR_6)
{
    FUNC_1 (&VAR_4->fsm, VAR_2, VAR_3,
        VAR_5, VAR_4, VAR_6);
    VAR_4->state = VAR_1;
    FUNC_2 (&VAR_4->timer, VAR_0, &VAR_4->fsm);
    FUNC_0 (&VAR_4->done);

    VAR_4->usock = ((void*)0);
    VAR_4->usock_owner.src = -1;
    VAR_4->usock_owner.fsm = ((void*)0);
    VAR_4->pipebase = ((void*)0);
}

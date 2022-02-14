
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nn_pipebase_vfptr {int dummy; } ;
struct nn_pipebase {int out; int in; int options; TYPE_1__* sock; int outstate; int instate; int state; struct nn_pipebase_vfptr const* vfptr; int fsm; } ;
struct nn_ep_options {int dummy; } ;
struct nn_ep {int options; TYPE_1__* sock; } ;
struct TYPE_2__ {int fsm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *,int ,struct nn_pipebase*,int *) ;

void FUNC_4 (struct nn_pipebase *VAR_3,
    const struct nn_pipebase_vfptr *VAR_4, struct nn_ep *VAR_5)
{
    FUNC_1 (VAR_5->sock);

    FUNC_3 (&VAR_3->fsm, ((void*)0), ((void*)0), 0, VAR_3, &VAR_5->sock->fsm);
    VAR_3->vfptr = VAR_4;
    VAR_3->state = VAR_2;
    VAR_3->instate = VAR_0;
    VAR_3->outstate = VAR_1;
    VAR_3->sock = VAR_5->sock;
    FUNC_0 (&VAR_3->options, &VAR_5->options, sizeof (struct nn_ep_options));
    FUNC_2 (&VAR_3->in);
    FUNC_2 (&VAR_3->out);
}

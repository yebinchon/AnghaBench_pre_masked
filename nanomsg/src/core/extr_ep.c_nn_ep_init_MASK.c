
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_transport {int (* bind ) (struct nn_ep*) ;int (* connect ) (struct nn_ep*) ;} ;
struct nn_sock {int ep_template; int fsm; } ;
struct nn_ep_options {int dummy; } ;
struct nn_ep {int eid; int fsm; int item; int addr; int options; scalar_t__ last_errno; struct nn_sock* sock; int state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ,int ,int,struct nn_ep*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char const*) ;
 scalar_t__ FUNC_7 (char const*) ;
 int FUNC_8 (struct nn_ep*) ;
 int FUNC_9 (struct nn_ep*) ;

int FUNC_10 (struct nn_ep *VAR_4, int VAR_5, struct nn_sock *VAR_6, int VAR_7,
    const struct nn_transport *VAR_8, int VAR_9, const char *VAR_10)
{
    int VAR_11;

    FUNC_2 (&VAR_4->fsm, VAR_2, VAR_3,
        VAR_5, VAR_4, &VAR_6->fsm);
    VAR_4->state = VAR_0;

    VAR_4->sock = VAR_6;
    VAR_4->eid = VAR_7;
    VAR_4->last_errno = 0;
    FUNC_4 (&VAR_4->item);
    FUNC_0 (&VAR_4->options, &VAR_6->ep_template, sizeof(struct nn_ep_options));


    FUNC_1 (FUNC_7 (VAR_10) <= VAR_1);
    FUNC_6 (VAR_4->addr, VAR_10);


    if (VAR_9)
        VAR_11 = VAR_8->bind (VAR_4);
    else
        VAR_11 = VAR_8->connect (VAR_4);


    if (VAR_11 < 0) {
        FUNC_5 (&VAR_4->item);
        FUNC_3 (&VAR_4->fsm);
        return VAR_11;
    }

    return 0;
}

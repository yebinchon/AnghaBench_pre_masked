
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_ep {int dummy; } ;
struct nn_cipc {int fsm; int sipc; int retry; int usock; int state; struct nn_ep* ep; } ;
typedef int reconnect_ivl_max ;
typedef int reconnect_ivl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct nn_cipc*) ;
 struct nn_cipc* FUNC_1 (int,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int,int,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct nn_ep*) ;
 int FUNC_5 (struct nn_ep*,int ,int ,int*,size_t*) ;
 int FUNC_6 (struct nn_ep*,int *,struct nn_cipc*) ;
 int FUNC_7 (int *,int ,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,struct nn_ep*,int *) ;
 int FUNC_10 (int *,int ,int *) ;

int FUNC_11 (struct nn_ep *VAR_10)
{
    struct nn_cipc *VAR_11;
    int VAR_12;
    int VAR_13;
    size_t VAR_14;


    VAR_11 = FUNC_1 (sizeof (struct nn_cipc), "cipc");
    FUNC_0 (VAR_11);


    VAR_11->ep = VAR_10;
    FUNC_6 (VAR_10, &VAR_7, VAR_11);
    FUNC_7 (&VAR_11->fsm, VAR_8, VAR_9,
        FUNC_4 (VAR_10));
    VAR_11->state = VAR_3;
    FUNC_10 (&VAR_11->usock, VAR_2, &VAR_11->fsm);
    VAR_14 = sizeof (VAR_12);
    FUNC_5 (VAR_10, VAR_6, VAR_4, &VAR_12, &VAR_14);
    FUNC_2 (VAR_14 == sizeof (VAR_12));
    VAR_14 = sizeof (VAR_13);
    FUNC_5 (VAR_10, VAR_6, VAR_5,
        &VAR_13, &VAR_14);
    FUNC_2 (VAR_14 == sizeof (VAR_13));
    if (VAR_13 == 0)
        VAR_13 = VAR_12;
    FUNC_3 (&VAR_11->retry, VAR_0,
        VAR_12, VAR_13, &VAR_11->fsm);
    FUNC_9 (&VAR_11->sipc, VAR_1, VAR_10, &VAR_11->fsm);


    FUNC_8 (&VAR_11->fsm);

    return 0;
}

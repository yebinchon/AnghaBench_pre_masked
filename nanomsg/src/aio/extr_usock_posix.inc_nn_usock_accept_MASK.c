
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_usock {scalar_t__ errnum; int task_accept; int worker; int event_error; int fsm; int state; struct nn_usock* asock; int s; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int ,int *,int *,int ) ;
 scalar_t__ VAR_14 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct nn_usock*,int) ;
 int FUNC_11 (int ,int *) ;

void FUNC_12 (struct nn_usock *VAR_15, struct nn_usock *VAR_16)
{
    int VAR_17;


    if (FUNC_6(&VAR_15->fsm)) {
        FUNC_8 (&VAR_15->fsm);
        FUNC_5 (&VAR_15->fsm, VAR_10);
    }
    FUNC_5 (&VAR_16->fsm, VAR_9);
    VAR_17 = FUNC_0 (VAR_16->s, ((void*)0), ((void*)0));



    if (FUNC_4 (VAR_17 >= 0)) {


        VAR_16->asock = ((void*)0);
        VAR_15->asock = ((void*)0);

        FUNC_10 (VAR_15, VAR_17);
        FUNC_5 (&VAR_16->fsm, VAR_11);
        FUNC_5 (&VAR_15->fsm, VAR_11);
        return;
    }



    FUNC_2 (VAR_14 == VAR_0 || VAR_14 == VAR_7 ||
        VAR_14 == VAR_1 || VAR_14 == VAR_3 || VAR_14 == VAR_2 ||
        VAR_14 == VAR_4 || VAR_14 == VAR_5);



    FUNC_3 (!VAR_15->asock || VAR_15->asock == VAR_16);
    VAR_15->asock = VAR_16;
    FUNC_3 (!VAR_16->asock || VAR_16->asock == VAR_15);
    VAR_16->asock = VAR_15;




    if (FUNC_9 (VAR_14 != VAR_0 && VAR_14 != VAR_7
        && VAR_14 != VAR_1 && VAR_14 != VAR_16->errnum))
    {
        VAR_16->errnum = VAR_14;
        VAR_16->state = VAR_12;
        FUNC_7 (&VAR_16->fsm,
            &VAR_16->event_error, VAR_8);
        return;
    }


    FUNC_11 (VAR_16->worker, &VAR_16->task_accept);
}

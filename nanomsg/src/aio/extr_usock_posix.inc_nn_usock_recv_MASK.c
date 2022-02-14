
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int* pfd; size_t len; int * buf; } ;
struct nn_usock {scalar_t__ state; int task_recv; int worker; TYPE_1__ in; int event_received; int fsm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct nn_usock*,void*,size_t*) ;
 int FUNC_6 (int ,int *) ;

void FUNC_7 (struct nn_usock *VAR_4, void *VAR_5, size_t VAR_6, int *VAR_7)
{
    int VAR_8;
    size_t VAR_9;


    if (VAR_4->state != VAR_3) {
        FUNC_2 (&VAR_4->fsm, VAR_1);
        return;
    }


    VAR_9 = VAR_6;
    VAR_4->in.pfd = VAR_7;
    VAR_8 = FUNC_5 (VAR_4, VAR_5, &VAR_9);
    if (FUNC_4 (VAR_8 < 0)) {
        FUNC_0 (VAR_8 == -VAR_0, -VAR_8);
        FUNC_2 (&VAR_4->fsm, VAR_1);
        return;
    }


    if (FUNC_1 (VAR_9 == VAR_6)) {
        FUNC_3 (&VAR_4->fsm, &VAR_4->event_received, VAR_2);
        return;
    }


    VAR_4->in.buf = ((uint8_t*) VAR_5) + VAR_9;
    VAR_4->in.len = VAR_6 - VAR_9;


    FUNC_6 (VAR_4->worker, &VAR_4->task_recv);
}

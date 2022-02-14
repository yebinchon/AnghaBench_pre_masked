
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct nn_usock {int task_connecting; int worker; int fsm; scalar_t__ errnum; int s; } ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct sockaddr const*,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5 (struct nn_usock *VAR_5, const struct sockaddr *VAR_6,
    size_t VAR_7)
{
    int VAR_8;


    FUNC_2 (&VAR_5->fsm, VAR_1);


    VAR_8 = FUNC_0 (VAR_5->s, VAR_6, (socklen_t) VAR_7);


    if (FUNC_1 (VAR_8 == 0)) {
        FUNC_2 (&VAR_5->fsm, VAR_2);
        return;
    }


    if (FUNC_3 (VAR_4 != VAR_0)) {
        VAR_5->errnum = VAR_4;
        FUNC_2 (&VAR_5->fsm, VAR_3);
        return;
    }


    FUNC_4 (VAR_5->worker, &VAR_5->task_connecting);
}

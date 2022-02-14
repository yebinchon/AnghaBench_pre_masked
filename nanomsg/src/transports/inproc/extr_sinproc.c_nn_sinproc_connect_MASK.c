
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_sinproc {int event_connect; int fsm; } ;
struct nn_fsm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct nn_fsm*,int *,int ,int ,struct nn_sinproc*) ;
 int FUNC_1 (int *) ;

void FUNC_2 (struct nn_sinproc *VAR_2, struct nn_fsm *VAR_3)
{
    FUNC_1 (&VAR_2->fsm);


    FUNC_0 (&VAR_2->fsm, VAR_3, &VAR_2->event_connect,
        VAR_1, VAR_0, VAR_2);
}

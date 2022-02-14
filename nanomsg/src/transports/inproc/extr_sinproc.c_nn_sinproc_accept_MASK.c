
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_sinproc {int fsm; int event_connect; struct nn_sinproc* peer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int *,int ,int ,struct nn_sinproc*) ;
 int FUNC_3 (int *) ;

void FUNC_4 (struct nn_sinproc *VAR_3, struct nn_sinproc *VAR_4)
{
    FUNC_0 (!VAR_3->peer);
    VAR_3->peer = VAR_4;


    FUNC_2 (&VAR_3->fsm, &VAR_4->fsm, &VAR_3->event_connect,
        VAR_2, VAR_1, VAR_3);


    FUNC_3 (&VAR_3->fsm);
    FUNC_1 (&VAR_3->fsm, VAR_0);
}

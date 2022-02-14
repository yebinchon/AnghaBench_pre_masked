
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_fsm {int dummy; } ;
struct nn_dns {int done; int state; int fsm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int,struct nn_dns*,struct nn_fsm*) ;

void FUNC_2 (struct nn_dns *VAR_3, int VAR_4, struct nn_fsm *VAR_5)
{
    FUNC_1 (&VAR_3->fsm, VAR_1, VAR_2,
        VAR_4, VAR_3, VAR_5);
    VAR_3->state = VAR_0;
    FUNC_0 (&VAR_3->done);
}

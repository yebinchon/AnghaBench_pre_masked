
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_fsm {scalar_t__ state; int (* shutdown_fn ) (struct nn_fsm*,int,int,void*) ;int (* fn ) (struct nn_fsm*,int,int,void*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct nn_fsm*,int,int,void*) ;
 int FUNC_2 (struct nn_fsm*,int,int,void*) ;

void FUNC_3 (struct nn_fsm *VAR_1, int VAR_2, int VAR_3, void *VAR_4)
{
    if (FUNC_0 (VAR_1->state != VAR_0)) {
        VAR_1->fn (VAR_1, VAR_2, VAR_3, VAR_4);
    } else {
        VAR_1->shutdown_fn (VAR_1, VAR_2, VAR_3, VAR_4);
    }
}

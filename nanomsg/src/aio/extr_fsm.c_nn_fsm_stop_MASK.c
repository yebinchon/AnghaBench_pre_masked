
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_fsm {scalar_t__ state; int (* shutdown_fn ) (struct nn_fsm*,int ,int ,int *) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nn_fsm*,int ,int ,int *) ;

void FUNC_1 (struct nn_fsm *VAR_4)
{

    if (VAR_4->state != VAR_1)
        return;

    VAR_4->state = VAR_2;
    VAR_4->shutdown_fn (VAR_4, VAR_0, VAR_3, ((void*)0));
}

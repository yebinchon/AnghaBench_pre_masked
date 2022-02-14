
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_fsm {int state; int (* fn ) (struct nn_fsm*,int ,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nn_fsm*) ;
 int FUNC_2 (struct nn_fsm*,int ,int ,int *) ;

void FUNC_3 (struct nn_fsm *VAR_3)
{
    FUNC_0 (FUNC_1 (VAR_3));
    VAR_3->fn (VAR_3, VAR_0, VAR_1, ((void*)0));
    VAR_3->state = VAR_2;
}

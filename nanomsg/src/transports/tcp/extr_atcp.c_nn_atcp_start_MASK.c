
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nn_usock {int dummy; } ;
struct TYPE_2__ {int * fsm; int src; } ;
struct nn_atcp {int fsm; TYPE_1__ listener_owner; struct nn_usock* listener; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nn_atcp*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nn_usock*,TYPE_1__*) ;

void FUNC_3 (struct nn_atcp *VAR_2, struct nn_usock *VAR_3)
{
    FUNC_0 (VAR_2, VAR_1);


    VAR_2->listener = VAR_3;
    VAR_2->listener_owner.src = VAR_0;
    VAR_2->listener_owner.fsm = &VAR_2->fsm;
    FUNC_2 (VAR_3, &VAR_2->listener_owner);


    FUNC_1 (&VAR_2->fsm);
}

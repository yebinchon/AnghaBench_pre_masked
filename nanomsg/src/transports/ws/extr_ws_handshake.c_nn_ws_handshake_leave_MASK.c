
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int src; int * fsm; } ;
struct nn_ws_handshake {int done; int fsm; int state; TYPE_1__ usock_owner; int * usock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2 (struct nn_ws_handshake *VAR_1, int VAR_2)
{
    FUNC_1 (VAR_1->usock, &VAR_1->usock_owner);
    VAR_1->usock = ((void*)0);
    VAR_1->usock_owner.src = -1;
    VAR_1->usock_owner.fsm = ((void*)0);
    VAR_1->state = VAR_0;
    FUNC_0 (&VAR_1->fsm, &VAR_1->done, VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct nn_usock {int dummy; } ;
struct TYPE_2__ {int * fsm; int src; } ;
struct nn_sws {int mode; char const* resource; char const* remote_host; int fsm; int msg_type; struct nn_usock* usock; TYPE_1__ usock_owner; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nn_usock*,TYPE_1__*) ;

void FUNC_3 (struct nn_sws *VAR_1, struct nn_usock *VAR_2, int VAR_3,
    const char *VAR_4, const char *VAR_5, uint8_t VAR_6)
{

    FUNC_0 (VAR_1->usock == ((void*)0) && VAR_1->usock_owner.fsm == ((void*)0));
    VAR_1->usock_owner.src = VAR_0;
    VAR_1->usock_owner.fsm = &VAR_1->fsm;
    FUNC_2 (VAR_2, &VAR_1->usock_owner);
    VAR_1->usock = VAR_2;
    VAR_1->mode = VAR_3;
    VAR_1->resource = VAR_4;
    VAR_1->remote_host = VAR_5;

    VAR_1->msg_type = VAR_6;


    FUNC_1 (&VAR_1->fsm);
}

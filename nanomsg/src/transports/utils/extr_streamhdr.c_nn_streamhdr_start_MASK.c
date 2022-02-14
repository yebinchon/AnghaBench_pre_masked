
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct nn_usock {int dummy; } ;
struct TYPE_2__ {int * fsm; int src; } ;
struct nn_streamhdr {int fsm; scalar_t__ protohdr; struct nn_pipebase* pipebase; struct nn_usock* usock; TYPE_1__ usock_owner; } ;
struct nn_pipebase {int dummy; } ;
typedef int protocol ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nn_pipebase*,int ,int ,int*,size_t*) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (struct nn_usock*,TYPE_1__*) ;

void FUNC_6 (struct nn_streamhdr *VAR_3, struct nn_usock *VAR_4,
    struct nn_pipebase *VAR_5)
{
    size_t VAR_6;
    int VAR_7;


    FUNC_1 (VAR_3->usock == ((void*)0) && VAR_3->usock_owner.fsm == ((void*)0));
    VAR_3->usock_owner.src = VAR_2;
    VAR_3->usock_owner.fsm = &VAR_3->fsm;
    FUNC_5 (VAR_4, &VAR_3->usock_owner);
    VAR_3->usock = VAR_4;
    VAR_3->pipebase = VAR_5;


    VAR_6 = sizeof (VAR_7);
    FUNC_3 (VAR_5, VAR_1, VAR_0, &VAR_7, &VAR_6);
    FUNC_1 (VAR_6 == sizeof (VAR_7));


    FUNC_0 (VAR_3->protohdr, "\0SP\0\0\0\0\0", 8);
    FUNC_4 (VAR_3->protohdr + 4, (uint16_t) VAR_7);


    FUNC_2 (&VAR_3->fsm);
}

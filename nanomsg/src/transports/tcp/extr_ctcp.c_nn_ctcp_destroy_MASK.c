
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_ctcp {int fsm; int usock; int retry; int stcp; int dns; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nn_ctcp*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6 (void *VAR_0)
{
    struct nn_ctcp *VAR_1 = VAR_0;

    FUNC_1 (&VAR_1->dns);
    FUNC_4 (&VAR_1->stcp);
    FUNC_0 (&VAR_1->retry);
    FUNC_5 (&VAR_1->usock);
    FUNC_3 (&VAR_1->fsm);

    FUNC_2 (VAR_1);
}

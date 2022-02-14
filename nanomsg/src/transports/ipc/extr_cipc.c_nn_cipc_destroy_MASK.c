
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_cipc {int fsm; int usock; int retry; int sipc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nn_cipc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5 (void *VAR_0)
{
    struct nn_cipc *VAR_1 = VAR_0;

    FUNC_3 (&VAR_1->sipc);
    FUNC_0 (&VAR_1->retry);
    FUNC_4 (&VAR_1->usock);
    FUNC_2 (&VAR_1->fsm);

    FUNC_1 (VAR_1);
}

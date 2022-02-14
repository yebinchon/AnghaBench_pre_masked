
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_aipc {int fsm; int usock; int sipc; int accepted; int done; int item; } ;


 int VAR_0 ;
 int FUNC_0 (struct nn_aipc*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6 (struct nn_aipc *VAR_1)
{
    FUNC_0 (VAR_1, VAR_0);

    FUNC_3 (&VAR_1->item);
    FUNC_1 (&VAR_1->done);
    FUNC_1 (&VAR_1->accepted);
    FUNC_4 (&VAR_1->sipc);
    FUNC_5 (&VAR_1->usock);
    FUNC_2 (&VAR_1->fsm);
}

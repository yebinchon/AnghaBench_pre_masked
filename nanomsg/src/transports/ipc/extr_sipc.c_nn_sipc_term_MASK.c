
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_sipc {int fsm; int streamhdr; int pipebase; int inmsg; int outmsg; int done; } ;


 int VAR_0 ;
 int FUNC_0 (struct nn_sipc*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6 (struct nn_sipc *VAR_1)
{
    FUNC_0 (VAR_1, VAR_0);

    FUNC_1 (&VAR_1->done);
    FUNC_3 (&VAR_1->outmsg);
    FUNC_3 (&VAR_1->inmsg);
    FUNC_4 (&VAR_1->pipebase);
    FUNC_5 (&VAR_1->streamhdr);
    FUNC_2 (&VAR_1->fsm);
}
